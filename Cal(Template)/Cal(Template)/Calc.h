#pragma once
#include <iostream>

using namespace std;
template <typename Type>
class Calc
{
public:
	Type Add(Type a, Type b);
	Type Sub(Type a, Type b);
	Calc() {};
	~Calc() {};
};

template<typename Type>
Type Calc<Type>::Add(Type a, Type b)
{
	Type c;
	c = a + b;
	return c;
}

template<typename Type>
Type Calc<Type>::Sub(Type a, Type b)
{
	Type c;
	c = a - b;
	return c;
}
