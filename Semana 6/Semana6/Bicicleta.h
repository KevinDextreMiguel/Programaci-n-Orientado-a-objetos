#pragma once
#include"Terrestre.h"
class Bicicleta :public Terrestre
{
public:
	Bicicleta();
	~Bicicleta();
	void dibujar();
	void mover();
};
Bicicleta::Bicicleta() :Terrestre(7, 2, 1) {}
Bicicleta::~Bicicleta() {}
void Bicicleta::dibujar()
{
	Console::ForegroundColor = (ConsoleColor)color;
	if (dx > 0)
	{
		Console::SetCursorPosition(x, y);
		cout << ".._\\";
		Console::SetCursorPosition(x, y + 1);
		cout << "(o)(o)";
	}
	else
	{
		Console::SetCursorPosition(x, y);
		cout << "/_.. ";
		Console::SetCursorPosition(x, y + 1);
		cout << "(o)(o)";
	}
}
void Bicicleta::mover()
{
	if (x+dx<0||x + dx + ancho > ANCHO)dx *= -1;;

	x += dx;
}
