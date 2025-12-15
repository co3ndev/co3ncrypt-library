#include "co3ncrypt.h"
#include <iostream>

void co3ncrypt::log_message(const std::string& message) {
    std::cout << "[CO3NCRYPT LOG]: " << message << std::endl;
    return;
}

void co3ncrypt::generate_key(int key_size, bool logging_enabled) {
    int bit[] = {};
    
    if (key_size <= 0 || key_size > 256) {
        // Log error for invalid key size
        if (logging_enabled) {
            log_message("Invalid key size specified. Key must be between 1 and 256.");
        } 
        return;
    } else {
        // Log key generation start
        if (logging_enabled) {
            log_message("Generating encryption key of size " + std::to_string(key_size) + " bits.");
        }
        for (int i = 0; i < key_size; ++i) {
            bit[i] = rand() % 36; // Random bit between 0 and 35
            if (logging_enabled) {
                log_message("Generated bit: " + std::to_string(i) + ": " + std::to_string(bit[i]));
            }
        }
        
        // Set the encryption bits
        for (int i = 0; i < key_size; ++i) {
            if (bit[i] < 0 || bit[i] > 35) {
                if (logging_enabled) {
                    log_message("Error: Generated bit out of range: " + std::to_string(bit[i]) + ". Aborting key generation.");
                }
                return;
            }
        }

        // Combine bits into a single encryption key
        encryption_key = 0;
        for (int i = 0; i < sizeof(bit); ++i) {
            encryption_key = (encryption_key << 6) | bit[i]; // Shift left and add new bit
        }

        // Finalize key generation
        if (encryption_key > 0) {
            is_encrypted = true;
            if (logging_enabled){
                log_message("Encryption key generated.");
                log_message("Encryption key: " + std::to_string(encryption_key));
            }
        } else{
            is_encrypted = false;
            if (logging_enabled){
                log_message("Failed to generate a valid encryption key. Bit array may be empty.");
            }
        }

    }

    return;
}