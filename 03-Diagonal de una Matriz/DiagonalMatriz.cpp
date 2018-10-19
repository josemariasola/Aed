
#include<ctime>
#include<random>
#include<array>
#include<iostream>

const size_t TAMANIO = 5;
const size_t columnas = TAMANIO, filas = TAMANIO;
std::array<std::array<int, columnas>, filas> crearMatriz();
void imprimirMatriz(std::array<std::array<int, columnas>, filas>);
int sumarDiagonal(std::array<std::array<int, columnas>, filas>);
void imprimirSuma(int);


int main() {

	srand(time(0));

	std::array<std::array<int, columnas>, filas>matriz=crearMatriz();
	imprimirMatriz(matriz);
	imprimirSuma(sumarDiagonal(matriz));
	
	system("pause");
	return 0;
}

std::array<std::array<int, columnas>, filas> crearMatriz() {
	std::array<std::array<int, columnas>, filas>nuevo{};
	for (int i = 0; i < filas; i++)
		for (int j = 0; j < columnas; ++j)
			nuevo.at(i).at(j) = rand() % 10 + 0;
	return nuevo;

}
void imprimirMatriz(std::array<std::array<int, columnas>, filas>matriz) {
	for (int i = 0; i < filas; i++) {
		std::cout << std::endl;
		for (int j = 0; j < columnas; ++j)
			std::cout<< matriz.at(i).at(j) << " ";
	}
	std::cout << std::endl;
}
int sumarDiagonal(std::array<std::array<int, columnas>, filas>matriz) {
	int sumatoria=0;
	for (int i = 0; i < filas; i++)
		for (int j = 0; j<columnas; j++)
			if (i == j)
				sumatoria += matriz.at(i).at(j);
	return sumatoria;
}
void imprimirSuma(int suma) {
	std::cout << "la sumatoria de la diagonal principal de la matriz es: " << suma << std::endl;
}
