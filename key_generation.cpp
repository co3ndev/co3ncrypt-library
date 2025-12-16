#include "includes.h"

tools t;

void key_generation::character_encryption(std::string _char, int size){
    char hex_char = _char[rand() % _char.length()];
    key += hex_char;
    t.log_message(std::to_string(hex_char));
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
}

void key_generation::key_creator(int type, int size){
    switch (type){
        case 0: // hex
            for (int i = 0; i < size; ++i){
                character_encryption("0123456789ABCDEF", size);
            }

        case 1: // alphabet + 0-9
            for (int i = 0; i < size; ++i){    
                character_encryption("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789", size);
            }

        case 2:
            for (int i = 0; i < size; ++i) {
            int decision = rand()%2;
            switch (decision){
                case 0:
                    character_encryption("0123456789ABCDEF", size);
                case 1:
                    character_encryption("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz", size);
            }
        }
    }

    if (key == ""){
        t.log_message("key_creator() failed. Unknown error creating key", 2);
        return;
    } else {
        t.log_message("key: " + key);

    }
}

