#pragma once
#include"Base.h"
class Diamante:public Base
{
public:
	Diamante();
	~Diamante();
	void dibujar();
private:
};

Diamante::Diamante():Base(1,1)
{
	color = 12;
}
Diamante::~Diamante(){}
void Diamante::dibujar()
{
	Console::ForegroundColor = (ConsoleColor)color;
	Console::SetCursorPosition(x, y); cout << char(4);
}