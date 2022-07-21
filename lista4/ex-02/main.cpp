//calcula o número neperiano considerando as 10 primeiras parcelas

#include <iostream>

#define NPAR 10

using namespace std;

double fatorial(double n){ //fatorial recursivo devolvendo um double
    if(n == 1){
        return 1;
    }
    else{
        return (n * fatorial(n-1));
    }
}

double neperiano(int n){
    double nep = 1;
    
    for(double i = 1; i < NPAR; i++){ //faz as soma das parcelas usando fatorial(n)
        nep = nep + (1/fatorial(i)); 
    }

    return nep;
}

int main(void){

    //algoritmo principal
    cout << "\n***Número Neperiano***\n";

    double nep = neperiano(NPAR);
    cout << "\nResultado: " << nep << "\n" << endl;

    return 0;
}