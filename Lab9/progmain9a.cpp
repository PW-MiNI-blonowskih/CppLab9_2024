#include <iostream>
using namespace std;
         
#include "Calculator.h"

int main()
{
	cout << "ETAP 1 --------------------------" << endl;
	// definiujemy operacje dla kalkulatora
	Addition		A2, A3(3);
	Subtraction		S2, S3(3);
	Multiplication	M2, M4(4);
	Division		D2, D4(4);
	Power			P2, P3(3); 

	//wykonaj przyk³adowe testy
	double arg[] = { 18,3,2,2 };
	
	cout << "A2: " << A2 << "RESULT= " << A2.Result(arg) << endl;
	cout << "A3: " << A3 << "RESULT= " << A3.Result(arg) << endl;
	cout << "S2: " << S2 << "RESULT= " << S2.Result(arg) << endl;
	cout << "S3: " << S3 << "RESULT= " << S3.Result(arg) << endl;
	cout << "M2: " << M2 << "RESULT= " << M2.Result(arg) << endl;
	cout << "M4: " << M4 << "RESULT= " << M4.Result(arg) << endl;
	cout << "D2: " << D2 << "RESULT= " << D2.Result(arg) << endl;
	cout << "D4: " << D4 << "RESULT= " << D4.Result(arg) << endl;
	cout << "P2: " << P2 << "RESULT= " << P2.Result(arg) << endl;
	cout << "P3: " << P3 << "RESULT= " << P3.Result(arg) << endl;

	cout << "ETAP 2 --------------------------" << endl;
	Calculator calculator;

	//programujemy kalkulator
	calculator.AddOperation(Addition(2));
	calculator.AddOperation(Addition(3));
	calculator.AddOperation(Subtraction(2));
	calculator.AddOperation(Multiplication(2));
	calculator.AddOperation(Multiplication(3));
	calculator.AddOperation(Division(2));
	calculator.AddOperation(Division(3));
	calculator.AddOperation(Division(4));
	calculator.AddOperation(Power(2));
	calculator.AddOperation(Power(3));
	calculator.AddOperation(Power(4));		//to ju¿ o jeden za du¿o...


	calculator.Start();

	/*
	cout << endl << endl;
	cout << "ETAP 3 --------------------------" << endl;
	// zakomentuj ETAP 1 oraz ETAP 2 !!!  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

	cout << "TEST I - for double" << endl;
	Addition<>		    A2, A3(3);
	Subtraction<>		S2, S3(3);
	Multiplication<>	M2, M4(4);
	Division<>		    D2, D4(4);
	Power<>			    P2, P3(3);


	double arg[] = { 18,3,2,2 };

	cout << "A2: " << A2 << "RESULT= " << A2.Result(arg) << endl;
	cout << "A3: " << A3 << "RESULT= " << A3.Result(arg) << endl;
	cout << "S2: " << S2 << "RESULT= " << S2.Result(arg) << endl;
	cout << "S3: " << S3 << "RESULT= " << S3.Result(arg) << endl;
	cout << "M2: " << M2 << "RESULT= " << M2.Result(arg) << endl;
	cout << "M4: " << M4 << "RESULT= " << M4.Result(arg) << endl;
	cout << "D2: " << D2 << "RESULT= " << D2.Result(arg) << endl;
	cout << "D4: " << D4 << "RESULT= " << D4.Result(arg) << endl;
	cout << "P2: " << P2 << "RESULT= " << P2.Result(arg) << endl;
	cout << "P3: " << P3 << "RESULT= " << P3.Result(arg) << endl;


	cout << endl << endl << "TEST II - for complex<double>" << endl;
	Addition<complex<double>>		C_A2, C_A3(3);
	Subtraction<complex<double>>	C_S2, C_S3(3);
	Multiplication<complex<double>>	C_M2, C_M4(4);
	Division<complex<double>>		C_D2, C_D4(4);
	Power<complex<double>>			C_P2, C_P3(3);


	complex<double> arg2[] = { {1,1},{2,3},{4,5},{2,1} };

	cout << "C_A2: " << C_A2 << "RESULT= " << C_A2.Result(arg2) << endl;
	cout << "C_A3: " << C_A3 << "RESULT= " << C_A3.Result(arg2) << endl;
	cout << "C_S2: " << C_S2 << "RESULT= " << C_S2.Result(arg2) << endl;
	cout << "C_S3: " << C_S3 << "RESULT= " << C_S3.Result(arg2) << endl;
	cout << "C_M2: " << C_M2 << "RESULT= " << C_M2.Result(arg2) << endl;
	cout << "C_M4: " << C_M4 << "RESULT= " << C_M4.Result(arg2) << endl;
	cout << "C_D2: " << C_D2 << "RESULT= " << C_D2.Result(arg2) << endl;
	cout << "C_D4: " << C_D4 << "RESULT= " << C_D4.Result(arg2) << endl;
	cout << "C_P2: " << C_P2 << "RESULT= " << C_P2.Result(arg2) << endl;
	cout << "C_P3: " << C_P3 << "RESULT= " << C_P3.Result(arg2) << endl;
	*/

	/*
	cout << endl << endl;
	cout << "ETAP 4 --------------------------" << endl;


	cout << "TEST CALCULATOR - for double" << endl;
	Calculator<> calculator;

	//programujemy kalkulator
	calculator.AddOperation(Addition<>(2));
	calculator.AddOperation(Addition<>(3));
	calculator.AddOperation(Subtraction<>(2));
	calculator.AddOperation(Multiplication<>(2));
	calculator.AddOperation(Multiplication<>(3));
	calculator.AddOperation(Division<>(2));
	calculator.AddOperation(Division<>(3));
	calculator.AddOperation(Division<>(4));
	calculator.AddOperation(Power<>(2));
	calculator.AddOperation(Power<>(3));
	calculator.AddOperation(Power<>(4));		//to ju¿ o jeden za du¿o...


	calculator.Start();

	cout << "TEST CALCULATOR - for complex<double>" << endl;
	Calculator<complex<double>> complex_calculator;

	//programujemy kalkulator
	complex_calculator.AddOperation(Addition<complex<double>>(2));
	complex_calculator.AddOperation(Addition<complex<double>>(3));
	complex_calculator.AddOperation(Subtraction<complex<double>>(2));
	complex_calculator.AddOperation(Multiplication<complex<double>>(2));
	complex_calculator.AddOperation(Multiplication<complex<double>>(3));
	complex_calculator.AddOperation(Division<complex<double>>(2));
	complex_calculator.AddOperation(Division<complex<double>>(3));
	complex_calculator.AddOperation(Division<complex<double>>(4));
	complex_calculator.AddOperation(Power<complex<double>>(2));
	complex_calculator.AddOperation(Power<complex<double>>(3));
	complex_calculator.AddOperation(Power<complex<double>>(4));		//to ju¿ o jeden za du¿o...


	complex_calculator.Start();

	*/

	cout << endl << endl;
	
	return 0;
}