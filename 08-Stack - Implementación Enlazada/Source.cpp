#include"Stack.h"
#include<random>
#include<ctime>

int main(){

	srand(time(0));
	Pila nueva;

	for(int i=0;i<35;i++)
		push(nueva,rand()%800);
	print(nueva);
	vaciar(nueva);
	print(nueva);
	for(int i=0;i<5;i++)
			push(nueva,rand()%800);
	print(nueva);
	pop(nueva);
	pop(nueva);
	print(nueva);

	return 0;
}
