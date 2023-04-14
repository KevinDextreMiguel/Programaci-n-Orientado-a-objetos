#pragma once
#include<iostream>
using namespace std;
using namespace System;
class Rectagulo
{
public:
	Rectagulo(int _l1, int _l2);
	~Rectagulo();
	void dibujar();
private:
	int cont;
	int x, y;
	int dx, dy;
	int l1, l2;
	float hipotenusa;
};
Rectagulo::Rectagulo(int _l1, int _l2)
{
	cont = 0;
	x = 50;
	y = 15;
	dx = 2; dy = 1;
	l1 = _l1-1;
	l2 = _l2-1;
	hipotenusa = sqrt((l1*l1) + (l2*l2));
}
Rectagulo::~Rectagulo(){}
void Rectagulo::dibujar()
{
	while (true)
	{
		Console::SetCursorPosition(x, y);
		cout << "*";
		if (cont >= hipotenusa + l2 + l1)break;
		else if (cont >= hipotenusa + l2)
		{
			dx = 0;
			dy = -2;
		}
		else if (cont >= hipotenusa)
		{
			dx = -3;
			dy = 0;
		}
		_sleep(100);
		cont++;

		x += dx;
		y += dy;
	}
}