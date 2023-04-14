#pragma once
#include<iostream>
using namespace std;
using namespace System;
class Equilatero
{
public:
	Equilatero(int l);
	~Equilatero();
	void dibujar();
private:
	int x, y;
	int dx, dy;
	int lado;
	int cont;
};
Equilatero::Equilatero(int l)
{
	cont = 0;
	x = 50;
	y = 15;
	dx = 1;
	dy = -1;
	lado = l-1;
}
Equilatero::~Equilatero(){}
void Equilatero::dibujar()
{
	while (true)
	{
			Console::SetCursorPosition(x, y);
			cout << "*";
		if (cont >= lado)
			dy = 1;
		if (cont >= lado*2)
		{
			dx = -2;
			dy = 0;
		}
		if (cont >= lado*3)break;

		_sleep(100);
		cont++;

		x += dx;		
		y += dy;
	}
}
