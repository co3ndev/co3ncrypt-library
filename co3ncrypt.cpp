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

void co3ncrypt::generate_key(int key_size, bool logging_enabled, bool output_file) {
    if (encryption_key == ""){
        if (logging_enabled){
            log_message("Encryption key not detected..");
            log_message("Beginning key generation...");
        }
        for (int i = 0; i <= key_size; ++i) {
            char hex_char = "0123456789ABCDEF"[rand() % 16];
            encryption_key += hex_char;
            if (logging_enabled) {
                log_message("Generated hex char: " + std::string(1, hex_char));
            }
        }
        if (logging_enabled){
            log_message("Encryption key generated.");
            log_message("Encryption key: " + encryption_key);
        }
    }

    return;
}