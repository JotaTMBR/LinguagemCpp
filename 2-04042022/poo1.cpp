/*programa para trabalhar com orientação objeto. Usando
classe e objetos*/
#include <iostream>

//chamada da biblioteca std
using std::cout;
using std::cin;

class Textos{
    public:
    void mensagem1(){
        cout << "Olá!\n";
    }
    void mensagem2(){
        cout << "Bom Dia!\n";
    }
};

int main(){
    Textos txt;
    txt.mensagem1();
    txt.mensagem2();
    
    return 0;
}