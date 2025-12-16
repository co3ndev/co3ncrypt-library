#include "co3ncrypt.h"
#include <iostream>

void co3ncrypt::log_message(const std::string& message, bool fatal, bool output_file) {
    if (fatal) {
        std::cerr << "[FATAL] " << message << std::endl;
    } else {
        std::cout << "[LOG] " << message << std::endl;
    }
    return;
}

void co3ncrypt::character_encryption(std::string _char, int size){
    char hex_char = _char[rand() % _char.length()];
    key_a += hex_char;
    log_message(std::to_string(hex_char));
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
}

void co3ncrypt::key_creator(int type, int size){
    switch (type){
        case 0: // hex encryption 0123456789ABCDEF
            for (int i = 0; i < size; ++i){
                character_encryption("0123456789ABCDEF", size);
            }

        case 1: // alphabet ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz
            for (int i = 0; i < size; ++i){    
                character_encryption("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz", size);
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

    if (key_a == ""){
        log_message("key_creator() failed. Error creating key_a", 1);
        return;
    } else {
        log_message("key_a: " + key_a);
    }
}


void co3ncrypt::generate_key(int key_size, bool logging_enabled, bool output_file) {
    if (encryption_key == ""){
        log_message("encryption_key not found. Attempting creation...");
        co3ncrypt::key_creator(2, key_size);
    } else {
        log_message("encryption_key not empty! Proceeding with erase this encryption key, and all files will be lost. \nBe ensure that a backup exists. Before continuing.");
        std::cout.flush();
        std::cin.get();
        log_message("Creating new encryption_key...");
        co3ncrypt::key_creator(2, key_size);
    }

    return;
}