#pragma once
#include<iostream>
#include<time.h>
#include<vector>
#define ANCHO 120
#define ALTO 30
using namespace std;
using namespace System;
class Ovni
{
public:
	Ovni(int _x,int _ancho,int _alto);
	~Ovni();
	void borrar();
	void mover();
	virtual void dibujar() {}

	int get_y();
	int get_alto();
protected:
	int x, y;
	int color;
	int ancho, alto;
};

Ovni::Ovni(int _x, int _ancho, int _alto)
{
	x = _x;
	ancho = _ancho;
	alto = _alto;
	y = 0;
	color = rand() % 15 + 1;
}
Ovni::~Ovni(){}
void Ovni::borrar()
{
	for (int i = 0; i < ancho; i++)
		for (int j = 0; j < alto; j++)
		{
			Console::SetCursorPosition(x + i, j + y);
			cout << " ";
		}
}
void Ovni::mover() { 		y++; }
int Ovni::get_y() { return y; }
int Ovni::get_alto() { return alto; }