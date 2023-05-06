#pragma once
#include"Base.h"
class Vacuna:public Base
{
public:
	Vacuna();
	~Vacuna();
	void dibujar();
	void mover();
};

Vacuna::Vacuna():Base(rand()%80+20, rand() % 20 + 5,1,0,4,1,3){}
Vacuna::~Vacuna(){}

void Vacuna::dibujar()
{
	Console::ForegroundColor = (ConsoleColor)color;
	Console::SetCursorPosition(x, y);
	cout << "|->";
}
void Vacuna::mover()
{
	if (x + dx<0 || x + dx + ancho>ANCHO_CONSOLA)dx *= -1;
	if (y + dy<0 || y + dy + alto>ALTO_CONSOLA)dy *= -1;

	x += dx;
	y += dy;
}