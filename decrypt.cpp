#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

std::string decryptCaesar(std::string ciphertext, int lshift){
    return encryptCaesar(ciphertext, -lshift);
}

std::string decryptVigenere(std::string ciphertext, std::string keyword){
    int i;
    int c = 0;
    std::string ans(ciphertext.length(), '*');
    int shift = 0;
    for (i = 0; i < ciphertext.length(); i++){
        if (isalpha(ciphertext[i])){
            if (isupper(keyword[c])) shift = keyword[c] - 'A';
            else if (islower(keyword[c])) shift = keyword[c] - 'a';
            else shift = 0;
            ans[i] = shiftChar(ciphertext[i], -shift);
            c++;
            c %= keyword.length();
        }
        else{
            ans[i] = ciphertext[i];
        }
    }
    return ans;
}