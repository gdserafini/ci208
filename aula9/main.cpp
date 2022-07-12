/* MÉTODO DE NEWTON 
RECEBE ERRO E A -> CALCULA A RAIZ */

#include <iostream>

using namespace std;

/* INTERVALO DO ERRO */
#define MAXE 1
#define MINE 0
#define ITER 10

void digita_a(float &a);
void digita_erro(float &erro);
float calcula_raiz(int x, int a);

int main(void){
    float x, y = 0, a, erro;
    int i = 0, numi = ITER;
    bool nao_terminou = (-y*(i+1) - y*i) <= erro;
    bool erro_invalido = erro < MINE || erro > MAXE;

    /* ALGORITMO PRINCIPAL */
    do{
        digita_erro(erro);
            if(!erro_invalido){
                digita_a(a);
                x = a/2;

                while(nao_terminou){
                    y = y + calcula_raiz(x, a);
                    i++;
                }
            }
            else{
                cout << "\nDigite um valor entre 0 e 1.\n" <<endl;
            }
    }while(erro_invalido);

    return 0;
}

void digita_erro(float &erro){
    cout << "\nDigite o erro: ";
    cin >> erro;
}

void digita_a(float &a){
    cout << "\nDigite o valor de A: ";
    cin >> a;
}

float calcula_raiz(int x, int a){
    return ((x + (a/x))/2);
}