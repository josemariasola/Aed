#ifndef LISTA_H
#define LISTA_H

class Lista {

	typedef struct Nodo {
		int dato;
		Nodo *siguiente, *anterior;
	}*Nodoptr;
	Nodoptr frente, fin;

public:
	Lista();
	~Lista();
	void add(int);
	bool isEmpty();
	void deque();
	void vaciar();
	void imprimir();
};


#endif
