#pragma once
#include"Base.h"
class Monigote:public Base
{
public:
	Monigote();
	~Monigote();
	void dibujar();
	void mover();
	void set_direccion(int _dx, int _dy);
	void posicion_inicial(int _x, int _y);
};

Monigote::Monigote():Base(0,0,0,0,1,2,5){}

Monigote::~Monigote(){}
void Monigote::dibujar()
{
	Console::ForegroundColor = (ConsoleColor)color;
	Console::SetCursorPosition(x, y);
	cout << "o";
	Console::SetCursorPosition(x, y+1);
	cout <<char(197);
}
void Monigote::mover()
{
	if (x + dx<0 || x + dx + ancho>ANCHO_CONSOLA)dx = 0;
	if (y + dy<0 || y + dy + alto>ALTO_CONSOLA)dy = 0;

	x += dx;
	y += dy;
}
void Monigote::set_direccion(int _dx, int _dy)
{
	dx = _dx;
	dy = _dy;
}
void Monigote::posicion_inicial(int _x, int _y)
{
	x = _x;
	y = _y;
}