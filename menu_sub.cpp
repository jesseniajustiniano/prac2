#include <iostream>
#include <string>

using namespace std;

// Funciones para operaciones con n�meros
void sumaNumeros() {
	double num1, num2;
	cout << "Ingrese el primer n�mero: ";
	cin >> num1;
	cout << "Ingrese el segundo n�mero: ";
	cin >> num2;
	cout << "La suma es: " << (num1 + num2) << endl;
}

void divisionNumeros() {
	double num1, num2;
	cout << "Ingrese el numerador: ";
	cin >> num1;
	cout << "Ingrese el denominador (diferente de 0): ";
	cin >> num2;
	
	if (num2 != 0) {
		cout << "El resultado de la divisi�n es: " << (num1 / num2) << endl;
	} else {
		cout << "Error: No se puede dividir por cero." << endl;
	}
}

int main() {
	char opcion;
	
	do {
		// Men� principal
		cout << "----- Men� Principal -----" << endl;
		cout << "(1) Operaciones con n�meros" << endl;
		cout << "(2) Concatenar 2 cadenas" << endl;
		cout << "(S) Salir" << endl;
		cout << "--------------------------" << endl;
		cout << "Selecciona una opci�n: ";
		cin >> opcion;
		
		switch (opcion) {
		case '1': {
			char subopcion;
			do {
				// Submen� para operaciones con n�meros
				cout << "----- Submen� Op N�meros -----" << endl;
				cout << "1) Suma de 2 n�meros" << endl;
				cout << "2) Divisi�n de 2 n�meros" << endl;
				cout << "(M) Volver al men� principal" << endl;
				cout << "-----------------------------" << endl;
				cout << "Selecciona una opci�n: ";
				cin >> subopcion;
				
				switch (subopcion) {
				case '1':
					sumaNumeros();
					break;
				case '2':
					divisionNumeros();
					break;
				case 'm':
				case 'M':
					cout << "Volviendo al men� principal." << endl;
					break;
				default:
					cout << "Opci�n no v�lida. Int�ntalo de nuevo." << endl;
				}
			} while (subopcion != 'm' && subopcion != 'M');
			break;
		}
		case '2': {
			// Concatenar 2 cadenas con espacio
			string cadena1, cadena2;
			cout << "Ingrese la primera cadena: ";
			cin.ignore(); // Limpiar el buffer del teclado antes de getline
			getline(cin, cadena1);
			cout << "Ingrese la segunda cadena: ";
			getline(cin, cadena2);
			cout << "Cadenas concatenadas: " << cadena1 + " " + cadena2 << endl;
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
