/**
 * @file	main.c
 * @brief	Aplikacija koja racuna broj samoglasnika
 * @author	Milica Panic
 * @date    05-12-2021
 */

#include "z2.h"

/**
 * main - Funkcija koja implementuje glavnu operaciju
 * @param Nema parametara
 * @return Nema povratne vrijednosti
 */
int main()
{

	uint8_t tekst[64];
	uint16_t p;
	uint8_t str[64];

	//inicijalizacija
	usartInit(9600);

	//glavna petlja
	while(1)
	{
		//PSTR() makro za smjestanje stringa u programsku memoriju (stednja)
		usartPutString_P(PSTR("Unesite tekst: \r\n"));
		while(!usartAvailable())//cekanje na unos korisnika
	    ;
		_delay_ms(50);//kasnjenje

		usartGetString(tekst);//prijem teksta


		usartPutString_P(PSTR("Broj samoglasnika u tekstu je: "));
		sprintf(str,"%d\0",CheckVowels(tekst));
		usartPutString(str);
		usartPutString_P(PSTR("\r\n"));

	}



	return 0;
}
