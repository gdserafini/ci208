/* RECEBE A IDADE EM DIAS E EXIBE EM ANOS, MESES E DIAS */
#include <iostream>
#include <cstdlib>

using namespace std;

#define ANO 365
#define MES 30

void digita_idade(int &dias);
void printa_idade(int dias);

int main(void){
    int dias;

    /* ALG. */
    digita_idade(dias);
    if(dias >= 0){
        printa_idade(dias);
    }

    return 0;
}

void digita_idade(int &dias){
    cout << "\nDigite sua idade em dias: ";
    cin >> dias;
}

/* CONVERTE E EXIBE */
void printa_idade(int dias){
    float anos = (float)dias/ANO;
    float meses = (float)dias/MES;

    cout << "\nIdade em anos: " << anos << endl;
    cout << "\nIdade em meses: " << meses << endl;
    cout << "\n(" << dias << " dias)" << endl;
}