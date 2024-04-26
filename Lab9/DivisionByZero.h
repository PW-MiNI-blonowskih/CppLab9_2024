#pragma once
#include <iostream>
#include <string>

class DivisionByZero : public std::exception {
private: 
	int index;
public:
	DivisionByZero(int i) : index{ i } {};
	const char* what() const override 
	{ std::cout << "Bad argument i = " << index << std::endl; return ""; }
};