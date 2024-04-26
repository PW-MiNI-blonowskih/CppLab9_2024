
#include "Operation.h"
#include "DivisionByZero.h"
using namespace std;
      

Operation::Operation(int n, const string& name) : n{ n }, name{ name }
{ }

void Operation::Print(ostream& out) const
{
	out << name << ", number of arguments: " << n;
}

ostream& operator << (ostream& out , const Operation& O)
{
	O.Print(out);
	return out << endl;
}

//----------------------------------------------------------
//implementacja klasy Addition

Addition::Addition(int n) : Operation{ n, "Addition" } {}

double Addition::Result(double* arg) const {
	double result{ 0 };
	for (int i = 0; i < n; ++i) {
		result += arg[i];
	}
	return result;
}

Operation* Addition::Clone() const {
	return new Addition(*this);
}

//----------------------------------------------------------
//implementacja klasy Subtraction

Subtraction::Subtraction(int n) : Operation{ n, "Subtraction" } {}

double Subtraction::Result(double* arg) const {
	double result{ arg[0] };
	for (int i = 1; i < n; ++i) {
		result -= arg[i];
	}
	return result;
}

Operation* Subtraction::Clone() const {
	return new Subtraction(*this);
}

//----------------------------------------------------------
//implementacja klasy Multiplication

Multiplication::Multiplication(int n) : Operation{ n, "Multiplication" } {}

double Multiplication::Result(double* arg) const {
	double result{ 1 };
	for (int i = 0; i < n; ++i) {
		result *= arg[i];
	}
	return result;
}

Operation* Multiplication::Clone() const {
	return new Multiplication(*this);
}

//----------------------------------------------------------
//implementacja klasy Division

Division::Division(int n) : Operation{ n, "Division" } {}

double Division::Result(double* arg) const {
	double result{ arg[0] };
	for (int i = 1; i < n; ++i) {
		if (arg[i] == 0) throw DivisionByZero(i);
		result /= arg[i];
	}
	return result;
}

Operation* Division::Clone() const {
	return new Division(*this);
}

//----------------------------------------------------------
//implementacja klasy Power

Power::Power(int p) : Operation{ 1, "Power" }, p{ p } {}

double Power::Result(double* arg) const {
	double result{ 1 };
	for (int i = 0; i < p; ++i) {
		result = result * arg[0];
	}
	return result;
}

Operation* Power::Clone() const {
	return new Power(*this);
}

//----------------------------------------------------------




