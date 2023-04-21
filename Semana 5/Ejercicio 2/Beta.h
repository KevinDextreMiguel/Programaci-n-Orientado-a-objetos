#pragma once
#include"Ovni.h"
class Beta:public Ovni
{
public:
	Beta();
	~Beta();
	void dibujar();
};
Beta::Beta():Ovni(50,12,3){}
Beta::~Beta(){}
void Beta::dibujar()
{
	Console::ForegroundColor = (ConsoleColor)color;
	Console::SetCursorPosition(x, y );
	cout << "   .---.   ";
	Console::SetCursorPosition(x, y + 1);
	cout << " _/__~0_\\_ ";
	Console::SetCursorPosition(x, y + 2); 
	cout << "(_________)";
}