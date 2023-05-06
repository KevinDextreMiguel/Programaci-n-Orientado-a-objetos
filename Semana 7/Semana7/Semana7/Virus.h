#pragma once
#include"Base.h"

class Virus:public Base
{
public:
	Virus();
	~Virus();
	void dibujar();
	void mover();
};

Virus::Virus():Base(rand()%80+20,rand()%18+6,1,1,10,5,8){}
Virus::~Virus(){}

void Virus::dibujar()
{
	Console::ForegroundColor = (ConsoleColor)color;
	Console::SetCursorPosition(x, y);
	cout << "     q";
	Console::SetCursorPosition(x, y+1);
	cout << "  o.-o-.o";
	Console::SetCursorPosition(x, y+2);
	cout << "o-(ooo)-o";
	Console::SetCursorPosition(x, y+3);
	cout << "  o.-o-.o";
	Console::SetCursorPosition(x, y+4);
	cout << "     b";
}
void Virus::mover()
{
	if (x + dx<0 || x + dx + ancho>ANCHO_CONSOLA)dx *= -1;
	if (y + dy<0 || y + dy + alto>ALTO_CONSOLA)dy *=-1;

	x += dx;
	y += dy;
}