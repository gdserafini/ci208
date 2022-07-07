/* RECEBE A IDADE DO USUÁRIO E EXIBE A CONDIÇÃO DE SEU VOTO */

#include <iostream>

using namespace std;

/* IDADES */
#define NVOTA 16
#define MAIOR 18
#define IDOSO 65
#define MAX 100
#define MIN 0

void digita_idade(int &idade);
void exibe_resultado(int idade);
bool idade_invalida(int idade);
bool menor_16(int idade);
bool facultativo(int idade);

int main(void){
    int idade;

    /* ALGORITMO PRINCIPAL */
    do{    
        digita_idade(idade);
        if(idade_invalida(idade)){
            cout << "\nDigite uma idade válida.\n" << endl; /* ENTRE 0 E 100 */
        }
    }while(idade_invalida(idade));
    exibe_resultado(idade);

    return 0;
}

/* RECEBE IDADE */
void digita_idade(int &idade){
    cout << "\nDigite sua idade: ";
    cin >> idade;
}

/* EXIBE CATEGORIA DE VOTA */
void exibe_resultado(int idade){
    if(menor_16(idade)){
        cout << "\nVocê não poderá votar este ano.\n" << endl;
    }
    else if(facultativo(idade)){
        cout << "\nVocê poderá votar de forma facultativa este ano.\n" << endl;
    }
    else{
        cout << "\nVocê é obrigado a votar este ano.\n" << endl;
    }
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

/* VERIFICAM CONDIÇÕES DE VOTO */
bool menor_16(int idade){
    if(idade < NVOTA){
        return true;
    }
    else{
        return false;
    }
}

bool facultativo(int idade){
    if((idade >= NVOTA && idade < MAIOR) || idade >= IDOSO){
        return true;
    }
    else{
        return false;
    }
}
/**/