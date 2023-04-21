#pragma once
#include"Avion.h"
class Avion2 :public Avion
{
public:
	Avion2();
	~Avion2();
	void dibujar();
};
Avion2::Avion2():Avion(13,3){}
Avion2::~Avion2(){}
void Avion2::dibujar()
{
	Console::ForegroundColor = (ConsoleColor)color;
	Console::SetCursorPosition(x, y);
	cout << "    __!__    ";
	Console::SetCursorPosition(x, y + 1);
	cout << "_____(_)_____";
	Console::SetCursorPosition(x, y + 2);
	cout << "   !  !  !   ";
}