/**
 * @file	z4.c
 * @brief	C fahl koji sadrzi definije funkcija
 * @author	Milica Panic
 * @date    05-12-2021
 */
#include "z4.h"

/***********************************************************************************************/

uint16_t CheckPassword(uint8_t lozinka[])//uint16_t=>unsigned int, uint8_t=>unsigned char
{
	uint8_t password[] = "P@ssw0rd";//default
	uint16_t duzina1;
	uint16_t pom1 = 0;
	uint16_t x;

				for( duzina1=0; lozinka[duzina1]!='\0' ;duzina1++ )//for petlja za racunanje broja karaktera
					for( uint16_t i=0; i<duzina1; i++ )//for petlja za prolazak kroz sva slova stringa
					{
						if(lozinka[i] == password[i])//provera da li je unijeta rec ista sa default-om
						{
							pom1++;//za svako dobro slovo +1
						}
					}
				if(pom1 == duzina1)
				{
					x = 1;
				}
				return x;
}

/***********************************************************************************************/

uint16_t CheckName(char ime[])
{
    uint8_t username[] = "MyName";//default
    uint16_t duzina;
	uint16_t p;
	uint16_t pom = 0;

	for(duzina=0;ime[duzina]!='\0';duzina++)//for petlja za racunanje broja karaktera
		for(uint16_t i=0;i<duzina;i++){//for petlja za prolazak kroz sva slova stringa

			if(ime[i]==username[i])//provera da li je unijeta rec ista sa default-om
			{
				pom++;//za svako dobro slovo +1
			}
		}

	if(pom == duzina)
	{
		p = 1;
	}

	return p;

}
/***********************************************************************************************/


void GeneralCheck(uint16_t m, uint16_t p,uint8_t ime[])
{

if(m == 1 && p == 1){

	  usartPutString_P(PSTR("Dobrodosla, "));
	  usartPutString(ime);
	  usartPutString_P(PSTR("\r\n"));

}
else
{
	  usartPutString_P(PSTR("Pogresno ime/lozinka!"));
	  usartPutString_P(PSTR("\r\n"));
}

}
