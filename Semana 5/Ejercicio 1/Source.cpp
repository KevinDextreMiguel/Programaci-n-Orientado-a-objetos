#include"entero.h"
#include<conio.h>
int opciones()
{
	int opc;
	cout << "\n1. insertar";
	cout << "\n2. eliminar último";
	cout << "\n3. ordenar";
	cout << "\n4. buscar";
	cout << "\n\nIngrese opción: ";
	cin >> opc;
	return opc;
}
void main()
{
	Entero* obj = new Entero();// ->
	Entero obj1 = Entero();// .
	obj1.imprimir();
	int opcion;
	int num;



	while (true)
	{
		Console::Clear();
		opcion = opciones();
		switch (opcion)
		{
		case 1:
			cout << "Inrgrese el número a insertar: ";
			cin >> num;
			obj->insertar(num);
			break;
		case 2:
			obj->eliminar_ultimo();
			break;
		case 3:
			obj->ordenar();
			cout << "Ordenado correctamente";
			break;
		case 4:
			cout << "Inrgrese el número a buscar: ";
			cin >> num;
			obj->buscar(num);
		}
		//ocurrre siempre
		obj->imprimir();
		getch();
	}
	getch();
}