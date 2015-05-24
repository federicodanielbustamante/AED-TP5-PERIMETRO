/*
	TP 4 - Calcular perimetro de un rectangulo.
	Federico Daniel Bustamante
	24/05/2015

	Precondiciones:
	- base pertenece a los numeros con decimales positivos menos el cero
	- altura pertene a los numeros con decimales positivos menos el cero
*/
#include <iostream>
double perimetro(double, double);
double base;
double altura;

using namespace std;

int main() {

	cout << "Ingresar la base: ";
	cin >> base;

	cout << "Ingresar la altura: ";
	cin >> altura;

	cout << "El perimetro es: ";
	cout << perimetro(base, altura);
	cout << "\n";
}

double perimetro(double base, double altura){
	return (2 * (base + altura));
}