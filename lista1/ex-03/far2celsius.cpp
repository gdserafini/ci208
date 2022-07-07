#include <iostream>

using namespace std;

int main(void){
    float far, cel;

    /* ALG. */
    digita_temp(far);

    if(far >= -459.67){ /* VERIFICA SE É MAIOR QUE O ZERO ABSOLUTO */
        cout << "\nTemp. em Celsius: " << calcula_celsius(far) << endl;
    }
    else{
        cout << "\nErro: o valor deve ser maior que -459.67 F°.\n" << endl;
    }

    return 0;
}

/*  FUNÇÕES - DIGITA - CALCULA*/
void digita_temp(float &far){
    cout << "\nDigite a temperatura em Farenheit: ";
    cin >> far;
}

float calcula_celsius(float far){
    return (5/9) * (far - 32);
}