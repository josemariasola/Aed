#include"Queue.h"
#include<iostream>

Cola::Cola(int a):TAMANIO{a},contador{},frente{nullptr},fin{nullptr}{
	fin=new int[TAMANIO];
	frente=fin;
}

bool isEmpty(const Cola& queue){
	return (queue.contador==0)?true:false;
}

Cola& enqueue(Cola& queue,const int dato){
	if(queue.contador<queue.TAMANIO){
		queue.fin[queue.contador]=dato;
		queue.contador++;
		std::cout<<"Elemento "<<dato<<" ingresado en cola."<<std::endl;
	}else
		std::cout<<"Cola completa"<<std::endl;
	return queue;
}

Cola& dequeue(Cola& queue){
	const int i=queue.frente[0];
	for(int i=0;i<queue.contador;i++)
		queue.fin[i]=queue.fin[i+1];
	queue.contador--;
	std::cout<<"Elemento "<<i<<" eliminado de la cola.\n";
	return queue;
}

void impresion(const Cola& queue){
	if(isEmpty(queue)){
			std::cout<<"La cola esta vacía, no hay nada que imprimir."<<std::endl;
			return;
	}
	for(int i=0;i<queue.contador;i++)
		std::cout<<queue.fin[i]<<" ";
	std::cout<<"\nImpresión finalizada."<<std::endl;
}

Cola& vaciar(Cola& queue){
	if(!isEmpty(queue)){
		dequeue(queue);
		vaciar(queue);
	}
	return queue;
}
