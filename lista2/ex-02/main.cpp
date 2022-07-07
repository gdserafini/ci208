/* RECEBE 3 NÚMEROS E RETORNA A SOMA DOS 2 MAIORES */

#include <iostream>

using namespace std;

#define TAM 3
#define MAI 2

void digita_numeros(int *numeros);
void troca(int &num1, int &num2);
int soma_maiores(int *numeros);
void ordena_numeros(int *numeros);


int main(void){
    int numeros[TAM], soma;

    /* ALGORITMO */
    digita_numeros(numeros);
    ordena_numeros(numeros);
    soma = soma_maiores(numeros);
    cout << "\nSoma 2 maiores: " << soma << "\n" << endl;

    return 0;
}

/* IN */
void digita_numeros(int *numeros){
    for(int i = 0; i < TAM; i++){
        cout << "\nDigite o " << i+1 << "º número: ";
        cin >> numeros[i];
    }
}

/* ORDENAÇÃO */
void ordena_numeros(int *numeros){
    for(int i = 0; i < TAM-1; i++){
        for(int j = i+1; j < TAM; j ++){
            if(numeros[i] > numeros[j]){
                troca(numeros[i], numeros[j]);
            }
        }
    }   
}

/* TROCA 2 NÚMEROS DE POSIÇÃO NA ARRAY */
void troca(int &num1, int &num2){
    int aux;

    aux = num1;
    num1 = num2;
    num2 = aux;
}

int soma_maiores(int *numeros){
    return (numeros[MAI-1] + numeros[MAI]);
}