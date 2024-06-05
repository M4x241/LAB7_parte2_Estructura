#include<iostream>
#include<string>
#include<stdio.h>
#include <vector>
using namespace std;
enum Dificultad {FACIL, MEDIO, DIFICIL};
struct Nutricion {
	float calorias;
	float proteinas;
	float grasas;
	float carbohidratos;
};

struct lista {
	string identificador, nombre;
	string ingredientes[20];
	int tiempodePreparacion,tiempoCoccion, porciones;
	string dificultad,categoria;
	string origen;
	Nutricion valorNutricional;
	struct lista *siguiente;
};
lista* primero, *ultimo;

void iniciar() {
	primero = NULL;
	ultimo = NULL;
}
bool vacia() {
	if (primero == NULL)
		return true;
	else
		return false;
}
void insertar_delante(string identificador, string nombre, string ingredientes[], int tiempodePreparacion, int tiempoCoccion, int porciones, string dificultad, string categoria, string origen, Nutricion valorNutricional) {

	lista* nuevo = new lista();
	nuevo->identificador = identificador;
	nuevo->nombre = nombre;
	for (int i = 0; i < 20; i++) {
		cout << "N* " << i + 1 << ":";
		nuevo->ingredientes[i] = ingredientes[i];
	}
	nuevo->tiempodePreparacion = tiempodePreparacion;
	nuevo->tiempoCoccion = tiempoCoccion;
	nuevo->porciones = porciones;
	nuevo->dificultad = dificultad;
	nuevo->categoria = categoria;
	nuevo->origen = origen;
	nuevo->valorNutricional = valorNutricional;
	nuevo->siguiente = NULL;
	if (vacia()) {
		primero = nuevo;
		ultimo = nuevo;
	}
	else {
		nuevo->siguiente = primero;
		primero = nuevo;
	}
	return;
}

void insertar_detras(string identificador, string nombre, string ingredientes[], int tiempodePreparacion, int tiempoCoccion, int porciones, string dificultad, string categoria, string origen, Nutricion valorNutricional) {
	lista* nuevo = new lista();
	nuevo->identificador = identificador;
	nuevo->nombre = nombre;
	for (int i = 0; i < 20; i++) {
		cout << "N* " << i + 1 << ":";
		nuevo->ingredientes[i] = ingredientes[i];
	}
	nuevo->tiempodePreparacion = tiempodePreparacion;
	nuevo->tiempoCoccion = tiempoCoccion;
	nuevo->porciones = porciones;
	nuevo->dificultad = dificultad;
	nuevo->categoria = categoria;
	nuevo->origen = origen;
	nuevo->valorNutricional = valorNutricional;
	nuevo->siguiente = NULL;
	if (vacia()) {
		primero = nuevo;
		ultimo = nuevo;
	}
	else {
		ultimo->siguiente = nuevo;
		ultimo = nuevo;
	}
	return;
}

void insertar_alfabeticamente(string identificador, string nombre, string ingredientes[], int tiempodePreparacion, int tiempoCoccion, int porciones, string dificultad, string categoria, string origen, Nutricion valorNutricional) {
	lista* nuevo = new lista();
	nuevo->identificador = identificador;
	nuevo->nombre = nombre;
	for (int i = 0; i < 3; i++) {
		nuevo->ingredientes[i] = ingredientes[i];
	}
	nuevo->tiempodePreparacion = tiempodePreparacion;
	nuevo->tiempoCoccion = tiempoCoccion;
	nuevo->porciones = porciones;
	nuevo->dificultad = dificultad;
	nuevo->categoria = categoria;
	nuevo->origen = origen;
	nuevo->valorNutricional = valorNutricional;
	nuevo->siguiente = NULL;
	if (vacia()) {
		primero = nuevo;
		ultimo = nuevo;
	}
	else {
		lista* aux1 = primero;
		lista* aux2 = NULL;
		while ((aux1 != NULL) && (aux1->nombre < nombre)) {
			aux2 = aux1;
			aux1 = aux1->siguiente;
		}
		if (aux2 == NULL) {
			nuevo->siguiente = primero;
			primero = nuevo;
		}
		else {
			aux2->siguiente = nuevo;
			nuevo->siguiente = aux1;
		}
	}
	return;
}
void eliminarReceta(string nombre) {
	lista* actual, * anterior;
	actual = primero;
	anterior = primero;
	while ((actual != NULL) && (actual->nombre != nombre)) {
		anterior = actual;
		actual = actual->siguiente;
	}
	if (actual == NULL) {
		cout << "No se encontro la receta" << endl;
		return;
	}
	else {
		if (primero == ultimo) {
			iniciar();
		}
		else {
			if (actual == primero) {
				primero = primero->siguiente;
			}
			else {
				if (actual == primero) {
					primero = ultimo->siguiente;
				}
				else {
					if (actual == ultimo) {
						ultimo = anterior;
					}
					else {
						anterior->siguiente = actual->siguiente;
					}
				}
			}
				
		}
	}
	return;
}

