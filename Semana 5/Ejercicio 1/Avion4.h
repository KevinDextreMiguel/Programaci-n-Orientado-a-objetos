#pragma once
#include"Avion.h"
class Avion4 :public Avion
{
public:
	Avion4();
	~Avion4();
	void dibujar();
};
Avion4::Avion4() :Avion(17,3){}
Avion4::~Avion4() {}
void Avion4::dibujar()
{
	Console::ForegroundColor = (ConsoleColor)color;
	Console::SetCursorPosition(x, y);
	cout << "________|________";
	Console::SetCursorPosition(x, y + 1);
	cout << " _|_____0_____|_ ";
	Console::SetCursorPosition(x, y + 2);
	cout << "      |   |      ";
}
