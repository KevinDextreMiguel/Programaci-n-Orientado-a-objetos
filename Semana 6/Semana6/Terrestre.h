#pragma once
#include<iostream>
using namespace std;
using namespace System;
#define ANCHO 120
#define ALTO 30
class Terrestre
{
public:
	Terrestre(int _ancho,int _alto,int _dx);
	~Terrestre();
	void borrar();
	virtual void mover() {};
	virtual void dibujar(){}
//get
	int get_x();
	int get_y();
	int get_alto();
	int get_ancho();

	bool colision(int xe, int ye, int anchoe, int altoe);
protected:
	int x, y;
	int ancho, alto;
	int dx;
	int color;
};
Terrestre::Terrestre(int _ancho, int _alto, int _dx)
{
	ancho = _ancho;
	alto = _alto;
	x = rand() % (ANCHO - ancho);
	y = rand() % (ALTO - alto);
	dx = _dx;
	color = rand() % 15 + 1;
}
Terrestre::~Terrestre(){}

void Terrestre::borrar()
{
	for (int i = 0; i < ancho; i++)
		for (int j = 0; j < alto; j++)
		{
			Console::SetCursorPosition(x + i, y + j);
			cout << " ";
		}
}
int Terrestre::get_x() { return x; }
int Terrestre::get_y() { return y; }
int Terrestre::get_alto() { return alto; }
int Terrestre::get_ancho() { return ancho; }

bool Terrestre::colision(int xe, int ye, int anchoe, int altoe) {
	return x + ancho > xe && xe + anchoe > x && y + alto > ye && ye + altoe > y;
}