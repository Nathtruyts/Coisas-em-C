#include <iostream>

int main(){
    while (true){//faz o código ficar em loop
    int x = 0;

    std::cout << "digite um numero: ";
    std::cin >> x;//input do usuário que define a variável

    if (x == 42){
    break;
    }

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