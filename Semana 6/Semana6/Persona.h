#pragma once
#include<iostream>
using namespace std;
using namespace System;
class Persona
{
public:
	Persona();
	~Persona();
	void mover();
	void borrar();
	void dibujar();
	void direccion(int _dx, int _dy);
	//get
	int get_x();
	int get_y();
	int get_alto();
	int get_ancho();
	void get_x_y();
private:
	int x, y;
	int ancho, alto;
	int dx,dy;
	int color;
};

Persona::Persona()
{
	ancho =1 ;
	alto = 1;
	x = 58;
	y = 28;
	dx = dy = 0;
	color = 12;
}
Persona::~Persona(){}
void Persona::mover()
{
	if (x + dx<0 || x + dx + ancho>120)dx *= -1;
	if (y + dy<0 || y + dy + alto>30)dy *= -1;

	x += dx;
	y += dy;
}
void Persona::borrar()
{
	Console::SetCursorPosition(x, y );
	cout << " ";
}
void Persona::dibujar()
{
	Console::ForegroundColor = (ConsoleColor)color;
	Console::SetCursorPosition(x , y );
	cout <<char(254);
}
void Persona::direccion(int _dx, int _dy)
{
	dx = _dx;
	dy = _dy;
}
//get
int Persona::get_x() { return x; }
int Persona::get_y() { return y; }
int Persona::get_alto() { return alto; }
int Persona::get_ancho() { return ancho; }
void Persona::get_x_y()
{
	x = 58;
	y = 28;
}