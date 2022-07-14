//recebe 10 pares de números e exibe a média dos pares

#include <iostream>
#include <ctime>
#include <cstdlib>

#define NPAR 10 //número de pares
#define NMAX 100 //max p/ gerar números aleatórios

using namespace std;

void gera_numeros(float &n1, float &n2){ //2 números reais aleatórios
    n1 = (float)(rand() % NMAX)/10;
    n2 = (float)(rand() % NMAX)/10;
}

float calcula_media(float n1, float n2){
    if(n1 != '\0' && n2 != '\0'){ //calcula a média de n1 e n2 são definidos
        return (float)((n1 + n2)/2);
    }
    else{
        cout << "\nErro - média.\n" << endl;
        exit(1);
    }
}

void exibe_media(float n1, float n2){ //função out
    float media = calcula_media(n1, n2);

    cout << "\nNúmero 1: " << n1 << endl;
    cout << "Número 2: " << n2 << endl;
    cout << "Média: " << media << endl;
}

int main(void){
    float numero1, numero2;

    //algortimo principal
    srand(time(0)); //seed

    cout << endl;

    for(int i = 0; i < NPAR; i++){
        gera_numeros(numero1, numero2);
        exibe_media(numero1, numero2);
    }

    cout << endl;

    return 0;
}