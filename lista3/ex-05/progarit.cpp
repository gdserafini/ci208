//recebe o 1º número de um PA e soma os 20 primeiros (razão 3)

#include <iostream>

#define NNUM 20 //20 primeiros
#define RAZAO 3

using namespace std;

void digitan(int &n){
    cout << "\nDigite o 1° número da PA: ";
    cin >> n;
}

int numero_razao(int n, int chave){
    return (n + (RAZAO * chave));
}

int main(void){
    int n, i = 0, soma = 0;

    //algoritmo
    digitan(n);

    do{
        cout << "\nNúmero " << i+1 << ": " << numero_razao(n, i);
        soma = soma + numero_razao(n, i);
        i++;
    }while(i < NNUM);

    cout << "\n\nSoma: " << soma << "\n" << endl;

    return 0;
}