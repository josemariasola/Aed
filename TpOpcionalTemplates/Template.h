#ifndef TEMPLATE_H
#define TEMPLATE_H

#pragma clang diagnostic ignored "-Wc++98-compat"

#include<iostream>

template<typename T>
struct Matriz {
	unsigned nFilas,nColumnas;
	T*matriz;
	
	Matriz();
	Matriz(unsigned);
	Matriz(unsigned, unsigned);
	~Matriz();
};

template<typename T>
Matriz<T>::~Matriz() {
	delete[] matriz;
}

template<typename T>
Matriz<T>::Matriz() : nFilas{ 2 }, nColumnas{ 2 }, matriz{ nullptr }{
	matriz = new T(nColumnas*nFilas);
}

template<typename T>
Matriz<T>::Matriz(unsigned a) : nFilas{ a }, nColumnas{ a }, matriz{ nullptr }{
	matriz = new T(nColumnas*nFilas);
}

template<typename T>
Matriz<T>::Matriz(unsigned fila, unsigned columna) : nFilas{ fila }, nColumnas{ columna }, matriz{ nullptr }{
	matriz = new T(nColumnas*nFilas);
}

template<typename T>
Matriz<T>& set(Matriz<T>& matrix, T valor, unsigned fila, unsigned columna) {
	unsigned elemento = (fila - 1)*matrix.nColumnas + columna - 1;
	matrix.matriz[elemento] = valor;
	return matrix;
}

template<typename T>
void print(const Matriz<T>& matrix) {
	for (unsigned i=0;i<matrix.nColumnas*matrix.nFilas;i++)
		std::cout << matrix.matriz[i] << " ";
	std::cout << "\nFin de la impresion." << std::endl;
}

template<typename T>
T& get(const Matriz<T>& matrix, unsigned fila, unsigned columna) {
	unsigned elemento = (fila - 1)*matrix.nColumnas + columna - 1;
	return matrix.matriz[elemento];
}

#endif
