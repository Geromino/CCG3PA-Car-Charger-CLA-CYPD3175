/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

/* [] END OF FILE */
/*
File: printf.h

Copyright (C) 2004  Kustaa Nyholm

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
See the GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

This library is realy just two files: 'printf.h' and 'printf.c'.

They provide a simple and small (+200 loc) printf functionality to 
be used in embedded systems.

I've found them so usefull in debugging that I do not bother with a 
debugger at all.

They are distributed in source form, so to use them, just compile them 
into your project. 

Two printf variants are provided: printf and sprintf. 

The formats supported by this implementation are: 'd' 'u' 'c' 's' 'x' 'X'.

Zero padding and field width are also supported.

If the library is compiled with 'PRINTF_SUPPORT_LONG' defined then the 
long specifier is also
supported. Note that this will pull in some long math routines (pun intended!)
and thus make your executable noticably longer.

The memory foot print of course depends on the target cpu, compiler and 
compiler options, but a rough guestimate (based on a H8S target) is about 
1.4 kB for code and some twenty 'int's and 'char's, say 60 bytes of stack space. 
Not too bad. Your milage may vary. By hacking the source code you can 
get rid of some hunred bytes, I'm sure, but personally I feel the balance of 
functionality and flexibility versus  code size is close to optimal for
many embedded systems.

To use the printf you need to supply your own character output function, 
something like :

	void putc ( void* p, char c)
		{
		while (!SERIAL_PORT_EMPTY) ;
		SERIAL_PORT_TX_REGISTER = c;
		}

Before you can call printf you need to initialize it to use your 
character output function with something like:

	init_printf(NULL,putc);

Notice the 'NULL' in 'init_printf' and the parameter 'void* p' in 'putc', 
the NULL (or any pointer) you pass into the 'init_printf' will eventually be 
passed to your 'putc' routine. This allows you to pass some storage space (or 
anything realy) to the character output function, if necessary. 
This is not often needed but it was implemented like that because it made 
implementing the sprintf function so neat (look at the source code).

The code is re-entrant, except for the 'init_printf' function, so it 
is safe to call it from interupts too, although this may result in mixed output. 
If you rely on re-entrancy, take care that your 'putc' function is re-entrant!

The printf and sprintf functions are actually macros that translate to 
'tfp_printf' and 'tfp_sprintf'. This makes it possible
to use them along with 'stdio.h' printf's in a single source file. 
You just need to undef the names before you include the 'stdio.h'.
Note that these are not function like macros, so if you have variables
or struct members with these names, things will explode in your face.
Without variadic macros this is the best we can do to wrap these
fucnction. If it is a problem just give up the macros and use the
functions directly or rename them.

For further details see source code.

regs Kusti, 23.10.2004
*/


#ifndef __TFP_PRINTF__
#define __TFP_PRINTF__

#include <stdarg.h>
#include <stdint.h>
    
#define WZ_ERROR_LEVEL	(3u)
#define WZ_ERRROR_0U	(0u)
#define WZ_ERRROR_1U	(1u)
#define WZ_ERRROR_2U	(2u)
#define WZ_ERRROR_3U	(3u)
    
#define WZ_GEN_SDK_FLOW             (4u)
#define WZ_APP_EVENT_FLOW           (5u)
#define WZ_RT_POWER                 (6u)
#define WZ_PDM_POWER                (7u)   
#define WZ_GENERAL_PURPOSE          (8u)
    
uint8_t gl_log_level;

//#define SW_Tx_UART_PutString(n)     (void)n
    
void init_printf(void* putp,void (*putf) (void*,char));

void tfp_printf(char *fmt, ...);
void tfp_sprintf(char* s,char *fmt, ...);

void tfp_format(void* putp,void (*putf) (void*,char),char *fmt, va_list va);

_Bool glprint_en;
char debug_print[100];
#define WEIZ_DEBUG(n)         	{   if(glprint_en){ \
                                                tfp_sprintf(debug_print, "[%s]%d\r\n", __func__, n); \
	                                            SW_Tx_UART_PutString(debug_print);  \
                                            }   \
                                        }
#define WEIZ_DEBUG_REG_PRINT(reg_add, value)         	{   if(glprint_en){ \
                                                tfp_sprintf(debug_print, "[%s] reg_addr: 0x%x, value: 0x%x\r\n", __func__, reg_add, value); \
	                                            SW_Tx_UART_PutString(debug_print);  \
                                            }   \
                                        }
#define WEIZ_DEBUG_PRINT(logLevel, message, ...)	{	\
if(glprint_en){ \
if (logLevel <= WZ_ERROR_LEVEL){					   \
	switch (logLevel){							   \
	case WZ_ERRROR_0U:							   \
		tfp_sprintf(debug_print, "[CRTICAL_ERORR]: " message, ##__VA_ARGS__);	   \
        SW_Tx_UART_PutString(debug_print);  \
		break;									   \
	case WZ_ERRROR_1U:							   \
		tfp_sprintf(debug_print, "[NO_IGNORE_ERORR]: " message, ##__VA_ARGS__);   \
        SW_Tx_UART_PutString(debug_print);  \
		break;									   \
	case WZ_ERRROR_2U:							   \
	case WZ_ERRROR_3U:							   \
		tfp_sprintf(debug_print, "[ERROR]: " message, ##__VA_ARGS__);			   \
        SW_Tx_UART_PutString(debug_print);  \
	default:									   \
		break;									   \
		}											   \
}												   \
else if (logLevel <= gl_log_level){				   \
	switch (logLevel){							   \
	case WZ_GEN_SDK_FLOW:							   \
		tfp_sprintf(debug_print, "[FUNC]: " message, ##__VA_ARGS__);	   \
        SW_Tx_UART_PutString(debug_print);  \
		break;									   \
	case WZ_APP_EVENT_FLOW:							   \
		tfp_sprintf(debug_print, "[APP EVENT]: " message, ##__VA_ARGS__);   \
        SW_Tx_UART_PutString(debug_print);  \
		break;									   \
	case WZ_RT_POWER:							   \
		tfp_sprintf(debug_print, "[POWER RT]: " message, ##__VA_ARGS__);   \
        SW_Tx_UART_PutString(debug_print);  \
		break;\
	case WZ_PDM_POWER:							   \
		tfp_sprintf(debug_print, "[POWER DPM]: " message, ##__VA_ARGS__);   \
        SW_Tx_UART_PutString(debug_print);  \
		break;\
	case WZ_GENERAL_PURPOSE:							   \
		tfp_sprintf(debug_print, "[INFO]: " message, ##__VA_ARGS__);			   \
        SW_Tx_UART_PutString(debug_print);  \
	default:									   \
		break;									   \
		}											   \
}												   \
else{											   \
	;											   \
}												   \
}                                                  \
}

//#define printf tfp_printf 
//#define sprintf tfp_sprintf 

#endif