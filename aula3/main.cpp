/* RECEBE O RAIO DE UM CÍRCULO E CALCULA SUA ÁREA */
#include <iostream>
#include <cstdlib>

using namespace std;

#define PI 3.14

void digita_raio(float &raio);
float calcula_area(float raio);

int main(void){
    float raio, area;

    /* ALGORITMO PRINCIPAL */
    digita_raio(raio);
    cout << "\nÁrea: " << calcula_area(raio) << endl;

    return 0;
}

/* FUNÇÕES */
void digita_raio(float &raio){
    cout << "\nDigite o raio do círculo: ";
    cin >> raio;
}

/* ERRO -> RAIO NEGATIVO */
float calcula_area(float raio){
    if(raio > 0){
        return PI * raio * raio;
    }
    else{
        cout << "\nErro: o raio deve ser maior que zero.\n" << endl;
        exit(0);
    }
}