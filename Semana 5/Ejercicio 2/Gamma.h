#pragma once
#include"Ovni.h"
class Gamma:public Ovni
{
public:
	Gamma();
	~Gamma();
	void dibujar();
};
Gamma::Gamma():Ovni(90,21,10){}
Gamma::~Gamma(){}
void Gamma::dibujar()
{
	Console::ForegroundColor = (ConsoleColor)color;
	Console::SetCursorPosition(x, y);
	cout << "         .         ";
	Console::SetCursorPosition(x, y + 1);
	cout << "         |         ";
	Console::SetCursorPosition(x, y + 2); 
	cout << "     .-\" ^ \"-.     ";
	Console::SetCursorPosition(x, y + 3);
	cout << "    /_......._\\    ";
	Console::SetCursorPosition(x, y + 4); 
	cout << " .-\"`         `\"-. ";
	Console::SetCursorPosition(x, y + 5); 
	cout << "(  ooo  ooo  ooo  )";
	Console::SetCursorPosition(x, y + 6); 
	cout << " '-.,_________,.-' ";
	Console::SetCursorPosition(x, y + 7); 
	cout << "     /       \\     ";
	Console::SetCursorPosition(x, y + 8); 
	cout << "   _/         \\_   ";
	Console::SetCursorPosition(x, y + 9); 
	cout << "  `\"`         `\"`  ";
}