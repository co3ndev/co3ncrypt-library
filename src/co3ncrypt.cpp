#include "../headers/includes.h"

key_generation kg;
tools t;

void co3ncrypt::generate_key(int key_size, bool logging_enabled, bool output_file) {
    srand(time(NULL) + rand()%2147);
    
    if (kg.key_b == ""){
        t.log_message("encryption_key not found. Attempting creation...");
        kg.key_creator(2, key_size);
    }

    return;
}