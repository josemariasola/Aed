#include"Template.h"
#include<iostream>

int main() {
	Matriz<int> nueva;
	set(nueva, 1,1, 1);
	std::cout << get(nueva, 1, 1) << std::endl;
	set(nueva, 2, 1, 2);
	set(nueva, 3, 2, 1);
	set(nueva, 4, 2, 2);
	set(nueva, 42, 4200, 4200); //debería dar error.
	std::cout << get(nueva, 4200, 4200) << std::endl; //debería dar error.
	print(nueva);
}
