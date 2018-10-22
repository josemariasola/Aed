//#include"SecuenciaEnlazada.h"
//#include"Pila.h"
//#include"cola.h"
#include"Lista.h"


#include<iostream>
#include<ctime>
#include<random>


int main() {
	srand(time(0)); //Pilas

	/*secuencia secuencia1(3); //Secuencia enlazada
	secuencia1.agregarElemento(1);
	secuencia1.agregarElemento(2);
	secuencia1.imprimirSecuencia();
	secuencia1.agregarElemento(4);
	secuencia1.imprimirSecuencia();
	secuencia1.agregarElemento(54);
	secuencia1.imprimirSecuencia();*/

	/*
	Pila pila1;
	for (int i = 0; i < 7; ++i)
		pila1.push(1 + rand() % 57);
	pila1.imprimirPila();
	pila1.pop();
	pila1.pop();
	pila1.imprimirPila();
	for (int i = 0; i < 7; ++i)
		pila1.push(1 + rand() % 57);
	pila1.imprimirPila();
	for (int i = 0; i < 4; ++i)
		pila1.pop();
	pila1.imprimirPila();
	pila1.vaciar();
	pila1.imprimirPila();*/

	/*Cola cola1; //Colas -FIFO-

	for (int i = 0; i < 15; i++)
		cola1.enque(1 + rand() % 159);
	cola1.imprimir();
	cola1.deque();
	cola1.deque();
	cola1.deque();
	cola1.imprimir();
	cola1.enque(34);
	cola1.enque(-34);
	cola1.imprimir();
	cola1.vaciar();
	cola1.imprimir();*/

	Lista lista1; //Listas
	for (int i = 0; i < 18; i++)
		lista1.add(1+rand() % 191);
	lista1.imprimir();
	lista1.deque();
	lista1.deque();
	lista1.deque();
	lista1.deque();
	lista1.imprimir();
	lista1.vaciar();
	lista1.imprimir();
	  
	system("pause");
	return 0;
}