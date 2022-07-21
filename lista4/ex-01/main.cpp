//recebe n inteiro > 0 e calcula seu fatorial

#include <iostream>

using namespace std;

void digitan(int &n){
    cout << "\nDigite n: ";
    cin >> n;
}

int fatorial(int n){
    if(n == 1){
        return 1;
    }
    else{
        return (n * fatorial(n-1));
    }
}

int main(void){
    int n;
    
    //algoritmo principal
    cout << "\n***Fatorial***" << endl;

    do{ //repete se n <= 0
        digitan(n);

        if(n > 0){
            cout << endl;
            cout << n << "! = ";

            for(int i = n; i > 1; i--){
                cout << i << " x ";
            }

            cout << "1 = ";
            cout << fatorial(n);
            cout << "\n" << endl;

            break;
        }
        else{
            cout << "\nDigite um valor maior que zero.\n" << endl;
        }
    }while(1);

    return 0;
}