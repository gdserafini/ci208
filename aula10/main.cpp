/* JOGO CRASH -> ALTERAÇÕES */
/* REFATORAÇÃO/LOOP VALOR APOSTA E JOGO/DECISÃO */

#include <iostream>

using namespace std;

void digita_aposta(int &aposta_usuario);
void digita_resposta(int &resposta);
void novo_saldo(int &aposta, float fat_mult);
void finaliza_jogo(int &aposta, int &resp);

int main(void){
      //Variáveis e inicializações
float fator_multiplicativo = 1.1; //Por quanto a aposta será multiplicada a cada round
float fator_crash = 40; //De 1 a 100, quais valores irão disparar um crash no jogo
float valor_crash; //Variável de controle, indicará quando um crash ocorreu
int aposta_usuario; //Valor apostado pelo usuário, receber da entrada padrão
int resposta;
bool continua = resposta == 1; //Decisão do usuário por participar de uma rodada de crash
bool aposta_invalida = aposta_usuario <= 0;
bool crash = valor_crash <= fator_crash;

/* ALGORITMO PRINCIPAL */
srand(time(0)); // Configuração da função rand

do{
    digita_aposta(aposta_usuario);

    if(aposta_invalida){
        cout << "\nAposta inválida!\n" << endl;
    }
}while(aposta_invalida);

//Teste condicional: até quando o usuário quer apostar?
do{
    /* Padrão repetitivo: gerar o valor de crash atual; comparar com o fator de crash; 
    e tomar as ações correspondentes caso o sistema não der crash ou caso o crash ocorrer */
    valor_crash = rand() % 100;

    if(!crash){
        novo_saldo(aposta_usuario, fator_multiplicativo);
        digita_resposta(resposta);
    }
    else{
        finaliza_jogo(aposta_usuario, resposta);
    }
}while(continua);

cout << "Saldo final da rodada: R$ " << aposta_usuario << endl;

return 0;
}

void digita_aposta(int &aposta_usuario){
    cout << "\nQuanto você deseja apostas?: R$ ";
    cin >> aposta_usuario;
}

void digita_resposta(int &resposta){
    cout << "Deseja uma nova rodada? (0-Não/1-Sim): ";
    cin >> resposta;
}

void novo_saldo(int &aposta, float fat_mult){
    aposta *= fat_mult;
    cout << "Você ganhou! Saldo de R$ " << aposta << endl;
}

void finaliza_jogo(int &aposta, int &resp){
    cout << "Você perdeu tudo!" << endl;
    aposta = 0.0;
    resp = 0;
}