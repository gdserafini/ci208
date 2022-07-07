/* RECEBE O CÓDIGO E AS NOTAS DE UM ALUNO */
/* RETORNA A MÉDIA (3,3,4) E O CÓDIGO */

#include <iostream>
#include <cstdlib> //EXIT

using namespace std;

/* PARAMETROS */
#define NOT 3
#define MAX 10
#define MIN 0
#define PESO1 4
#define PESO2 3

void digita_codigo(int &codigo);
void digita_notas(int *notas);
bool nota_invalida(int notas);
void ordena_notas(int *notas);
int calcula_media(int *notas);
void troca(int &num1, int &num2);

int main(void){
    int notas[NOT], codigo, posi_maior;

    /* ALGORITMO PRINCIPAL */
    digita_codigo(codigo);
    digita_notas(notas);
    ordena_notas(notas);
    cout << "\nMédia: " << calcula_media(notas) << endl;
    cout << "\nCódigo: " << codigo << "\n" << endl;

    return 0;
}

/* IN */
void digita_codigo(int &codigo){
    cout << "\nDigite o código do aluno: ";
    cin >> codigo;
}

void digita_notas(int *notas){
    for(int i = 0;i < NOT; i++){
        cout << "\nDigite a "<< i+1 << "ª nota: ";
        cin >> notas[i];

        if(nota_invalida(notas[i])){
            cout << "\nErro - digite uma nota entre 0 e 10.\n" << endl;
            exit(1);
        }
    }
}
/**/

/* VERIFICA SE ESTÁ FORA DE 0-10 */
bool nota_invalida(int notas){
    if(notas < MIN || notas > MAX){
        return true;
    }
    else{
        return false;
    }
}

/* ORDENA P/ PESOS */
void ordena_notas(int *notas){
    for(int i = 0; i < NOT; i++){
        for(int j = i+1; j < NOT-1; j++){
            if(notas[i] < notas[j]){
                troca(notas[i], notas[j]);
            }
        }
    }
}

int calcula_media(int *notas){
    return (notas[0]*PESO2 + notas[1]*PESO2 + notas[2]*PESO1)/10;
}

void troca(int &num1, int &num2){
    int aux = num1;
    num1 = num2;
    num2 = aux;
}