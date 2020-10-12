#include <iostream>
#include <string>
using namespace std;

int main() {
	
	//-----------------------------Numero par/impar con punteros
	cout << "Introduce un numero: " << endl;
	int num, * p_num;
	cin >> num;	
	p_num = &num;

	if (*p_num % 2 == 0) {
		cout << "Es par" << endl;
		cout << "Su direccion de memoria es: " << p_num << endl;
	}
	else {
		cout << "Es impar" << endl;
		cout << "Su direccion de memoria es: " << p_num << endl;
	}

	//--------------------------------Numeros primos con punteros
	cout << "Introduce un numero: " << endl;
	int num2, * p_num2,cont=0;
	cin >> num2;
	p_num2 = &num2;

	if (*p_num2 == 0 || *p_num2 == 1) {
		cout << "El numero NO es primo" << endl;
		cout << "Su direccion de memoria es: " << p_num2 << endl;
	}
	else {
		for (int i = 1; i < *p_num2; i++) {
			if (*p_num2 % i == 0) {
				cont++;
			}
		}
		if (cont > 2) {
			cout << "El numero NO es primo" << endl;
			cout << "Su direccion de memoria es: " << p_num2 << endl;
		}
		else {
			cout << "El numero es primo" << endl;
			cout << "Su direccion de memoria es: " << p_num2 << endl;
		}
	}
		

		
}