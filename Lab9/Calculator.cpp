
#include <iostream>
using namespace std;
#include "Calculator.h"
#include "DivisionByZero.h"
    
//-----------------------------------------------------
//uzupe³nij implementacjê brakuj¹cych sk³adowych klasy Calculator

Calculator::Calculator() : value{ 0 }, n{ 0 } {
	for (int i = 0; i < N; ++i) {
		operation[i] = nullptr;
	}
}

Calculator::~Calculator() {
	for (int i = 0; i < n; ++i) {
		delete operation[i];
	}
}

bool Calculator::AddOperation(const Operation& op) {
	if (n < 9) {
		operation[n] = op.Clone();
		++n;
		return true;
	}
	else {
		return false;
	}
}

void Calculator::Running() {
	cout << "Opertaions:\n";
	for (int i = 0; i < n; ++i) {
		cout << i << ". " << *operation[i];
	}

	int input{};
	cin >> input;

	double* args = new double[operation[input]->N()];
	args[0] = value;
	if (operation[input]->N() > 1)
		cout << "Input " << operation[input]->N() - 1 << " values:\n";
	for (int i = 1; i < operation[input]->N(); ++i) {
		cin >> args[i];
	}

	try {
		value = operation[input]->Result(args);
	} 
	catch (const DivisionByZero& e) {
		e.what();
	}
	catch (...) {
		cout << "x" << endl;
	}

	delete[] args;
}

//-----------------------------------------------------
void Calculator::Start() //GOTOWA
{
	int what;
	while(true)
	{
		cout << "VALUE: " << value << endl;
		
		cout << "MENU" << std::endl;
		cout << "1 - Set new VALUE" << std::endl;
		cout << "2 - Reset (zero)" << std::endl;
		cout << "3 - Select Operation" << std::endl;
		cout << "4 - END" << std::endl;

		cin >> what;
		switch(what)
		{
		case 1:
			{
				double k;
				cout << "Input new VALUE: " << endl;
				cin >> k;
				value = k;
			}
			break;
		case 2:
			value = 0;
			break;
		case 3:
			Running();
			break;
		case 4:
			cout << "END ... " << endl;
			return;
		default:
			cout << "Bad selection" << endl;
		}
	}
}
