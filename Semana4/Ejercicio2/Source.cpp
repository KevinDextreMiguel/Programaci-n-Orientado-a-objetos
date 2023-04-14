#include"Equilatero.h"
#include"Rectangulo.h"
#include<conio.h>
int menu()
{
	int opc;
	do
	{
		cout << "\t\tMENU";
		cout << "\n1. Triángulo Equilátero Horario";
		cout << "\n2. Triángulo Rectángulo Horario";
		cout << "\n\nIngrese la opción :";
		cin >> opc;
	} while (opc<1||opc>2);
	return opc;
}
void main()
{
	setlocale(LC_ALL, "spanish");
	Equilatero* obj;
	Rectagulo* obj1;
	int l, l1;
	int opc;
	opc = menu();
	if (opc == 1)
	{
		cout << "Lado : "; cin >> l;
		obj = new Equilatero(l);
		obj->dibujar();
	}
	else
	{
		cout << "Lado 1: "; cin >> l;
		cout << "Lado 2: "; cin >> l1;
		obj1 = new Rectagulo(l, l1);
		obj1->dibujar();
	}
	getch();
}






