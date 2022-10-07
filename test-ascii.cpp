#include <iostream>

int main(){
    std::string inp;
    int i;
    std::getline(std::cin, inp);
    for (i = 0; i < inp.length(); i++){
        std::cout << inp[i] << " " << (int)inp[i] << std::endl;
    }
    return 0;
}

