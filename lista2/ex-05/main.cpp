/* RECEBE COEFICIENTES E RETORNA X E Y SE POSSÍVEL */

#include <iostream>

using namespace std;

/* NÚMERO DE COEFICIENTES */
#define COEF 6

void digita_coefs();
bool nao_divide();
int calcula_x();
int calcula_y();

/* GLOBAIS P/ FACILITAR O USO DAS FUNÇÕES */
int a,b,c,d,e,f;

int main(void){

    /* ALGORITMO PRINCIPAL */
    digita_coefs();

    if(nao_divide()){
        cout << "\nNão é possível dividir por 0.\n" << endl;
    }
    else{
        cout << "\nX: " << calcula_x() << endl;
        cout << "\nY: " << calcula_y() << endl;
    }

    return 0;
}

void digita_coefs(){
    cout << "\nDigite o coeficiente A: ";
    cin >> a;
    cout << "\nDigite o coeficiente B: ";
    cin >> b;
    cout << "\nDigite o coeficiente C: ";
    cin >> c;
    cout << "\nDigite o coeficiente D: ";
    cin >> d;
    cout << "\nDigite o coeficiente E: ";
    cin >> e;
    cout << "\nDigite o coeficiente F: ";
    cin >> f;
}

/* SE FOR DIVIDIR POR 0 -> ERRO */
bool nao_divide(){
    if((a*e) == (b*d)){
        return true;
    }
    else{
        return false;
    }
}

int calcula_x(){
    return ((c*e) - (b*f))/((a*e) - (b*d));
}

int calcula_y(){
    return ((a*f) - (c*d))/((a*e) - (b*d));
}