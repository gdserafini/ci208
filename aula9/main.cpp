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
bool parada(float y, float i, float erro);
void digita_erro(float &erro);

int main(void){
    float x, y, a, erro;
    int i = 1;

    /* ALGORITMO PRINCIPAL */
    digita_erro(erro);
    digita_a(a);
    x = a/2;

    while(parada(y, i, erro)){
        y = calcula_raiz(a, x);
        cout << "\nY: " << y << "\n" << endl;
        i++;
    }

    return 0;
}

float calcula_raiz(float a, float x){
    return (x + (a/x))/2;
}

void digita_a(float &a){
    cout << "\nDigite o valor de A: ";
    cin >> a;
}

/* CONDIÇÃO -> ERRO */
bool parada(float y, float i, float erro){
    if((-y*(i+1) - y*i) <= erro){
        return true;
    }
    else{
        return false;
    }
}

void digita_erro(float &erro){
    cout << "\nDigite o valor de ERRO (0-1): ";
    cin >> erro;
}