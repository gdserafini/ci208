/* RECEBE UM NÚMERO INTEIRO E CALCULA LOG(PI * N) */
#include <iostream>
#include <cmath>

using namespace std;

void relacional(float resultado);
void digita_numero(int &numero);

int main(void){
    const float pi = 3.1416;
    int numero;
    float resultado;

    /* ALG. PRINCIPAL */
    digita_numero(numero);
    resultado = log(pi * numero);
    relacional(resultado);

    return 0;
}

/* RECEBE NÚMERO */
void digita_numero(int &numero){
    cout << "\nDigite um número inteiro: ";
    cin >> numero;
}

/* CONDICIONAL - RELACIONAL */
void relacional(float resultado){
    if(resultado >= 20 && resultado != 50.50){
        cout << "\nResultado >= 20 e != 50.50: " << resultado << endl;
    }
    else if(resultado >= 20 && resultado == 50.50){
        cout << "\nResultado >= 20: 50.50" << endl;
    }
    if(resultado < 20){
        cout << "\nResultado < 20: " << resultado << endl;
    }
}