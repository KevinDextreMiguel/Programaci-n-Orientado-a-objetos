#pragma once
#include"Ovni.h"
class Alfa :public Ovni
{
public:
	Alfa();
	~Alfa();
	void dibujar();
};
Alfa::Alfa():Ovni(0,21,5){}
Alfa::~Alfa(){}
void Alfa::dibujar()
{
	Console::ForegroundColor = (ConsoleColor)color;
	Console::SetCursorPosition(x, y + 0); 
	cout << "       _.---._       ";
	Console::SetCursorPosition(x, y + 1); 
	cout << "     .'       '.     ";
	Console::SetCursorPosition(x, y + 2); 
	cout << " _.-~===========~-._ ";
	Console::SetCursorPosition(x, y + 3); 
	cout << "(___________________)";
	Console::SetCursorPosition(x, y + 4);
	cout << "      \\_______/      ";
}