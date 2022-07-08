
#include <iostream>

using namespace std;

class persona
{
private:
	int codigo;
	string nombre;

public:
	persona(string, int);
};

persona::persona(string _nombre, int _codigo)
{
	nombre = _nombre;
	codigo = _codigo;
}

class cuenta : private persona
{
private:
	int nomina;

public:
	cuenta(string, int, int);
};

cuenta::cuenta(string _nombre, int _codigo, int _nomina) : persona(_nombre, _codigo)
{
	nomina = _nomina;
}

class administracion : private persona
{
private:
	int experiencia;

public:
	administracion(string, int, int);
};

administracion::administracion(string _nombre, int _codigo, int _experiencia) : persona(_nombre, _codigo)
{
	experiencia = _experiencia;
}

class maestro : private cuenta, private administracion
{
private:
public:
	maestro(string, int, int, int);
};


maestro::maestro(string _nombre, int _codigo, int _experiencia, int _nomina) : cuenta(_nombre, _codigo, _nomina), administracion(_nombre, _codigo, _experiencia)
{

}



int main(int argc, char *argv[])
{
}
