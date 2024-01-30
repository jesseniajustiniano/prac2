#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para generar al azar un número entre 0 y 500
void generarNumeroEntre0y500(int& numero) {
	numero = rand() % 501;  // Genera un número entre 0 y 500
}

// Función para generar un número aleatorio real
void generarNumeroReal(double& numero) {
	numero = static_cast<double>(rand()) / RAND_MAX;  // Genera un número real entre 0 y 1
}

// Función para verificar si un número es primo
bool esPrimo(int numero) {
	if (numero <= 1) {
		return false;
	}
	for (int i = 2; i * i <= numero; ++i) {
		if (numero % i == 0) {
			return false;
		}
	}
	return true;
}

// Función para generar N números primos aleatorios
void generarNumerosPrimosAleatorios(int N) {
	cout << "Generando " << N << " números primos aleatorios:" << endl;
	
	int contador = 0;
	int numero = 2;  // Comenzamos desde el primer número primo
	
	while (contador < N) {
		if (esPrimo(numero)) {
			cout << numero << " ";
			++contador;
		}
		++numero;
	}
	
	cout << endl;
}

int main() {
	srand(static_cast<unsigned int>(time(nullptr)));  // Inicializar la semilla para números aleatorios
	
	char opcion;
	
	do {
		// Menú principal
		cout << "----- Menú Principal -----" << endl;
		cout << "(1) Generar número entre 0 y 500" << endl;
		cout << "(2) Generar número real" << endl;
		cout << "(3) Generar N números primos aleatorios" << endl;
		cout << "(s) Salir" << endl;
		cout << "--------------------------" << endl;
		cout << "Selecciona una opción: ";
		cin >> opcion;
		
		switch (opcion) {
		case '1': {
			int numero;
			generarNumeroEntre0y500(numero);
			cout << "Número generado: " << numero << endl;
			break;
		}
		case '2': {
			double numero;
			generarNumeroReal(numero);
			cout << "Número real generado: " << numero << endl;
			break;
		}
		case '3': {
			int N;
			cout << "Ingrese la cantidad de números primos a generar: ";
			cin >> N;
			generarNumerosPrimosAleatorios(N);
			break;
		}
		case 's':
		case 'S':
			cout << "Saliendo del programa. ¡Hasta luego!" << endl;
			break;
		default:
			cout << "Opción no válida. Inténtalo de nuevo." << endl;
		}
	} while (opcion != 's' && opcion != 'S');
	
	return 0;
}
