#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Jugador.h"
#include "Arquero.h"
#include "Arco.h"
using namespace std;

int main()
{
	srand(time(NULL));
	Jugador JugAzul;
	Jugador JugRojo;
	Arquero ArqAzul;
	Arquero ArqRojo;
	Arco inicio;
	inicio.graficarArcoInicial();

	short tiroPenal = 0;
	while (tiroPenal < 10) { //o usar un bucle for
		if (tiroPenal % 2 == 0) {
			cout << "\nJugador AZUL" << endl;
			JugAzul.patear();
			ArqRojo.atajar();
			short tiroJugador = JugAzul.getPosicionTiro();
			short atajoArquero = ArqRojo.getPosicionTapada();
			Arco dibujarTiroActual;
			dibujarTiroActual.dibujarTiro(tiroJugador, atajoArquero);
			if (ArqRojo.logroAtajar(JugAzul)) {
				cout << "No Fue Gol" << endl;
				cout << "Goles Marcados: " << JugAzul.nroGoles << endl;
			}
			else {
				cout << "GOL!" << endl;
				JugAzul.nroGoles += 1;
				cout << "Goles Marcados: " << JugAzul.nroGoles << endl;
			}
		}
		else {
			cout << "\nJugador ROJO" << endl;
			JugRojo.patear();
			ArqAzul.atajar();
			short tiroJugador = JugRojo.getPosicionTiro();
			short atajoArquero = ArqAzul.getPosicionTapada();
			Arco dibujarTiroActual;
			dibujarTiroActual.dibujarTiro(tiroJugador, atajoArquero);
			if (ArqAzul.logroAtajar(JugRojo)) {
				cout << "No Fue Gol" << endl;
				cout << "Goles Marcados: " << JugRojo.nroGoles << endl;
			}
			else {
				cout << "GOL!" << endl;
				JugRojo.nroGoles += 1;
				cout << "Goles Marcados: " << JugRojo.nroGoles << endl;
			}
		}
		tiroPenal += 1;
	}

	cout << endl;
	if (JugAzul.nroGoles == JugRojo.nroGoles) {
		cout << "EMPATE!" << endl;
	}
	else {
		if (JugAzul.nroGoles > JugRojo.nroGoles) {
			cout << "Gana el jugador AZUL!" << endl;
		}
		else {
			cout << "Gana el jugador ROJO!" << endl;
		}
	}
	cout << "Nro goles Azul: " << JugAzul.nroGoles << endl;
	cout << "Nro goles Rojo: " << JugRojo.nroGoles << endl;

	return 0;

}