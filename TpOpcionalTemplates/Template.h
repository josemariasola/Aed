#ifndef TEMPLATE_H
#define TEMPLATE_H

template<typename T>
class Matriz {
	int nFilas,nColumnas;
	T*matriz;
	
public:
	Matriz();
	Matriz(int);
	Matriz(int, int);
};

template<typename T>
Matriz<T> set(Matriz<T>&,T,int,int);

template<typename T>
void print(const Matriz<T>&);

template<typename T>
T get(const Matriz<T>&, int, int);


#endif
