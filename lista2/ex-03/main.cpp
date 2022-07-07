/* RECEBE X E Y E RETORNA O QUADRANTE */

#include <iostream>

using namespace std;

#define EIXOX 0
#define EIXOY 0

void digita_numeros(float &x, float &y);
void verifica_quadrante(int x, int y);

int main(void){
    float x, y;

    /* ALGORITMO PRINCIPAL */
    digita_numeros(x, y);
    verifica_quadrante(x, y);

    return 0;
}

void digita_numeros(float &x, float &y){
    cout << "\nDigite o valor de x: ";
    cin >> x;

    cout << "\nDigite o valor de y: ";
    cin >> y;
}

void verifica_quadrante(int x, int y){
    if(x == EIXOX && y == EIXOY){
        cout << "\nOrigem.\n" << endl;
    }
    else if(x == EIXOX || y == EIXOY){
        if(x == EIXOX){
            cout << "\nEixo X.\n" << endl;
        }
        else{
            cout << "\nEixo Y.\n" << endl;
        }
    }
    else if(x > EIXOX && y > EIXOY){
        cout << "\n1º quadrante.\n" << endl;
    }
    else if(x > EIXOX && y < EIXOY){
        cout << "\n4º quadrante.\n" << endl;
    }
    else if(x < EIXOX && y > EIXOY){
        cout << "\n2º quadrante.\n" << endl;
    }
    else if(x < EIXOX && y < EIXOY){
        cout << "\n3º quadrante.\n" << endl;
    }
}