/* RECEBE 3 NÚMEROS E RETORNA O MAIOR */

#include <iostream>

using namespace std;

#define TAM 3

void digita_numeros(int *numeros);
int retorna_maior(int *numeros);

int main(void){
    int numeros[TAM];

    /* ALGORITMO */
    digita_numeros(numeros);
    cout << "\nMaior: " << retorna_maior(numeros) << "\n" << endl;

    return 0;
}

/* IN */
void digita_numeros(int *numeros){
    for(int i = 0; i < TAM; i++){
        cout << "\nDigite o " << i+1 << "º número: ";
        cin >> numeros[i];
    }
}

/* OUT */
int retorna_maior(int *numeros){
    int maior = 0;

    for(int i = 0; i < TAM; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
        }
    }

    return maior;    
}