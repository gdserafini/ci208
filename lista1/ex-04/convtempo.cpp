/* RECEBE O TEMPO EM SEGUNDO E EXIBE EM HORAS, MINUTOS E SEGUNDOS */
#include <iostream>

using namespace std;

#define HORA 3600
#define MINU 60

void insere_segundos(int &segundos);
int calcula_horas(int segundos);
int calcula_minutos(int segundos);
void printa_tempo(int segundos);
int calcula_segundos(int segundos, int m);

int main(void){
    int segundos;

    /* MAIN ALG. */
    insere_segundos(segundos);
    printa_tempo(segundos);

    return 0;
}

void insere_segundos(int &segundos){
    cout << "\nDigite o tempo em segundos: ";
    cin >> segundos;
}

/* RETORNA O VALOR SE >= 1 */
int calcula_horas(int segundos){
    int hor = segundos/HORA;

    if(hor >= 1){
        return hor;
    }
    else{
        return 0;
    }
}

int calcula_minutos(int segundos){
    int min = segundos/MINU;

    if(min >= 1){
        return min;
    }
    else{
        return 0;
    }
}

/* RETORNA OS SEGUNDOS A MAIS QUE X MINUTOS EXATOS */
int calcula_segundos(int segundos, int m){
    if((segundos - (m * MINU)) >= 0){
        return (segundos - (m * MINU));
    }
}

/* EXIBE OS 3 VALORES */
void printa_tempo(int segundos){
    int min = calcula_minutos(segundos);

    cout << calcula_horas(segundos) << " horas." << endl;
    cout << calcula_minutos(segundos) << " minutos." << endl;
    cout << calcula_segundos(segundos, min) << " segundos." << endl; 
}