#include "includes.h"

class key_generation{
protected:
    std::string key;

    // char_encryption function for key_creator()
    void character_encryption(std::string _char, int size);
    
public:
    // main decryption key creator
    void key_creator(int type, int size);

    // Should usually be an empty variable. Once encryption key is generated, it is saved to a text file and exits memory.
    std::string key_b = "";

};