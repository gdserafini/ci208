//recebe a e b e exibe a potência b^a

#include <iostream>

using namespace std;

void digita_ab(int &a, int &b){ //recebe a e b
    cout << "\nDigite a: ";
    cin >> a;

    cout << "\nDigite b: ";
    cin >> b;
}

void incrementa_mult(int &mult, int b){ //faz o incremento da potência
    mult = mult * b;
}

int main(void){
    int a, b, mult = 1;

    //algoritmo principal
    digita_ab(a, b);

    //calcula raiz
    if(a == 0){ //exibe b^0
        cout << "\nPotência: 1" << endl;
    }
    else if(a < 0){ //exibe valor inverso
        for(int i = 0; i < -a; i++){ //inverte o sinal de a
            incrementa_mult(mult, b);
        }

        cout << "\nPotência: 1/" << mult << endl;
    }
    else{ //exibe potência b^a (a de 1 - n)
        for(int i = 0; i < a; i++){
            incrementa_mult(mult, b);
        }

        cout << "\nPotência: " << mult << endl;
    }

    cout << endl;

    return 0;
}