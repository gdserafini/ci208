/* RECEBE A IDADE DO CLIENTE E DIA DO FILME */
/* RETORNA O VALOR DO INGRESSO */

#include <iostream>

using namespace std;

/* VALORES P/ CONDICIONAL */
#define PRECO 20
#define MEN5 5
#define MEN12 12
#define MEN17 17
#define DESC 0.8
#define MAI70 70
#define DIA10 10
#define MAX 100
#define MIN 0

void digita_idade(int &idade);
void digita_dia(int &dia);
void calcula_preco(int idade, int dia);
bool idade_invalida(int idade);
void exibe_preco(int preco_ingresso);

int main(void){
    int idade, dia;
    float preco_ingresso;

    /* ALGORITMO PRINCIPAL */
    do{
        digita_idade(idade);

        if(idade_invalida(idade)){
            cout << "\nERRO - Digite uma idade entre 0 e 100.\n" << endl;
        }
    }while(idade_invalida(idade));

    digita_dia(dia);
    calcula_preco(idade, dia);

    return 0;
}

/* IN */
void digita_idade(int &idade){
    cout << "\nDigite a idade do cliente: ";
    cin >> idade;
}

void digita_dia(int &dia){
    cout << "\nDigite o dia de exibição: ";
    cin >> dia;
}
/**/

/* VERIFICA O PREÇO E EXIBE NA TELA */
void calcula_preco(int idade, int dia){
    float preco_ingresso;

    if(dia == DIA10){
        if(idade <= MEN5 || idade > MAI70){
            preco_ingresso = 0;
        }
        else{
            preco_ingresso = (PRECO/2);
        }
    }
    else{
        if(idade <= MEN5 || idade > MAI70){
            preco_ingresso = 0;
        }
        else if(idade > MEN5 && idade <= MEN12){
            preco_ingresso = (PRECO/2);
        }
        else if(idade > MEN12 && idade <= MEN17){
            preco_ingresso = (PRECO * DESC);
        }
        else if(idade > MEN17 && idade <= MAI70){
            preco_ingresso = PRECO;
        }
    }

    exibe_preco(preco_ingresso);
}

/* FORA DE 0-100 */
bool idade_invalida(int idade){
    if(idade < MIN || idade > MAX){
        return true;
    }
    else{
        return false;
    }
}

void exibe_preco(int preco_ingresso){
    cout << "\nPreço do ingresso: " << preco_ingresso << "\n" << endl;
}