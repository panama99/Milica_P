
/**
 * @file	z4.c
 * @brief	C fajl koji sadrzi definicije funkcija
 * @author	Milica Panic
 * @date    05-05-2021
 */


int Operation(int operator, int num1, int num2)
{
	int res = 0;//promenljiva u koju se smesta rezultat operacije

	switch(operator){

	case '-' :
		res = num1 - num2;
		break;
	case '+' :
		res = num1 + num2;
		break;
	case '/' :
		res = num1 / num2;
		break;
	case '*' :
		res = num1 * num2;
		break;
	default:
		res = -1;

	}
	return res;
}
