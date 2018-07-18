#pragma once
#include<iostream>

using namespace std;

template <typename Type>
class Array
{
public:
	Type * arr = new Type[arrsize];
	int arrsize;

public:
	Array() {};
	Array(int arrsize)
	{
		this->arrsize = arrsize;
	};
	~Array() 
	{
		delete arr;
	};
	Type operator[](int i);
	
};

template<typename Type>
 Type Array<Type>::operator[](int i)
{
	 if (i < this->arrsize)
		 return arr[i];
	 return arr[arrsize];
}
