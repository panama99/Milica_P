
/**
 * @file	main.c
 * @brief	Aplikacija koja racuna izraz
 * @author	Milica Panic
 * @date    05-05-2021
 */

//Standardna C biblioteka
#include <stdio.h>
//Standardna arduino biblioteka
#include <avr/io.h>
//Biblioteka koja omogucava rad sa funkcijom za kasnjenje _delay_ms()
#include <util/delay.h>
//Arduino biblioteka za pristupanje podacima u flash memoriji
#include <avr/pgmspace.h>
//Pristupanje statickoj usart biblioteci
#include "../usart/usart.h"


int main()

{
	    char str[64];
        int num1,num2;
        int operator;
        usartInit(9600);

	//glavna petlja
	while(1){

		usartPutString("Unesite brojni izraz: \r\n");
		while(!usartAvailable())
	    ;
		_delay_ms(50);

		num1=usartParseInt();
		operator=usartGetChar();
		num2=usartParseInt();

		usartPutString("\r\n");
		usartPutString("Rezultat je: ");
		sprintf(str,"%d\0",Operation(operator,num1,num2));
		usartPutString(str);
		usartPutString("\r\n");

	}


	return 0;
}

