#include"ArrContrasenia.h"
#include"Persona.h"
#include<conio.h>;
int main()
{
	srand(time(NULL));
	ArrContrasenia obj= ArrContrasenia();
	obj.generar_contrasenias();
	obj.mostrar();


	/*string nombre;
	int edad, DNI;
	char sexo;
	float peso, altura;
	cout << " \n nombre: ";cin>> nombre;
	cout << " edad: ";cin>> edad;
	cout << " sexo: ";cin>> sexo;
	cout << " peso en kg: ";cin>> peso;
	cout << " altura en m: "; cin >> altura;
	//objeto 1
	Persona obj1 = Persona(nombre, edad, sexo, peso, altura);
	obj1.imprimir();
	if (obj1.indice_masa_corporal() == -1)
		cout << "\n" << nombre << " te encuentras por debajo de tu peso";
	else if(obj1.indice_masa_corporal() ==0)
		cout << "\n" << nombre << " te encuentras en tu peso ideal";
	else
		cout << "\n" << nombre << " te encuentras en sobrepeso";

	if(obj1.es_mayor_de_edad())
		cout << "\n" << nombre << " eres mayor de edad";
	else
		cout << "\n" << nombre << " eres menor de edad";



	//objeto 2
	cout << "\n\n";
	cout << " \n nombre: "; cin >> nombre;
	cout << " edad: "; cin >> edad;
	cout << " sexo: "; cin >> sexo;
	Persona obj2 = Persona(nombre, edad, sexo, peso, altura);
	obj2.imprimir();
	if (obj2.indice_masa_corporal() == -1)
		cout << "\n" << nombre << " te encuentras por debajo de tu peso";
	else if (obj2.indice_masa_corporal() == 0)
		cout << "\n" << nombre << " te encuentras en tu peso ideal";
	else
		cout << "\n" << nombre << " te encuentras en sobrepeso";

	if (obj2.es_mayor_de_edad())
		cout << "\n" << nombre << " eres mayor de edad";
	else
		cout << "\n" << nombre << " eres menor de edad";


	//objeto 3
	cout << "\n\n";
	cout << " \n nombre: "; cin >> nombre;
	cout << " edad: "; cin >> edad;
	cout << " sexo: "; cin >> sexo;
	cout << " peso en kg: "; cin >> peso;
	cout << " altura en m: "; cin >> altura;
	Persona obj3 = Persona();
	obj3.modificar_name(nombre);
	obj3.modificar_edad(edad);
	obj3.modificar_sexo(sexo);
	obj3.modificar_peso(peso);
	obj3.modificar_altura(altura);
	obj3.imprimir();
	if (obj3.indice_masa_corporal() == -1)
		cout << "\n" << nombre << " te encuentras por debajo de tu peso";
	else if (obj3.indice_masa_corporal() == 0)
		cout << "\n" << nombre << " te encuentras en tu peso ideal";
	else
		cout << "\n" << nombre << " te encuentras en sobrepeso";

	if (obj3.es_mayor_de_edad())
		cout << "\n" << nombre << " eres mayor de edad";
	else
		cout << "\n" << nombre << " eres menor de edad";
	*/
	getch();
	return 0;
}