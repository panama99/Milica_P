/**
 * @file	z4.h
 * @brief	H fajl koji sadrzi deklaracije funkcija
 * @author	Milica Panic
 * @date    05-05-2021
 */
#ifndef Z4_H_
#define Z4_H_


/**
 * Funkcija ocitava karakter na osnovu kog ce se izvrsiti odgovarajuca operacija
 * @param operator -ulaz tipa int - karakter koji oznacava operaciju
 * @param  num1 - ulaz tipa int - prvi broj u izrazu
 * @param num2 - ulaz tipa int - drugi broj u izrazu
 * @return Povratna vrednost je tipa int - rezultat operacije
 */
int Operation(int operator, int num1, int num2);

#endif /* Z4_H_ */