void MostrarDatosDeReceta(lista* actual) {
	cout << "################################################################################################" << endl;
	cout << endl;
	cout << "Identificador: " << actual->identificador << endl;
	cout << "Nombre: " << actual->nombre << endl;
	cout << "Ingredientes: " << endl;
	for (int i = 0; i < 3; i++) {
		cout << "\tN* " << i + 1 << ":";
		cout << actual->ingredientes[i] << endl;
	}
	cout << "Tiempo de preparacion: " << actual->tiempodePreparacion << endl;
	cout << "Tiempo de coccion: " << actual->tiempoCoccion << endl;
	cout << "Porciones: " << actual->porciones << endl;
	cout << "Dificultad: " << actual->dificultad << endl;
	cout << "Categoria: " << actual->categoria << endl;
	cout << "Origen: " << actual->origen << endl;
	cout << "Valor nutricional: " << endl;
	cout << "\tCalorias: " << actual->valorNutricional.calorias << endl;
	cout << "\tProteinas: " << actual->valorNutricional.proteinas << endl;
	cout << "\tGrasas: " << actual->valorNutricional.grasas << endl;
	cout << "\tCarbohidratos: " << actual->valorNutricional.carbohidratos << endl;
	cout << endl;
	cout << "################################################################################################" << endl;

	return;
}

void ListarRecetas() {
	lista* actual;
	if (vacia()) {
		cout << "No hay recetas" << endl;
		return;
	}
	else {
		actual = primero;
		while (actual != NULL) {
			MostrarDatosDeReceta(actual);
			actual = actual->siguiente;
		}
	}

	return;
}


void buscarReceta(string nombre) {
	lista* actual;
	actual = primero;
	while ((actual != NULL) && (actual->nombre != nombre)) {
		actual = actual->siguiente;
	}
	if (actual == NULL) {
		cout << "No se encontro la receta" << endl;
		return;
	}
	else {
		MostrarDatosDeReceta(actual);
	}
	return;
}
void actualizardatosReceta(string nombre, string ingredientes[], int tiempodePreparacion, int tiempoCoccion, int porciones, string dificultad, string categoria, string origen, Nutricion valorNutricional) {
	lista* actual;//modificar para cambiar las recetas miembro a miembro
	actual = primero;
	while ((actual != NULL) && (actual->nombre != nombre)) {
		actual = actual->siguiente;
	}
	if (actual == NULL) {
		cout << "No se encontro la receta" << endl;
		return;
	}
	else {
		for (int i = 0; i < 3; i++) {
			cout << "N* " << i + 1 << ":";
			actual->ingredientes[i] = ingredientes[i];
		}
		actual->tiempodePreparacion = tiempodePreparacion;
		actual->tiempoCoccion = tiempoCoccion;
		actual->porciones = porciones;
		actual->dificultad = dificultad;
		actual->categoria = categoria;
		actual->origen = origen;
		actual->valorNutricional = valorNutricional;
	}
	return;
}
void buscarRecetaPorCategoria(string categoria) {
	lista* actual;
	actual = primero;
	while (actual != NULL) {
		if (actual->categoria == categoria) {
			MostrarDatosDeReceta(actual);
		}
		actual = actual->siguiente;
	}
	return;
}
void buscarPorValorNutricional(float calorias, float proteinas, float grasas, float carbohidratos) {
	lista* actual;
	actual = primero;
	while (actual != NULL) {
		if (actual->valorNutricional.calorias <= calorias && actual->valorNutricional.proteinas <= proteinas && actual->valorNutricional.grasas <= grasas && actual->valorNutricional.carbohidratos <= carbohidratos) {
			MostrarDatosDeReceta(actual);
		}
		actual = actual->siguiente;
	}
	return;
}
void buscarPorTiempoDeCoccion(int tiempoCoccion) {
	lista* actual;
	actual = primero;
	while (actual != NULL) {
		if (actual->tiempoCoccion <= tiempoCoccion) {
			MostrarDatosDeReceta(actual);
		}
		actual = actual->siguiente;
	}
	return;
}


