#pragma once
#include <iostream>
using namespace std;

class Arco {
public:
	void graficarArcoInicial() {
		cout << "  -----------------------" << endl;
		cout << " |   7   |   8   |   9   |" << endl;
		cout << " |-------|-------|-------|" << endl;
		cout << " |   4   |   5   |   6   |" << endl;
		cout << " |-------|-------|-------|" << endl;
		cout << " |   1   |   2   |   3   |" << endl;
		cout << "---------------------------" << endl;
	}

	void dibujarTiro(int jj, int aa) {
		char dibujar[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} }; //matriz de caracteres espacio ' '
		int filaJugador = (9 - jj) / 3;
		int colJugador = (jj - 1) % 3;
		int filaArquero = (9 - aa) / 3;
		int colArquero = (aa - 1) % 3;
		dibujar[filaJugador][colJugador] = 'o'; //se marca el tiro 
		dibujar[filaArquero][colArquero] = 'x'; //se marca la atajada
		cout << "  -----------------------" << endl;
		for (int i = 0; i < 3; i++) {
			cout << " |   " << dibujar[i][0] << "   |   " << dibujar[i][1] << "   |   " << dibujar[i][2] << "   |" << endl;
			if (i < 2) {
				cout << " |-------|-------|-------|" << endl;
			}
		}
		cout << "---------------------------" << endl;
	}

};