#pragma once
#include "includes.h"

// Build info
const std::string co3ncrypt_version_date = "2025-12-15";
const std::string co3ncrypt_version_number = "0.0.1";

class co3ncrypt {
protected:

public:
    // Generates encryption keys
    void generate_key(int key_size, bool logging_enabled = false, bool output_file = false); // Todo: Add output file support


    std::string encrypt(const std::string& data);
    std::string decrypt(const std::string& data);

};