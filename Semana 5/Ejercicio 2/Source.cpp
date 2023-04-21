#include"Jugar.h"
#include"Jugando.h"
#include<conio.h>
void main()
{
	srand(time(NULL));
	Console::SetWindowSize(ANCHO, ALTO);
	Console::CursorVisible = false;
	Jugar* obj = new Jugar();
	char tecla=NULL;
	while (true)
	{
		if (_kbhit())
			tecla = getch();
		if (tecla >= '1' && tecla <= '4')
		{
			Console::Clear();
			obj->set_tecla(tecla);
		}

		obj->volar();
		_sleep(100);
	}
	//Console::SetCursorPosition(40, 14);
	//cout << "“comienza la invasión…!!!”";

	//while (obj->condicion())
	//{
	//	tecla = NULL;
	//	if (_kbhit())
	//		tecla = getch();
	//	if (toupper(tecla) == 'A')
	//		obj->agregar_alfa();

	//	obj->eliminar();
	//	obj->borrar_todos();
	//	obj->mover_todos();
	//	obj->dibujar_todos();
	//	_sleep(100);
	//}

	//system("cls");
	//Console::SetCursorPosition(40, 14);
	//cout << " “Hemos sido invadidos…”";
	//getch();
	//getch();
	//getch();
}