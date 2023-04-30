#include"Jugar.h"
#include<conio.h>
void main()
{
	srand(time(NULL));
	Console::CursorVisible = false;
	Jugar* jugar = new Jugar();
	char tecla;
	while (jugar->colision_objetos())
	{
		if (_kbhit())
		{
			tecla=getch();
			jugar->direccion_persona(tecla);
		}
		jugar->borrar_todo();
		jugar->mover_todo();
		jugar->dibujar_todo();
		_sleep(100);
	}
	system("cls");
	Console::SetCursorPosition(30, 14);
	cout << "Tener cuidado al cruzar la pista";
	getch();
	getch();
}

