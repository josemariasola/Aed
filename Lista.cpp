#include"Lista.h"
#include<iostream>


Lista::Lista() :frente{ nullptr }, fin{ nullptr } {};

Lista::~Lista() {
	vaciar();
}

void Lista::add(int n) {

	Nodoptr nuevoNodo = new Nodo;
	nuevoNodo->dato = n;
	nuevoNodo->siguiente = nullptr;

	if (isEmpty()) {
		
		nuevoNodo->anterior = nullptr;
		fin = nuevoNodo;
		frente = fin;
	}
	else {
		nuevoNodo->anterior = frente;
		frente->siguiente = nuevoNodo;
		frente = nuevoNodo;
	}
}

bool Lista::isEmpty() {
	return (frente == nullptr) ? true : false;
}
void Lista::deque() {
	Nodoptr aux = new Nodo;
	aux = fin;
	if (fin->siguiente != nullptr) {
		fin = fin->siguiente;
		fin->anterior = nullptr;
	}
	else {
		fin = nullptr;
		frente = fin;
	}
	delete aux;
}
void Lista::vaciar() {
	if (!isEmpty()) {
		deque();
		vaciar();
	}
}
void Lista::imprimir() {
	short int contador = 1;
	Nodoptr aux = frente;
	while (aux != nullptr) {
		std::cout << "Elemento " << contador << ": " << aux->dato << std::endl;
		aux = aux->anterior;
		contador++;
	}
	std::cout << "Fin de la impresion." << std::endl;
}

