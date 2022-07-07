/* RECEBE O A QNT DE TOMATES COMPRADOS E HORÁRIO */
/* RETORNA VALOR FINAL */
#include <iostream>

using namespace std;

#define PT1 0.5
#define PT2 0.4
#define QNT1 10
#define DESC 0.7
#define XEPA 11

void digita_horario(int &hr);
void digita_quant(int &q);
float calcula_valor(int hr, int q);
bool menos_10(int q);
bool depois_xepa(int hr);

int main(void){
    int hora ,qnt; 

    /* ALGORITMO PRINCIPAL */
    do{
        digita_horario(hora);
        if(hora < 6 || hora > 12){
            cout << "\nDigite um horário entre 6:00 e 12:00.\n" << endl;
        }
    }while(hora < 6 || hora > 12); /*LOOP SE HORÁRIO ESTÁ FORA (6-12)*/
    digita_quant(qnt);
    cout << "\nPreço final: " << calcula_valor(hora, qnt) << endl;

    return 0;
}

/* FUNÇÕES IN */
void digita_horario(int &hr){
    cout << "\nDigite o horário da compra (apenas hora cheia): ";
    cin >> hr;
}

void digita_quant(int &q){
    cout << "\nDigite a quantidade de tomates: ";
    cin >> q;
}
/**/

/* CONDIÇÕES -> RETORNA VALOR */
float calcula_valor(int hr, int q){
    float valor;

    if(menos_10(q)){
        valor = (float)(q * PT1);
        if(depois_xepa(hr)){
            valor = valor * DESC;
        }
    }
    else{
        valor = (float)(q * PT2);
        if(depois_xepa(hr)){
            valor = valor * DESC;
        }
    }

    return valor;
}

/* VERIFICA CONDIÇÕES DE PREÇO */
bool menos_10(int q){
    if(q <= QNT1){
        return true;
    }
    else{
        return false;
    }
}

bool depois_xepa(int hr){
    if(hr > XEPA){
        return true;
    }
    else{
        return false;
    }
}
/**/