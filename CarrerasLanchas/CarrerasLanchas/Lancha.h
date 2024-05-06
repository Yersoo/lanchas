#pragma once

#include <iostream>
using namespace std;
class Lancha
{
private:
	int velocidad;
	string nombre;
	int distanciaRecorrida;
	int nitro;
public:
	Lancha(int pVelocidad, string pNombre, int pDistanciaRecorrida, int pNitro);
	Lancha();

	int getVelocidad();
	std::string getNombre();
	int getDistanciaRecorrida();


	void setVelocidad(int pvelocidad);
	void setNombre(std::string pname);
	void setDistanciaRecorrida(int pdistRecorrida);
	void setNitro(int pvelocidad);
	int getNitro();

	void printResultado();
	int tiradaDado();
	void calculoDistancia(int pdistanciaRecorrida, int velocidad);
	void calculoVelocidad(int pDado);
	void calcularNitro();



};