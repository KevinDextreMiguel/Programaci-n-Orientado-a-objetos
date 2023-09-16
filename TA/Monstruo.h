#pragma once
#include"Base.h"
class Monstruo:public Base
{
public:
	Monstruo(int _dx,int _dy);
	~Monstruo();
	void dibujar();
private:
};
Monstruo::Monstruo(int _dx, int _dy):Base(5,4)
{
	color = 3;
	dx = _dx;
	dy = _dy;
}
Monstruo::~Monstruo(){}
void Monstruo::dibujar()
{
	Console::ForegroundColor = (ConsoleColor)color;
	Console::SetCursorPosition(x, y);     cout << "___";
	Console::SetCursorPosition(x, y + 1); cout << "/OO\\";
	Console::SetCursorPosition(x, y + 2); cout << "|  |";
	Console::SetCursorPosition(x, y + 3); cout << "^  ^";
}
