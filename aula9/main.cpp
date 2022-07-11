/* MÉTODO DE NEWTON 
RECEBE ERRO E CALCULA A RAIZ */

#include <iostream>

using namespace std;

/* INTERVALO DO ERRO */
#define MAXE 1
#define MINE 0

float calcula_raiz(float a, float x);
void digita_a(float &a);
void digita_x(float &x);
void digita_erro(float &erro);

int main(void){
    float x, y, a, erro;
    int i = 0;
    bool parada = (-y*(i+1) - y*i) <= erro; //CONDIÇÃO DE PARADA

    /* ALGORITMO PRINCIPAL */
    digita_erro(erro);
    digita_a(a);
    x = a/2;

    while(parada){
        y = calcula_raiz(a, x);
        cout << "\nY: " << y << "\n" << endl;
        i++;
    }

    return 0;
}

/* OUT */
float calcula_raiz(float a, float x){
    return ((x + (a/x))/2);
}

/* IN */
void digita_a(float &a){
    cout << "\nDigite o valor de A: ";
    cin >> a;
}

void digita_erro(float &erro){
    cout << "\nDigite o valor de ERRO (0-1): ";
    cin >> erro;
}
/**/