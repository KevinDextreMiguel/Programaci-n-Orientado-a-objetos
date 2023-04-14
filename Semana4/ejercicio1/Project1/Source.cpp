#include<conio.h>
#include"Juego.h"
void main()
{
	Jugando* obj = new Jugando();
	char letra =NULL;
	while (true)
	{
		if (_kbhit())
			letra = getch();

		obj->elegir(letra);
		_sleep(100);
	}

}