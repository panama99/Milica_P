/**
 * @file	z2.h
 * @brief	H fajl koji sadrzi deklaracije funkcija
 * @author	Milica Panic
 * @date    05-12-2021
 */
#ifndef Z2_H_
#define Z2_H_

//Standardna arduino biblioteka
#include <avr/io.h>
//Standardna C biblioteka
#include <stdio.h>
//Biblioteka koja omogucava koriscenje funkcije za kasnjenje: _delay_ms()
#include <util/delay.h>
//Biblioteka koja omogucava pristup podacima u flash memoriji
#include <avr/pgmspace.h>
//Biblioteka koja sadrzi definicije standardnih oznacenih i neoznacenih tipova podataka
//cije su dužine fiksirane, kao i najvece vrednosti koje one podržavaju.
#include <stdint.h>
//Ukljucivanje staticke biblioteke usart
#include "../usart/usart.h"

/**
 * CheckVowels - Funkcija koja vrsi provjeru broja samoglasnika u unesenom tekstu
 * @param tekst - ulaz tipa char - tekst koji se unosi od strane korisnika
 * @return Povratna vrijednost je tipa uint16_t - broj samoglasnika
 */
uint16_t CheckVowels(char tekst[]);


#endif /* Z2_H_ */
