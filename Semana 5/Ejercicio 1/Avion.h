#pragma once
#include<iostream>
#include<time.h>
#include<vector>
#define ANCHO 120
#define ALTO 30
using namespace std;
using namespace System;
class Avion
{
public:
	Avion(int _ancho,int _alto);
	~Avion();
	void borrar();
	void mover();
	virtual void dibujar(){}
protected:
	int x, y;
	int dx, dy;
	int color;
	int ancho, alto;
};

Avion::Avion(int _ancho, int _alto)
{
	ancho = _ancho;
	alto = _alto;
	x = rand()%(ANCHO - ancho);
	y = rand() % (ALTO - alto);
	dx = rand()%5 + 1;
	dy = rand() % 5 + 1;
	color = rand() % 15 + 1;
}
Avion::~Avion(){}
void Avion::borrar()
{
	for(int i=0;i<ancho;i++)
		for (int j = 0; j < alto; j++)
		{
			Console::SetCursorPosition(x + i, j + y);
			cout << " ";
		}
}
void Avion::mover()
{
	if (x + dx<0 || x + dx + ancho>ANCHO)dx *= -1;
	if (y + dy<0 || y + dy + alto>ALTO)dy *= -1;

	x += dx;
	y += dy;
}
