//recebe um valor n>0 e exibe as raizes de 1 até n

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void digitan(int &n){
    cout << "\nDigite o valor de n: ";
    cin >> n;
}

float calcula_raiz(int numero){
    if(numero > 0){ //calcula raiz de n > 0
        return (float)sqrt(numero);
    }
    else{
        cout << "\nErro - raiz.\n" << endl; //finaliza programa
        exit(1);
    }
}

int main(void){
    int n;
    float raiz;

    //algoritmo principal
    digitan(n); //recebe o valo n 

    cout << endl;

    for(int i = 0; i < n; i++){
        raiz = calcula_raiz(i+1); //recebe a raiz como float
        //exibe a raiz de determinado número da sequencia
        cout << "Raiz de " << i+1 << ": " << raiz << endl; 
    }

    cout << endl;

    return 0;
}