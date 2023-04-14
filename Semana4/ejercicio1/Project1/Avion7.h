#pragma once
#include"Base.h"
class Avion7: public Base
{
public:
	Avion7();
	~Avion7();
	void dibujar();
private:

};

Avion7::Avion7() :Base(7,2)
{

}

Avion7::~Avion7() {}

void Avion7::dibujar()
{
	Console::SetCursorPosition(x, y);
	cout << "   |";
	Console::SetCursorPosition(x, y + 1);
	cout << "--=O=--";
}
