#include <iostream>
using namespace std;
    int n1,n2; //Variáveis Globais
int main(){
    //Operadores Matemáticos: + - / * % (prioridade)

    int n3,n4;//Variáveis Locais
    int res, resto;
    n1= 11;
    n2=3;
    n3=5;
    n4=2;

        res=n1/n2;
        resto= n1%n2;

        cout << "divisão de variáveis" << res << "\n\n";
        cout << "resto da divisão: " << resto << "\n\n";
    return 0;
}
