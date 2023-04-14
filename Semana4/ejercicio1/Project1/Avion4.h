#pragma once
#include"Base.h"
class Avion4 : public Base
{
public:
	Avion4();
	~Avion4();
	void dibujar();
private:

};

Avion4::Avion4() :Base(13, 3)
{

}

Avion4::~Avion4() {}

void Avion4::dibujar()
{
	Console::SetCursorPosition(x, y);
	cout << "    __!__";
	Console::SetCursorPosition(x, y + 1);
	cout << "_____(_)_____";
	Console::SetCursorPosition(x, y + 2);
	cout << "    ! ! !";
}
