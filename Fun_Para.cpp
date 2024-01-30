#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Funci�n para generar al azar un n�mero entre 0 y 500
void generarNumeroEntre0y500(int& numero) {
	numero = rand() % 501;  // Genera un n�mero entre 0 y 500
}

// Funci�n para generar un n�mero aleatorio real
void generarNumeroReal(double& numero) {
	numero = static_cast<double>(rand()) / RAND_MAX;  // Genera un n�mero real entre 0 y 1
}

// Funci�n para verificar si un n�mero es primo
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

// Funci�n para generar N n�meros primos aleatorios
void generarNumerosPrimosAleatorios(int N) {
	cout << "Generando " << N << " n�meros primos aleatorios:" << endl;
	
	int contador = 0;
	int numero = 2;  // Comenzamos desde el primer n�mero primo
	
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
	srand(static_cast<unsigned int>(time(nullptr)));  // Inicializar la semilla para n�meros aleatorios
	
	char opcion;
	
	do {
		// Men� principal
		cout << "----- Men� Principal -----" << endl;
		cout << "(1) Generar n�mero entre 0 y 500" << endl;
		cout << "(2) Generar n�mero real" << endl;
		cout << "(3) Generar N n�meros primos aleatorios" << endl;
		cout << "(s) Salir" << endl;
		cout << "--------------------------" << endl;
		cout << "Selecciona una opci�n: ";
		cin >> opcion;
		
		switch (opcion) {
		case '1': {
			int numero;
			generarNumeroEntre0y500(numero);
			cout << "N�mero generado: " << numero << endl;
			break;
		}
		case '2': {
			double numero;
			generarNumeroReal(numero);
			cout << "N�mero real generado: " << numero << endl;
			break;
		}
		case '3': {
			int N;
			cout << "Ingrese la cantidad de n�meros primos a generar: ";
			cin >> N;
			generarNumerosPrimosAleatorios(N);
			break;
		}
		case 's':
		case 'S':
			cout << "Saliendo del programa. �Hasta luego!" << endl;
			break;
		default:
			cout << "Opci�n no v�lida. Int�ntalo de nuevo." << endl;
		}
	} while (opcion != 's' && opcion != 'S');
	
	return 0;
}
