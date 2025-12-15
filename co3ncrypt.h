#pragma once
#include <string>

// Build info
const std::string co3ncrypt_version_date = "2025-12-15";
const std::string co3ncrypt_version_number = "0.0.1";

class co3ncrypt {

public:
    std::string encryption_key = "";

    bool is_encrypted = false;

    // Prints log message to console
    void log_message(const std::string& message, bool fatal = false, bool output_file = false); // Todo: Add output file support

    // Generates encryption keys
    void generate_key(int key_size, bool logging_enabled = false, bool output_file = false); // Todo: Add output file support
    
    std::string encrypt(const std::string& data);
    std::string decrypt(const std::string& data);

};