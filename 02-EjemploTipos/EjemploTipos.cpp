/*Autor: Lopez, Yamil.
 * Curso: K1051
 * Última modificación: 27.05.2018
 *
 * Descripción: El presente ejemplifica el uso de algunos tipos de datos vistos en clase*/

#include<iostream>
#include<string>

using namespace std;


int main(){

	string nombre="Yamil";//empleo de la clase string
	char letra[13]="Y a m i l";//mismo resultado que el anterior utilizando el tipo char
	int entero=-56.8;
	double real=-56.8;
	unsigned int natural=58.2;
	float coma=1.25;


	cout<<"Caracter: "<<letra<<", Cadena: "<<nombre<<", Entero "<<entero<<
			", Real: "<<real<<", Natural: "<<natural<<", Decimal: "<<coma<<endl;



	return 0;

}
