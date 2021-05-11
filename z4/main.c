
/**
 * @file	main.c
 * @brief	Aplikacija koja racuna izraz
 * @author	Milica Panic
 * @date    05-05-2021
 */

//Standardna arduino biblioteka
#include <avr/io.h>
//Biblioteka koja omgucava koriscenje funkcije _delay_ms()
#include <util/delay.h>
//Bibliteka koja omogucava pristup podacima u flash memoriji
#include <arv/pgmspace.h>
//Standardna C biblioteka
#include <stdio.h>
//Pristup statickoj usart biblioteci
#include "../usart/usart.h"
//Biblioteka koja sadrži definicije standardnih oznacenih i neoznacenih tipova podataka
#include <stdint.h>

/**
 * Operation - funkcija koja ocitava uneseni operator i na osnovu njega izvrsava odgovarajucu operaciju
 * @param operator - ulaz tipa int8_t - operator izraza
 * @param num1 - ulaz tipa int16_t - prvi broj u izrazu
 * @param num2 - ulaz tipa int16_t - drugi broj u izrazu
 * @return Povratna vrednost je tipa int16_t - rezultat operacije
 */
int16_t Operation(int8_t operator, int16_t num1, int16_t num2)
{
	int16_t res = 0; //promenljiva koja cuva rezultat operacije

	switch(operator){

	case '+': res = num1 + num2;
	          break;
	case '*': res = num1 * num2;
		          break;
	case '/': res = num1 / num2;
		          break;
	case '-': res = num1 - num2;
		          break;
	default:
		      res = -1;

	}
	return res;

}

/**
 * Funkcija koja implementira glavnu operaciju
 * @param Nema parametara
 * @return Nema povratnu vrednost
 */

int main()
{
	    uint8_t str[64];
        int16_t num1,num2;
        int8_t operator;
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

