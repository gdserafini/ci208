//recebe o valor de n > 0 e exibe a tabuada de n de 1 até 10

#include <iostream>
#include <cstdlib>

#define INICIO 1
#define FIM 10

using namespace std;

void digitan(int &n){
    cout << "\nDigite o valor de n: ";
    cin >> n;
}

int tabuada(int n, int chave){
    if(n > 0){ //calcula apenas se n > 0
        return n * chave;
    }
    else{
        cout << "\nErro - tabuada.\n" << endl;
        exit(1);
    }
}

int main(void){
    int n;

    //algoritmo principal
    digitan(n);

    cout << endl;

    for(int i = INICIO; i <= FIM; i++){
        //exibe a tabuda de 1 a 10 no formato n x m = x
        cout << n << " x " << i << " = " << tabuada(n, i) << endl;
    }

    cout << endl;

    return 0;
}