#pragma once
#using <System.Windows.Forms.dll>
using namespace System;
using namespace System::Collections::Generic;


namespace Recetaslibrary {
	public ref class ingrediente
	{
	private:
		String^ identificador;
		String^ nombre;
		String^ estado;
		String^ origen;
		int ValorNutricional;
		int cantidad;
		String^ unidad;
	public:
		//apuntador siguiente
		ingrediente^ siguiente;
		//Constructor
		ingrediente(String^ _identificador, String^ _nombre, int _tiempodePreparacion, int _tiempoCoccion, int _porciones, String^ _dificultad, String^ _categoria, String^ _origen, String^ _valorNutricional, String^ _ingredientes) {

		};
		ingrediente() {}
		~ingrediente() {}
		//Metodos getter
		String^ getIdentificador() { return identificador; }
		String^ getNombre() { return nombre; }
		String^ getEstado() { return estado; }
		String^ getOrigen() { return origen; }
		int getValorNutricional() { return ValorNutricional; }
		int getCantidad() { return cantidad; }
		String^ getUnidad() { return unidad; }
		//Metodos
		void setIdentificador(String^ _identificador) { identificador = _identificador; }
		void setNombre(String^ _nombre) { nombre = _nombre; }
		void setEstado(String^ _estado) { estado = _estado; }
		void setOrigen(String^ _origen) { origen = _origen; }
		void setValorNutricional(int _ValorNutricional) { ValorNutricional = _ValorNutricional; }
		void setCantidad(int _cantidad) { cantidad = _cantidad; }
		void setUnidad(String^ _unidad) { unidad = _unidad; }
		void insertarIngrediente(String^ _identificador,
			String^ _nombre,
			String^ _estado,
			String^ _origen,
			int _ValorNutricional,
			int _cantidad,
			String^ _unidad)
		{//aqui se agregan los datos de la receta
			identificador = _identificador;
			nombre = _nombre;
			estado = _estado;
			origen = _origen;
			ValorNutricional = _ValorNutricional;
			cantidad = _cantidad;
			unidad = _unidad;

		}
	};
	public ref class Receta {
		//crea con estos atributos
		//identificador.
	public:
		String^ Nombre;
		String^ preparacion;
		String^ coccion;
		int Porciones;
		String^ dificultad;
		String^ Categoría;
		String^ Origen;
		Receta^ siguiente;
		ingrediente^ cabeza;
		//metodos
		Receta() {}
		~Receta() {}
		void InsertarRecetar(String^ _Nombre, String^ _preparacion, String^ _coccion, int _Porciones, String^ _dificultad, String^ _Categoría, String^ _Origen) {
			Nombre = _Nombre;
			preparacion = _preparacion;
			coccion = _coccion;
			Porciones = _Porciones;
			dificultad = _dificultad;
			Categoría = _Categoría;
			Origen = _Origen;
		}
		void insertarIngrediente(String^ _identificador, String^ _nombre, String^ _estado, String^ _origen, int _ValorNutricional, int _cantidad, String^ _unidad) {
			ingrediente^ nuevoIngrediente = gcnew ingrediente();
			nuevoIngrediente->insertarIngrediente(_identificador, _nombre, _estado, _origen, _ValorNutricional, _cantidad, _unidad);
			if (cabeza == nullptr)
			{
				cabeza = nuevoIngrediente;
			}
			else
			{
				ingrediente^ aux = cabeza;
				while (aux->siguiente != nullptr)
				{
					aux = aux->siguiente;
				}
				aux->siguiente = nuevoIngrediente;
			}
		}
		void eliminarIngrediente(String^ _Nombre) {
			ingrediente^ aux = cabeza;
			ingrediente^ aux2 = nullptr;
			while (aux != nullptr)
			{
				if (aux->getNombre() == _Nombre)
				{
					if (aux2 == nullptr)
					{
						cabeza = cabeza->siguiente;
						delete aux;
						break;
					}
					else
					{
						aux2->siguiente = aux->siguiente;
						delete aux;
						break;
					}
				}
				aux2 = aux;
				aux = aux->siguiente;
			}
		}
		ingrediente^ buscarIngrediente(String^ _Nombre) {
			ingrediente^ aux = cabeza;
			while (aux != nullptr)
			{
				if (aux->getNombre() == _Nombre)
				{
					break;
				}
				aux = aux->siguiente;
			}
			return aux;
		}
		void mostrarIngredientes(System::Windows::Forms::ListBox^ listBox) {
			ingrediente^ aux = cabeza;
			listBox->Items->Clear();
			while (aux != nullptr)
			{
				listBox->Items->Add(aux->getNombre());
				aux = aux->siguiente;
			}
		}
	};
	public ref class Categorias {
	public:
		String^ nombreCategoria;
		Receta^ recetaPrimaria;
	public:
		Categorias^ siguiente;
		Categorias() {}
		~Categorias() {}
		void setNombreCategoria(String^ _nombreCategoria) { nombreCategoria = _nombreCategoria; }
		String^ getNombreCategoria() { return nombreCategoria; }
		void INSERTAReceta(String^ _Nombre, String^ _preparacion, String^ _cocción, int _Porciones, String^ _dificultad, String^ _Categoría, String^ _Origen)
		{//insertamos
			Receta^ nuevaReceta = gcnew Receta();
			nuevaReceta->InsertarRecetar( _Nombre, _preparacion, _cocción,_Porciones, _dificultad,  _Categoría,  _Origen);
			if (recetaPrimaria == nullptr)
			{
				recetaPrimaria = nuevaReceta;
			}
			else
			{
				Receta^ aux = recetaPrimaria;
				while (aux->siguiente != nullptr)
				{
					aux = aux->siguiente;
				}
				aux->siguiente = nuevaReceta;
			}
		}
		Receta^ buscarReceta(String^ _Nombre) {
			Receta^ aux = recetaPrimaria;
			while (aux != nullptr)
			{//quiero retornar la recelta, solo eso, sin mensaje
				if (aux->Nombre == _Nombre)
				{
					break;
				}
				aux = aux->siguiente;
			}
			return aux;
		}
		void eliminarReceta(String^ _Nombre) {
			Receta^ aux = recetaPrimaria;
			Receta^ aux2 = nullptr;
			while (aux != nullptr)
			{
				if (aux->Nombre == _Nombre)
				{
					if (aux2 == nullptr)
					{
						recetaPrimaria = recetaPrimaria->siguiente;
						delete aux;
						break;
					}
					else
					{
						aux2->siguiente = aux->siguiente;
						delete aux;
						break;
					}
				}
				aux2 = aux;
				aux = aux->siguiente;
			}
		}
		void mostrarRecetas(System::Windows::Forms::ListBox^ listBox) {
			Receta^ aux = recetaPrimaria;
			listBox->Items->Clear();
			while (aux != nullptr)
			{
				listBox->Items->Add(aux->Nombre);
				aux = aux->siguiente;
			}
		}

	};
	public ref class listaCategorias {
	public:
		Categorias^ cabeza;
		Categorias^ cola;
	public:
		listaCategorias() {}
		~listaCategorias() {}
		void insertarCategoria(String^ namecategoria) {
			Categorias^ nuevaCategoria = gcnew Categorias();
			nuevaCategoria->setNombreCategoria(namecategoria);
			if (cabeza == nullptr)
			{
				cabeza = nuevaCategoria;
				cola = nuevaCategoria;
			}
			else
			{
				cola->siguiente = nuevaCategoria;
				cola = nuevaCategoria;
				cola->setNombreCategoria(namecategoria);
			}
		}
		Categorias^ buscarCategoria(String^ _namecategoria) {
			Categorias^ aux = cabeza;
			while (aux != nullptr)
			{
				if (aux->getNombreCategoria() == _namecategoria)
				{
					break;
				}
				aux = aux->siguiente;
			}
			return aux;
		}
		void mostrarCategoria(System::Windows::Forms::ListBox^ listBox) {
			Categorias^ aux = cabeza;
			listBox->Items->Clear();
			while (aux != nullptr)
			{
				listBox->Items->Add(aux->getNombreCategoria());
				aux = aux->siguiente;
			}
		}
		Categorias^ insertarenCategoria(String^ namecategoria) {
			Categorias^ aux = cabeza;
			while (aux != nullptr)
			{
				if (aux->getNombreCategoria() == namecategoria)
				{
					break;
				}
				aux = aux->siguiente;
			}
			return aux;
		}
		void borrarCategoria(String^ _namecategoria) {
			Categorias^ aux = cabeza;
			Categorias^ aux2 = nullptr;
			while (aux != nullptr)
			{
				if (aux->getNombreCategoria() == _namecategoria)
				{
					if (aux2 == nullptr)
					{
						cabeza = cabeza->siguiente;
						delete aux;
						break;
					}
					else
					{
						aux2->siguiente = aux->siguiente;
						delete aux;
						break;
					}
				}
				aux2 = aux;
				aux = aux->siguiente;
			}
		}

	private:
		void insertarRecetaDCategoria(String^ _Nombre, String^ _preparacion, String^ _cocción, int _Porciones, String^ _dificultad, String^ _Categoría, String^ _Origen) {
			Categorias^ aux = cabeza;
			while (aux != nullptr)
			{
				if (aux->getNombreCategoria() == _Categoría)
				{
					aux->INSERTAReceta(_Nombre, _preparacion, _cocción, _Porciones, _dificultad, _Categoría, _Origen);
					break;
				}
				aux = aux->siguiente;
			}
		}
	};
}
