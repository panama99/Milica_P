/**
 * @file	z4.h
 * @brief	H fajl koji sadrzi deklaracije funkcija
 * @author	Milica Panic
 * @date    05-05-2021
 */
#ifndef Z4_H_
#define Z4_H_

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


/**
 * Funkcija ocitava karakter na osnovu kog ce se izvrsiti odgovarajuca operacija
 * @param operator -ulaz tipa int - karakter koji oznacava operaciju
 * @param  num1 - ulaz tipa int - prvi broj u izrazu
 * @param num2 - ulaz tipa int - drugi broj u izrazu
 * @return Povratna vrednost je tipa int - rezultat operacije
 */
int Operation(int operator, int num1, int num2);

#endif /* Z4_H_ */
