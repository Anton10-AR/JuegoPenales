#pragma once
#include <iostream>
#include "Jugador.h"
using namespace std;

class Arquero {
private:
	short posicionTapada;
public:
	short posicionInicial;
	int nroAtajadas;

	Arquero() {
		nroAtajadas = 0;
		posicionTapada = 8;
	}

	void atajar() {
		posicionTapada = 1 + rand() % 9;
		cout << "Arquero se arrojo a " << posicionTapada << endl;
	}

	short getPosicionTapada() {
		return posicionTapada;
	}

	bool logroAtajar(Jugador jj) {
		return jj.getPosicionTiro() == posicionTapada ? true : false;
	}
};