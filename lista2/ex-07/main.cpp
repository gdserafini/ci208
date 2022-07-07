/* RECEBE O DIA DE NASCIMENTO 
E DEVOLVE A IDADE NO DIA 15/04/2021 */

#include <iostream>

using namespace std;

/* CONSTANTES */
#define MAXD 30
#define MIND 1
#define MAXM 12
#define MINM 1
#define MINA 0
#define D 15
#define M 4
#define A 2021
#define STR_LEN 16

void digita_nascimento(void);
bool data_invalida(string *tipo_erro);
int calcula_idade(void);

/* GLOBAIS P/ FACILITAR PASSAGEM DE PARAMÊTROS */
int dia, mes, ano;

int main(void){
    string tipo_erro;

    /* ALGORIMO PRINCIPAL */
    do{
        digita_nascimento();

        if(data_invalida(&tipo_erro)){
            cout << "\nErro - " << tipo_erro << endl;
        }
    }while(data_invalida(&tipo_erro));

    cout << "\nIdade: " << calcula_idade() << "\n" << endl;
    /**/

    return 0;
}

/* RECEBE DD/MM/AAAA */
void digita_nascimento(){
    cout << "\nDigite o dia de nascimento: ";
    cin >> dia;

    cout << "\nDigite o mês de nascimento: ";
    cin >> mes;

    cout << "\nDigite o ano de nascimento: ";
    cin >> ano;
}

/* DIA E MÊS FORA DE SEUS INTERVALOS */
bool data_invalida(string *tipo_erro){
    if(dia < MIND || dia > MAXD){
        *tipo_erro = "Dia inválido.";
        return true;
    }
    else if(mes < MINM || mes > MAXM){
        *tipo_erro = "Mês inválido.";
        return true;
    }
    else if(ano > A || ano < 0){
        *tipo_erro = "Ano inválido.";
        return true;
    }
    else{
        return false;
    }
}

/* RETORNA IDADE NA DATA */
int calcula_idade(){
    int idade = A - ano;

    if(mes == M && dia >= D){
        idade++;
    }
    else if(mes > M){
        idade++;
    }

    return idade;
}