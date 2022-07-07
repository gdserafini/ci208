/* RECEBE OS 3 LADOS DE UM TRIANGULO 
E SE POSIVEL CALCULA SEU PERIMETRO E CLASSIFICA */

#include <iostream>

using namespace std;

#define LAD 3
#define TAM 20

bool forma_triangulo(int *lados);
int calcula_perimetro(int *lados);
void classifica(int *lados);
void digita_lados(int *lados);

int main(void){
    int lados[LAD];

    /* ALGORITMO PRINCIPAL */
    digita_lados(lados);

    if(forma_triangulo(lados)){
        cout << "\nPerímetro: " << calcula_perimetro(lados) << endl;
        classifica(lados);
    }
    else{
        cout << "\nNão é possível formar um triângulo.\n" << endl;
    }

    return 0;
}

/* VERIFICA SE A < B + C ... */
bool forma_triangulo(int *lados){
    if(lados[0] <= (lados[1] + lados[2])
    && lados[1] <= (lados[0] + lados[2])
    && lados[2] <= (lados[0] + lados[1])){
        return true;
    }
    else{
        return false;
    }
}

int calcula_perimetro(int *lados){
    return (lados[0] + lados[1] + lados[0]);
}

/* LADOS -> CLASSIFICA */
void classifica(int *lados){
    if(lados[0] == lados[1] && lados[0] == lados[2]){
        cout << "\nEquilátero\n" << endl;
    }
    else if(lados[0] == lados[1] && lados[0] != lados[2]){
        cout << "\nIsóceles\n" << endl;
    }
    else if(lados[0] != lados[1] && lados[0] != lados[2] 
    && lados[1] != lados[2]){
        cout << "\nEscaleno\n" << endl;
    }
}

void digita_lados(int *lados){
    for(int i = 0; i < LAD; i++){
        cout << "\nDigite o " << i+1 << "º lado: ";
        cin >> lados[i];
    }
}