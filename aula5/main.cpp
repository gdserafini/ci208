/* LEGIBILIDADE -> RECEBE OS LADOS DE UM RETÂNGULO E CALCULA SUA ÁREA */
#include <iostream>
#include <cstdlib>

using namespace std;

void digita_lados(float &lado1, float &lado2);
float calcula_area(float lado1, float lado2);

int main(void){
    float lado1, lado2, area;

    /* ALG. PRINCIPAL */
    digita_lados(lado1, lado2);
    area = calcula_area(lado1, lado2);
    cout << "\nÁrea: " << area << endl;

    return 0;
}

/* INSERE OS LADOS DO RETÂNGULO */
void digita_lados(float &lado1, float &lado2){
    cout << "\nDigite um lado do retângulo: ";
    cin >> lado1;

    cout << "\nDigite o outro lado: ";
    cin >> lado2;
}

/* SE LADO1 E LADO2 > 0, CALCULA A ÁREA */
float calcula_area(float lado1, float lado2){
    if(lado1 > 0 && lado2 > 0){
        return lado1 * lado2;
    }
    else{
        cout << "\nErro: os lados devem ser maior que zero.\n" << endl;
        exit(0);
    }
}