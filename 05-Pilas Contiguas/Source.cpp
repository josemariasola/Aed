#include<random>
#include<ctime>

#include "StackCont.h"

int main(){
	srand(time(0));
	Pila nueva(5);
	for(int i=0;i<nueva.TAMANIO;i++)
		push(nueva,1+rand()%15);
	impresion(nueva);
	pop(nueva);
	pop(nueva);
	impresion(nueva);
	push(nueva,rand()%354);
	impresion(nueva);
	vaciar(nueva);
	impresion(nueva);
}
