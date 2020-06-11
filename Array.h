#pragma once
#include <iostream>
#include <conio.h>
#include <stdlib.h>

template <class T>
class Array 
{
	int groesse;
	T* data;

public:
	Array();
	Array(int groesse);
	~Array();

	T get(int stelle);
	void set(int stelle, T wert);
	void resize(int groesse);
	int getSize();

};