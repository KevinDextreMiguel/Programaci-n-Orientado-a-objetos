#include<conio.h>
#include"Jugar.h"
void main()
{
	Console::SetWindowSize(ANCHO_CONSOLA, ALTO_CONSOLA);
	srand(time(NULL));
	Jugar obj = Jugar();
	char tecla;
	clock_t tiempo = clock();
	obj.insetar_virus();
	while (obj.colision())//true
	{
		Console::SetCursorPosition(90, 0);
		cout << "Cantidad de virus: " << obj.get_cantidad_virus();
		Console::SetCursorPosition(90, 1);
		cout << "Cantidad de colisiones: " << obj.get_cantidad_colision();
		                    //1000
		if ((clock() - tiempo) / CLOCKS_PER_SEC >= 5)
		{
			obj.insetar_vacuna();
			tiempo = clock();
		}

		obj.borrar_todo();

		if (_kbhit())
		{
			tecla = getch();
			obj.mover_monigote(tecla);
			if (toupper(tecla) == 'V')
				obj.insetar_virus();
		}
		obj.mover_todo();
		obj.dibujar_todo();
		_sleep(100);
	}

	system("cls");
	Console::SetCursorPosition(30,15);
	if (obj.get_cantidad_colision() >= 3)
		cout << "Te eliminaron";
	else
		cout << "Ganaste!!";

	getch();
	getch();
	getch();
}