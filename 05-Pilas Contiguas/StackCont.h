#ifndef STACKCONT_H
#define STACKCONT_H

struct Pila{
	Pila(int);
	int TAMANIO, *top,contador;
};

Pila&  pop(Pila&);
Pila& push(Pila&,int);
bool isEmpty(const Pila&);
void impresion(const Pila&);
Pila& vaciar(Pila&);



#endif