void PedirDatosDeReceta() {
	string identificador, nombre, ingredientes[20], dificultad, categoria, origen;
	int tiempodePreparacion, tiempoCoccion, porciones;
	float calorias, proteinas, grasas, carbohidratos;
	cout << "Ingrese el identificador de la receta: ";
	cin >> identificador;
	cout << "Ingrese el nombre de la receta: ";
	cin >> nombre;
	cout << "Ingrese los ingredientes de la receta:\n";


	for (int i = 0; i < 3; i++) {
		cout << "\tN* " << i + 1 << ":";
		cin >> ingredientes[i];
	}


	cout << "Ingrese el tiempo de preparacion de la receta: ";
	cin >> tiempodePreparacion;
	cout << "Ingrese el tiempo de coccion de la receta: ";
	cin >> tiempoCoccion;
	cout << "Ingrese las porciones de la receta: ";
	cin >> porciones;
	cout << "Ingrese la dificultad de la receta: ";
	cin >> dificultad;
	cout << "Ingrese la categoria de la receta: ";
	cin >> categoria;
	cout << "Ingrese el origen de la receta: ";
	cin >> origen;
	cout << "Ingrese el valor nutricional de la receta: " << endl;
	cout << "\tCalorias: ";
	cin >> calorias;
	cout << "\tProteinas: ";
	cin >> proteinas;
	cout << "\tGrasas: ";
	cin >> grasas;
	cout << "\tCarbohidratos: ";
	cin >> carbohidratos;
	Nutricion valorNutricional = { calorias, proteinas, grasas, carbohidratos };
	insertar_alfabeticamente(identificador, nombre, ingredientes, tiempodePreparacion, tiempoCoccion, porciones, dificultad, categoria, origen, valorNutricional);

	return;
}


int main() {
	cout<<"\t\tBienvenido a la aplicacion de recetas"<<endl;
	iniciar();
	do {
		cout << "\t1. Nueva Receta" << endl;
		cout << "\t2. Eliminar Receta" << endl;
		cout << "\t3. Listar Recetas" << endl;
		cout << "\t4. Buscar Receta" << endl;
		cout << "\t5. Actualizar datos de Receta" << endl;
		cout << "\t6. Buscar Receta por Categoria" << endl;
		cout << "\t7. Buscar Receta por Valor Nutricional" << endl;
		cout << "\t8. Buscar Receta por Tiempo de Coccion" << endl;
		cout << "\t9. Salir" << endl;
		int opcion;
		cout << "Opcion: ";
		cin >> opcion;
	
		system("cls");
		string nombre, ingredientes[20], dificultad, categoria, origen;
		int tiempodePreparacion, tiempoCoccion, porciones;
		float calorias, proteinas, grasas, carbohidratos;
		Nutricion valorNutricional;

		switch (opcion) {
		case 1:
			PedirDatosDeReceta();
			break;
		case 2:
			cout << "\tIngrese el nombre de la receta a eliminar: ";
			cin >> nombre;
			eliminarReceta(nombre);
			break;
		case 3:
			ListarRecetas();
			break;
		case 4:
			cout << "\tIngrese el nombre de la receta a buscar: ";
			cin >> nombre;
			buscarReceta(nombre);
			break;
		case 5:
			cout << "\tIngrese el nombre de la receta a actualizar: ";
			cin >> nombre;
			cout << "\tIngrese los ingredientes de la receta: ";
			for (int i = 0; i < 3; i++) {
				cin >> ingredientes[i];
			}
			cout << "\tIngrese el tiempo de preparacion de la receta: ";
			cin >> tiempodePreparacion;
			cout << "\tIngrese el tiempo de coccion de la receta: ";
			cin >> tiempoCoccion;
			cout << "\tIngrese las porciones de la receta: ";
			cin >> porciones;
			cout << "\tIngrese la dificultad de la receta: ";
			cin >> dificultad;
			cout << "\tIngrese la categoria de la receta: ";
			cin >> categoria;
			cout << "\tIngrese el origen de la receta: ";
			cin >> origen;
			cout << "\tIngrese el valor nutricional de la receta: " << endl;
			cout << "\t\tCalorias: ";
			cin >> calorias;
			cout << "\t\tProteinas: ";
				
			cin >> proteinas;
			cout << "\t\tGrasas: ";
			cin >> grasas;
			cout << "\t\tCarbohidratos: ";
			cin >> carbohidratos;
			valorNutricional = { calorias, proteinas, grasas, carbohidratos };
			actualizardatosReceta(nombre, ingredientes, tiempodePreparacion, tiempoCoccion, porciones, dificultad, categoria, origen, valorNutricional);
			break;
		case 6:
			cout << "\tIngrese la categoria de la receta a buscar: ";
			cin >> categoria;
			buscarRecetaPorCategoria(categoria);
			break;
		case 7:
			cout << "\tIngrese el valor nutricional de la receta a buscar: " << endl;
			cout << "\t\tCalorias: ";
			cin >> calorias;
			cout << "\t\tProteinas: ";
			cin >> proteinas;
			cout << "\t\tGrasas: ";
			cin >> grasas;
			cout << "\t\tCarbohidratos: ";
			cin >> carbohidratos;
			buscarPorValorNutricional(calorias, proteinas, grasas, carbohidratos);
			break;
		case 8:
			cout << "\tIngrese el tiempo de coccion de la receta a buscar: ";
			cin >> tiempoCoccion;
			buscarPorTiempoDeCoccion(tiempoCoccion);
			break;
		case 9:
			cout<<"\tSaliendo de la aplicacion"<<endl;
			return 0;
			break;
		default:
			cout << "\tOpcion no valida" << endl;
			break;
		}
		//pausar la pantalla
		cout << endl << endl;
		system("pause");
		system("cls");

	}while(true);
	return 0;
}