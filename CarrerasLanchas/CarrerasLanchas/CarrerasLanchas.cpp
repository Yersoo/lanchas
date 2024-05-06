#pragma once
#include "lancha.h"
#include <iostream>
using namespace std;
int main() {
	srand(time(NULL));
	string nombreCorredor;
	cout << "Inserta el nombre del corredor 1\n";
	cin >> nombreCorredor;
	Lancha lancha1 = Lancha(0, nombreCorredor, 0, 1);



	string nombreCorredor2;
	cout << "Inserta el nombre del corredor 2\n";
	cin >> nombreCorredor2;
	Lancha lancha2 = Lancha(0, nombreCorredor2, 0, 1);

	int dado;

	for (int i = 0; i < 5; ++i) {
		srand(time(0));
		dado = lancha1.tiradaDado();

		cout << "El numero que le ha salido a " << lancha1.getNombre() << " es: " << dado << "\n";
		lancha1.calculoVelocidad(dado);
		lancha1.calculoDistancia(lancha1.getDistanciaRecorrida(), lancha1.getVelocidad());
		cout << "La velocidad actual es de :" << lancha1.getVelocidad() << "\n";

		cout << "El corredor/a " << lancha1.getNombre() << " " << lancha1.getDistanciaRecorrida() << "\n";

		if (lancha1.getNitro() > 0) {
			char opcion;
			cout << "Quieres utilizar el nitro?\n" << "Si o No ";
			cin >> opcion;

			if (opcion == 'Si')
			{
				cout << "Has escogido usar el nitro \n";
				lancha1.calcularNitro();
			}
			else if (opcion == 'No')
			{
			}
		}







		dado = lancha2.tiradaDado();

		cout << "El numero que le ha salido a " << lancha2.getNombre() << " es: " << dado << "\n";

		lancha2.calculoVelocidad(dado);
		lancha2.calculoDistancia(lancha2.getDistanciaRecorrida(), lancha2.getVelocidad());

		cout << "La velocidad actual es de :" << lancha2.getVelocidad() << "\n";

		cout << "El corredor/a " << lancha2.getNombre() << " " << lancha2.getDistanciaRecorrida() << "\n";


		if (lancha2.getNitro() > 0) {
			char opcion;
			cout << "Quieres utilizar el nitro?\n" << "Si o No ";
			cin >> opcion;

			if (opcion == 'Si')
			{
				cout << "Has escogido usar el nitro \n";
				lancha2.calcularNitro();
			}
			else if (opcion == 'No')
			{
			}
		}

		system("pause");

	}


	if (lancha1.getDistanciaRecorrida() > lancha2.getDistanciaRecorrida()) {
		cout << "Ganaste " << lancha1.getNombre() << "!" << endl;
	}
	else if (lancha1.getDistanciaRecorrida() == lancha2.getDistanciaRecorrida()) {
		cout << "Empate" << endl;
	}
	else if (lancha1.getDistanciaRecorrida() < lancha2.getDistanciaRecorrida()) {
		cout << "Ganó " << lancha2.getNombre() << "!" << endl;
	}



	return 0;

}