#include"Template.h"
#include<iostream>

int main() {
	Matriz<int> nueva;
	set(nueva, 1,1, 1);
	std::cout << get(nueva, 1, 1) << std::endl;
	set(nueva, 2, 1, 2);
	set(nueva, 3, 2, 1);
	set(nueva, 4, 2, 2);
	print(nueva);
}
