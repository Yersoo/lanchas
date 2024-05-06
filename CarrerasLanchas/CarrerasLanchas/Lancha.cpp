#pragma once
#include "lancha.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
Lancha::Lancha(int pVelocidad, string pName, int pdistanciaRecorrida, int pNitro) {
	velocidad = pVelocidad;
	nombre = pName;
	distanciaRecorrida = pdistanciaRecorrida;
	nitro = pNitro;
}

Lancha::Lancha() {
}

int Lancha::getVelocidad() {
	return velocidad;
}
string Lancha::getNombre() {
	return nombre;
}
int Lancha::getDistanciaRecorrida() {
	return distanciaRecorrida;
}
int Lancha::getNitro() {
	return nitro;
}
void Lancha::setVelocidad(int pvelocidad) {
	velocidad = pvelocidad;
}
void Lancha::setNombre(string pname) {
	nombre = pname;
}


void Lancha::printResultado() {
	cout << "Nombre enemigo " << getNombre() << endl;
}


void Lancha::calculoVelocidad(int pDado) {
	velocidad = velocidad + pDado;
}

void Lancha::calculoDistancia(int pdistanciaRecorrida, int velocidad) {

	distanciaRecorrida = pdistanciaRecorrida + velocidad * 100;
}



void Lancha::setNitro(int pNitro) {
	nitro = pNitro;



}

void Lancha::calcularNitro() {
	srand(time(NULL));
	int Nitro = rand() % 2 + 1;

	if (Nitro == 1)
	{
		cout << "Nitro utilizado correctamente tu velocidad se multiplica 2\n";
		velocidad = velocidad * 2;

	}
	else

	{
		cout << "Has fallado el nitro tu velocidad se divide 2\n";
		velocidad = velocidad / 2;
	}

	nitro = nitro - 1;

}

int Lancha::tiradaDado() {


	return rand() % 6 + 1;
}



