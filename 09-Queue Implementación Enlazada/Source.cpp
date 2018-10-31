#include"Queue.h"
#include<random>
#include<ctime>
#include<iostream>
int main(){

	srand(time(0));
	Cola nuevo;
	if(isEmpty(nuevo))
		std::cout<<"Esta vacío!!"<<std::endl;//Debería cumplirse Ok!!
	else
		std::cout<<"No esta vacío!!"<<std::endl;
	enqueue(nuevo,8);
	if(isEmpty(nuevo))
			std::cout<<"Esta vacío!!"<<std::endl;
		else
			std::cout<<"No esta vacío!!"<<std::endl;//Debería cumplirse
	print(nuevo);
	enqueue(nuevo,85);
	enqueue(nuevo,898);
	if(isEmpty(nuevo))
			std::cout<<"Esta vacío!!"<<std::endl;
		else
			std::cout<<"No esta vacío!!"<<std::endl;//Debería cumplirse

	print(nuevo);
	/*for(int i=0;i<20;i++)
		enqueue(nuevo,rand()%500);
	vaciar(nuevo);
	//print(nuevo);
	std::cout<<"Frente: "<<nuevo.frente<<" "<<nuevo.frente->dato<<" "<<nuevo.frente->siguiente<<std::endl;
	std::cout<<"Fin: "<<nuevo.fin<<" "<<nuevo.fin->dato<<" "<<nuevo.fin->siguiente<<std::endl;
	dequeue(nuevo);
	dequeue(nuevo);
	dequeue(nuevo);
	dequeue(nuevo);
	dequeue(nuevo);
	print(nuevo);
	vaciar(nuevo);
	print(nuevo);*/



	return 0;
}
