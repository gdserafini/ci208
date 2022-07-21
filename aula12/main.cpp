//recebe o valor de n > 0 
//exibe - fibonacci com n termos - recursivo

#include <iostream>

using namespace std;

void digitan(int &n){
    cout << "\nDigite o número de termos da sequencia: ";
    cin >> n;
}

int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    else{
        return (fibonacci(n-2) + fibonacci(n-1));
    }
}

int main(void){
    int n;
    
    //algoritmo principal
    cout << "\n***Sequência Fibonacci***\n" << endl;

    do{ //repete se n <= 0
        digitan(n);

        if(n > 0){
            cout << endl;

            for(int i = 0; i < n; i++){ //exibe número da sequência
                cout << fibonacci(i) << " ";
            }

            cout << "\n" << endl;

            break;
        }
        else{
            cout << "\nDigite um valor maior que zero.\n" << endl;
        }
    }while(1);

    return 0;
}