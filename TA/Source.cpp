#include"Jugar.h"
int main()
{
	Jugar* obj = new Jugar();
	char tecla;
	obj->generar_elementos();
	while (obj->colison_elementos())
	{
		obj->mostrar_vida();
		if (_kbhit())
			tecla = getch();

		obj->borrar_todos();
		obj->mover_todos();
		obj->mover_personaje(tecla);
		obj->dibujar_todos();

		_sleep(100);
	}
	Console::Clear();
	Console::SetCursorPosition(50, 10);  cout << "GANASTE!!";
	getch();
	return 0;
}



