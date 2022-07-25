#include <iostream>

int main(){
    //faz o código rodar dez vezes
    for (int i = 0; i < 10; i++){//define quantas vezes e a condição de continuar e parar
    int x = 0;

    std::cout << "digite um numero: ";
    std::cin >> x;//input do usuário que define a variável

    if (x > 0){//if feito em c++
        std::cout << "x eh positivo!\n";
    }

    else if (x < 0){
        std::cout <<"X eh menor que zero\n";
    }

    else {
        std::cout << "x eh zero!\n";
    }
}
system("pause");

return 0;
} 