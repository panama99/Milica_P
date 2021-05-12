/**
 * @file	z4.h
 * @brief	H fahl koji sadrzi deklaracije funkcija
 * @author	Milica Panic
 * @date    05-12-2021
 */

#ifndef Z4_H_
#define Z4_H_

//Standardna arduino biblioteka
#include <avr/io.h>
//Biblioteka koja omgucava koriscenje funkcije _delay_ms()
#include <util/delay.h>
//Bibliteka koja omogucava pristup podacima u flash memoriji
#include <avr/pgmspace.h>
//Standardna C biblioteka
#include <stdio.h>
//Pristup statickoj usart biblioteci
#include "../usart/usart.h"
//Biblioteka koja sadrži definicije standardnih oznacenih i neoznacenih tipova podataka
#include <stdint.h>

/**
 * CheckPassword - Funkcija koja vrsi provjeru podudaranja unijete lozinke sa defaultnom
 * @param lozinka - ulaz tipa uint8_t - unesena lozinka
 * @return Povratna vrednost je tipa uint16_t
 */
uint16_t CheckPassword(uint8_t lozinka[]);//uint16_t=>unsigned int, uint8_t=>unsigned char


/**
 * CheckName - Funkcija koja vrsi provjeru podudaranja unijetog imena  sa defaultnim
 * @param ime - ulaz tipa uint8_t - uneseno ime
 * @return Povratna vrednost je tipa uint16_t
 */
uint16_t CheckName(char ime[]);

/**
 * GeneralCheck - Funkcija koja vrsi provjeru zajednickog podudaranja lozinke i imena i vrsi odgovarajuci ispis
 * @param m - ulaz tipa int - pomocna promenljiva
 * @param p - ulaz tipa int - pomocna promenljiva
 * @param ime - ulaz tipa char - uneseno ime
 * @return Nema povratne vrednosti
 */
void GeneralCheck(uint16_t m, uint16_t p,uint8_t ime[]);



#endif /* Z4_H_ */
