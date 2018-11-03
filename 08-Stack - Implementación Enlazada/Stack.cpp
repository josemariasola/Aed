#include<iostream>
#include"Stack.h"

Eslabon::Eslabon():dato{},siguiente{nullptr}{}

Pila::Pila():top{nullptr}{}

Pila& pop(Pila& stack){
	if(isEmpty(stack))
		std::cout<<"Pila vacía"<<std::endl;
	else
		stack.top=stack.top->siguiente;
	return stack;
}

Pila& push(Pila& stack,int a){
	Eslabon *nuevoEslabon=new Eslabon;
	nuevoEslabon->dato=a;
	nuevoEslabon->siguiente=stack.top;
	stack.top=nuevoEslabon;
	return stack;
}

bool isEmpty(const Pila& stack){
	return (stack.top==nullptr)?true:false;
}

Pila& vaciar(Pila& stack){
	if(isEmpty(stack))
		std::cout<<"Pila vacia"<<std::endl;
	else{
		pop(stack);
		vaciar(stack);
	}
	return stack;
}

void print(const Pila& stack){
	Eslabon *aux=stack.top;
	while(aux!=nullptr){
		std::cout<<aux->dato<<" ";
		aux=aux->siguiente;
	}
	std::cout<<"\nFin de la impresión"<<std::endl;
}
