#pragma once
#include <iostream>
using namespace std;

class Jugador {
private:
	short posicionTiro;
public:
	int nroGoles;

	Jugador() {
		posicionTiro = 0;
		nroGoles = 0;
	}

	void patear() {
		do {
			cout << "Introduzca su direccion de tiro (1-9)" << endl;
			cin >> posicionTiro;
		} while (posicionTiro > 9 || posicionTiro <= 0);
	}

	short getPosicionTiro() {
		return posicionTiro;
	};
};

