//Busca a biblioteca principal de C++ 
//importante para as funções mais básicas
#include <iostream>

using namespace std;

//função principal, não são necessários os argumentos entre ()
int main(int argc, char** argv){

    int myInt = 0;

    myInt = 10;
    myInt = 20;
    myInt = 10 + 10;

    myInt += 10;

    std::cout << myInt << "\n";//\n serve para quebra de linha


    system("pause");

    return 0;
} 
//conta básica usando myInt que define variáveis como números inteiros
//C++ é tipado, logo preciso definir o tipo das varáveis.