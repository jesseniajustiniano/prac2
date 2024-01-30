#include <iostream>
#include <string>

using namespace std;

// Funciones para operaciones con números
void sumaNumeros() {
	double num1, num2;
	cout << "Ingrese el primer número: ";
	cin >> num1;
	cout << "Ingrese el segundo número: ";
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
		cout << "El resultado de la división es: " << (num1 / num2) << endl;
	} else {
		cout << "Error: No se puede dividir por cero." << endl;
	}
}

int main() {
	char opcion;
	
	do {
		// Menú principal
		cout << "----- Menú Principal -----" << endl;
		cout << "(1) Operaciones con números" << endl;
		cout << "(2) Concatenar 2 cadenas" << endl;
		cout << "(S) Salir" << endl;
		cout << "--------------------------" << endl;
		cout << "Selecciona una opción: ";
		cin >> opcion;
		
		switch (opcion) {
		case '1': {
			char subopcion;
			do {
				// Submenú para operaciones con números
				cout << "----- Submenú Op Números -----" << endl;
				cout << "1) Suma de 2 números" << endl;
				cout << "2) División de 2 números" << endl;
				cout << "(M) Volver al menú principal" << endl;
				cout << "-----------------------------" << endl;
				cout << "Selecciona una opción: ";
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
					cout << "Volviendo al menú principal." << endl;
					break;
				default:
					cout << "Opción no válida. Inténtalo de nuevo." << endl;
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
			cout << "Saliendo del programa. ¡Hasta luego!" << endl;
			break;
		default:
			cout << "Opción no válida. Inténtalo de nuevo." << endl;
		}
	} while (opcion != 's' && opcion != 'S');
	
	return 0;
}
