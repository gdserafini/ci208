#include <iostream>

#define STRLEN 100
#define NCAND 5

using namespace std;

int total = 0, maior = 0, posivenc;

void exibe_candidatos(void){
    cout << "\nCandidatos:\n" << endl;

    cout << "\n1 - João Rodrigues." << endl;
    cout << "2 - Carlos Luz." << endl;
    cout << "3 - Neves Rocha." << endl;
    cout << "4 - Nulo." << endl;
    cout << "5 - Branco." << endl;
}

void conta_votos(int voto, int *cont_cand, int inicio){
    if(voto == (inicio+1)){ //contagem de candidatos recursiva
        cont_cand[inicio]++;
    }
    else{
        conta_votos(voto, cont_cand, inicio+1);
    }
}

int calc_porcent(int contx){
    return (int)((contx/total) * 100);
}

void cand_vencedor(int *cont_cand, int inicio){
    if(inicio < NCAND-2){ //acha o vencedor - recursiva (exceto nulo e branco)
        if(cont_cand[inicio] > maior){
            maior = cont_cand[inicio];
            posivenc = inicio;
        }
        else{
            cand_vencedor(cont_cand, inicio+1);
        }
    }
}

void exibe_infos(int *cont_cand, string candidatos[NCAND]){
    bool segundo_turno = (cont_cand[0] == cont_cand[1] && cont_cand[0] > cont_cand[2]) || 
    (cont_cand[0] == cont_cand[2] && cont_cand[0] > cont_cand[1]) ||
    (cont_cand[1] == cont_cand[2] && cont_cand[1] > cont_cand[0]);

    cout << "\nCandidatos:\n" << endl;

    cout << "\nJoão Rodrigues: " << cont_cand[0] << endl;
    cout << "Carlos Luz: " << cont_cand[1] << endl;
    cout << "Neves Rocha: " << cont_cand[2] << endl;
    cout << "Nulo: " << cont_cand[3] << endl;
    cout << "Branco: " << cont_cand[4] << endl;

    cout << "\n% Nulos: " << calc_porcent(cont_cand[3]) << "%" << endl;
    cout << "% Brancos: " << calc_porcent(cont_cand[4]) << "%\n" << endl;

    cand_vencedor(cont_cand, 0);

    if(segundo_turno){
        cout << "\n2º turno.\n" << endl;
    }
    else{
        cout << "\nVencedor: " << candidatos[posivenc] << endl;
    }
}

int main(void){   
    int cont_cand[NCAND] = {0,0,0,0,0}; //em ordem por candidatos
    int voto;
    string candidatos[NCAND] = {
    "João Rodrigues", "Carlos Luz", "Neves Rocha", "Nulo", "Branco"};

    //algoritmo principal
    exibe_candidatos();
    
    do{ //recebe votos e faz a contagem
        cout << "\nDigite seu voto: ";
        cin >> voto;

        if(voto > 0 && voto < 6){
            conta_votos(voto, cont_cand, 0);
            total++;
        }
    }while(voto != 6);

    exibe_infos(cont_cand, candidatos);

    return 0;
}