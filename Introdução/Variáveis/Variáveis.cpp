#include <iostream>
//aula de variáveis
using namespace std;

int main(){
    //regra de variável = TIPO NOME:
    //TIPO NOME = VALOR;

    int vidas = 0; //variável do tipo inteira ex: -1,0,1 ...
    char letra = 'T'; //variável do tipo letra ex: 'B', 'A'...
    char letras[20];//char com tamanho limitado [20] indica 20 caracteres
    double decimal = 2.55; //variável do tipo real ex: 2.49999999
    float decimal2 = 2.5; // variável menos precisa que DOUBLE ex: 2.5
    bool vivo = 1;// variável do tipo true(1) ou false(0)
    string nome = "Tiago";//variável do tipo char mas com texto maior ex: "Tiago"
    
    cout<< "Digite o numero de vidas: ";
    cin >>vidas; // cin são os dados que vão entrar no computador, o usuário vai digitar
    cout <<"Digite uma letra: ";
    cin >> letra;
    cout << "Dinheiro: ";
    cin >> decimal;
    cout << "Digite seu Nome: ";
    cin >> nome;
    cout<< "\n" << vidas << "\n";
    cout<< letra << "\n";
    cout<< decimal << "\n";
    cout<< decimal2 << "\n";
    cout<< vivo << "\n";
    cout<< nome << "\n";

   
    //pode-se fazer com um COUT só, basta adicionar << a cada variável
   
   
    return 0;
}