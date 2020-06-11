#include "Array.h"

template <class T>
Array<T>::Array() 
{
	groesse = 0;
	data = NULL;
}

template <class T>
Array<T>::Array(int groesse) 
{
	this->groesse = groesse;
	data = (T*)malloc(groesse * sizeof(T));

}

template <class T>
Array<T>::~Array()
{
	free(data);
}

template <class T>
T Array<T>::get(int stelle) 
{
	return data[stelle];
}

template <class T>
void Array<T>::set(int stelle, T wert) 
{
	data[stelle] = wert;
}

template <class T>
void Array<T>::resize(int groesse) 
{
	this->groesse = groesse;
	data = (T*)realloc(data, groesse * sizeof(T));

}

template <class T>
int Array<T>::getSize() 
{
	return groesse;
}