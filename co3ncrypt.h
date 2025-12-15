#pragma once
#include <string>

// Build info
const std::string co3ncrypt_version_date = "2025-12-15";
const std::string co3ncrypt_version_number = "0.0.1";

class co3ncrypt {
private:
    int encryption_key = 0;

public:
    bool is_encrypted = false;

    // Prints log message to console
    void log_message(const std::string& message);

    void generate_key(int key_size, bool logging_enabled);
    
    std::string encrypt(const std::string& data);
    std::string decrypt(const std::string& data);
};