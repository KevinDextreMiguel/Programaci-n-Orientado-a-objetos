#pragma once
#include"Avion.h"
class Avion1 :public Avion
{
public:
	Avion1();
	~Avion1();
	void dibujar();
};
Avion1::Avion1():Avion(11,3){}
Avion1::~Avion1(){}
void Avion1::dibujar()
{
	Console::ForegroundColor = (ConsoleColor)color;
	Console::SetCursorPosition(x, y);
	cout << "-----------";
	Console::SetCursorPosition(x, y + 1);
	cout << "_\\__(_)__/_";
	Console::SetCursorPosition(x, y + 2);
	cout << "   ./ \\.   ";
}