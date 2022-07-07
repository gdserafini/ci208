/* RECEBE 3 NOTAS DE UM ALUNO E CALCULA A MÉDIA PONDERADA(2,3,5) */
#include <iostream>
#include <cstdlib>

using namespace std;

#define QNT_NOT 3 

void digita_notas(float *nota);
float calcula_media(float *nota);

int main(void){
    float nota[QNT_NOT];

    /* ALGORITMO */
    digita_notas(nota);
    cout << "Média: " << calcula_media(nota) << endl;

    return 0;
}

/* LOOP -> DIGITA AS NOTAS */
void digita_notas(float *nota){
    for(int i = 0; i < QNT_NOT; i++){
        cout << "\nDigite a " << i+1 << "ª nota: ";
        cin >> nota[i];
    }
}
/* VERIFICA E CALCULA A MÉDIA */
float calcula_media(float *nota){
    if(nota[0] >= 0 && nota[1] >= 0 && nota[2] >=0){
        return (nota[0] * 2 + nota[1] * 3 + nota[2] * 5)/10;
    }
    else{
        cout << "\nErro: as notas devem ser maior que zero.\n" << endl;
        exit(0);
    }
}