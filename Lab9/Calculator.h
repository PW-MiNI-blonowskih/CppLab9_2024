#pragma once
#include "Operation.h"

   
//-------------------------------------------------------------
class Calculator
{
	double value;		//bie��ca warto�� na wy�wietlaczu kalkulatora

	static const int N = 10;
	Operation* operation[N];	//tablica zaprogramowanych operacji kalkulatora
	int n;						//liczba operacji w tablicy (1<=n<=N)

	void Running();

public:
	Calculator();
	~Calculator();

	bool AddOperation(const Operation& op);	//w metodzie wykonaj kopi� obiektu

	void Start();	//"w��czenie" kalkulatora
	
};
