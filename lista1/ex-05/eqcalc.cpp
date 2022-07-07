/* RECEBE DOIS INT B,C E CALCULA AS N1,N2 */
#include <iostream>
#include <cmath>

using namespace std;

void insere_numeros(int &b, int &c);
void printa_resultado(int b, int c);
int calcula_n1(int b, int c);
int calcula_n2(int b, int c);

int main(void){
    int b, c;

    /* ALGORITMO PRINCIPAL */
    insere_numeros(b, c);
    if((b*b) > (4*c)){
        printa_resultado(b, c);
    }

    return 0;
}

/* RECEBE B,C */
void insere_numeros(int &b, int &c){
    cout << "\nDigite b: ";
    cin >> b;

    cout << "\nDigite c: ";
    cin >> c;
}

/* EXITE N1,N2 */
void printa_resultado(int b, int c){
    cout << "n1: " << calcula_n1(b, c) << endl;
    cout << "n2: " << calcula_n2(b, c) << endl;
}

/* FUNÇÕES -> N1,N2 */
int calcula_n1(int b, int c){
    return ((b - pow(((b*b) - (4*c)), 0.5))/2);
}

int calcula_n2(int b, int c){
    return ((b + pow(((b*b) - (4*c)), 0.5))/2);
}