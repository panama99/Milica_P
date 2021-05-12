/**
 * @file	z2.c
 * @brief	C fajl koji sadrzi definicije funkcija
 * @author	Milica Panic
 * @date    05-12-2021
 */

#include "z2.h";

uint16_t CheckVowels(char tekst[])
{
    uint8_t vowels[] = "aeiou";
	uint16_t duzina;
	uint16_t samoglasnik = 0;

	for(duzina=0;tekst[duzina]!='\0';duzina++ );//for petlja koja racuna broj karaktera teksta
		for(uint16_t i = 0;i < duzina;i++)//for petlja koja prolazi kroz svaki karakter
		{
			for(uint16_t j = 0;j < 5;j++)//ugnijezdena for petlja koja prolazi kroz sve karaktere vowel-a
			{
			if(tekst[i] == vowels[j]){

				samoglasnik++;
			}
			}
		}
return samoglasnik;

}
