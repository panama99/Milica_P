/**
 * @file	main.c
 * @brief	Aplikacija koja racuna sumu cifara
 * @author	Milica Panic
 * @date    05-12-2021
 */
#include "z3.h"
/**
 * main - Funkcija koja implementira glavnu operaciju
 * @param Nema parametera
 * @return Nema povratne vrijednosti
 */
int main()
{
	//inicijalizacija
	usartInit(9600);
	//ulaz
	uint8_t broj[64];

	uint8_t number[64];

	//glavna petlja
	while(1)
	{
        //PSTR() makro za smjestanje stringa u programsku memoriju (stednja)
		usartPutString_P(PSTR("Unesite ceo broj: \r\n"));
		while(!usartAvailable())
	    ;
		_delay_ms(50);//kasnjenje

		usartGetString(broj);//prijem celog broja od strane korisnika

		usartPutString_P(PSTR("Suma cifara je: "));
		sprintf(number, "%d\0", Calculate(broj));
		usartPutString(number);
		usartPutString_P(PSTR("\r\n"));

	}

   return 0;

}
