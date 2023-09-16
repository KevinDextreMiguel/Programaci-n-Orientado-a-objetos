#pragma once
#include"Base.h"
class Digger:public Base
{
public:
	Digger();
	~Digger();
	void dibujar();
	void set_vida(int valor);
	int get_vida();
private:
	int vida;
};
Digger::Digger():Base(7,4)
{
	x = y = 0;
	dx = dy = 0;
	color = 5;
	vida = 3;
}
Digger::~Digger(){}
void Digger::dibujar()
{
	Console::ForegroundColor = (ConsoleColor)color;
	Console::SetCursorPosition(x, y);  cout << "__";   
	Console::SetCursorPosition(x, y+1);cout << "_| o\\";
	Console::SetCursorPosition(x, y+2);cout << "|    <";
	Console::SetCursorPosition(x, y+3);cout << "-O-O";
}
void Digger::set_vida(int valor) { vida += valor; }
int Digger::get_vida() { return vida; }