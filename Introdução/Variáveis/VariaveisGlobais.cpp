#include <iostream>
using namespace std;
    int n1,n2; //Vari�veis Globais
int main(){
    //Operadores Matem�ticos: + - / * % (prioridade)

    int n3,n4;//Vari�veis Locais
    int res, resto;
    n1= 11;
    n2=3;
    n3=5;
    n4=2;

        res=n1/n2;
        resto= n1%n2;

        cout << "divis�o de vari�veis" << res << "\n\n";
        cout << "resto da divis�o: " << resto << "\n\n";
    return 0;
}
