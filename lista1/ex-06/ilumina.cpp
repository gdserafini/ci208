/* RECEBA A MEDIDA DAS PAREDES DE UM CÔMODO, CALCULA SUA ÁREA E A POTÊNCIA EM WATTS PARA ILUMINAR */
#include <iostream>

using namespace std;

#define WATT 18

void digita_lados(float &lado1, float &lado2);
void printa_m2_watts(float lado1, float lado2);
float calcula_area(float lado1, float lado2);
float calcula_potencia(float lado1, float lado2);

int main(void){
    float lado1, lado2;

    /* ALGORITMO PRINCIPAL */
    digita_lados(lado1, lado2);
    if(lado1 > 0 && lado2 > 0){
        printa_m2_watts(lado1, lado2);
    }

    return 0;
}

/* RECEBE MEDIDAS */
void digita_lados(float &lado1, float &lado2){
    cout << "\nDigite o lado 1: ";
    cin >> lado1;

    cout << "\nDigite o lado 2: ";
    cin >> lado2;
}

/* EXIBE ÁREA E POTÊNCIA */
void printa_m2_watts(float lado1, float lado2){
    cout << "\nÁrea do cômodo: " << calcula_area(lado1, lado2) << endl;
    cout << "\nPotência necessária: " << calcula_potencia(lado1, lado2) << endl;
}

/* FUNÇÕES -> CALCULA ÁREA E POTÊNCIA */
float calcula_area(float lado1, float lado2){
    return (lado1 * lado2);
}

float calcula_potencia(float lado1, float lado2){
    return (WATT * (lado1 * lado2));
}