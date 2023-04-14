#pragma once
#include<iostream>
using namespace std;
using namespace System;

class Base
{
public:
	Base(int _ancho,int _alto);
	~Base();
	void borrar();
	void mover();
protected:
	int x, y;
	int dx, dy;
	int ancho, alto;
};

Base::Base(int _ancho, int _alto)
{
	ancho = _ancho;
	alto = _alto;
	dx = dy = 1;
	x = rand()%(115-ancho+1);
	y = rand() % (29 - alto + 1);
}

Base::~Base()
{
}

void Base::borrar()
{
	for(int i=0;i<ancho;i++)
		for (int j = 0; j < alto; j++)
		{
			Console::SetCursorPosition(x+i, y+j);
			cout << " ";
		}
}
void Base::mover()
{
	if (x + dx < 0 || x + dx + ancho>115)dx *= -1;
	if (y + dy < 0 || y + dy + alto>29)dy *= -1;

	x += dx;
	y += dy;
}
