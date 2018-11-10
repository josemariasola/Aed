#include"Template.h"
#include<iostream>

template<typename T>
Matriz<T>::Matriz() : nFilas{ 2 }, nColumnas{ 2 }, matriz{ nullptr }{
	T*matriz = new T(nColumnas*nFilas);
}

template<typename T>
Matriz<T>::Matriz(int a) : nFilas{ a }, nColumnas{ a }, matriz{ nullptr }{
	T*matriz = new T(nColumnas*nFilas); 
}

template<typename T>
Matriz<T>::Matriz(int fila, int columna) : nFilas{ fila }, nColumnas{ columna }, matriz{ nullptr }{
	T*matriz = new T(nColumnas*nFilas); 
}

template<typename T>
Matriz<T>& set(Matriz<T>& matrix, T valor,int fila, int columna) {
	short int elemento = (fila - 1)*matrix.nColumnas + matrix.nColumnas + columna - 1;
	matrix.matriz[elemento]=valor;
	return matrix;
}

template<typename T>
void print(const Matriz<T>& matrix) {
	for(auto a:matrix.matriz)
		std::cout << a << " ";
	std::cout <<"\nFin de la impresion."<< std::endl;
}

template<typename T>
T& get(const Matriz<T>& matrix, int fila, int columna) {
	short int elemento = (fila - 1)*matrix.nColumnas + matrix.nColumnas + columna - 1;
	return matrix.matriz[elemento];
}