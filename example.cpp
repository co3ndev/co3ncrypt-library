#include "co3ncrypt.h"
#include <iostream>
co3ncrypt cc;

int main(){
    cc.generate_key(256, true, true);
    std::cout << "Encryption Key: " << cc.encryption_key << std::endl;
    return 0;
}