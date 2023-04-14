#pragma once
#include"Base.h"
class Avion8: public Base
{
public:
	Avion8();
	~Avion8();
	void dibujar();
private:

};

Avion8::Avion8() :Base(17, 2)
{

}

Avion8::~Avion8() {}

void Avion8::dibujar()
{
	Console::SetCursorPosition(x, y);
	cout << "     \\ . /";
	Console::SetCursorPosition(x, y + 1);
	cout << ".______(*)______.";
}
