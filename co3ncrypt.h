#pragma once
#include <thread>
#include <chrono>
#include <string>

// Build info
const std::string co3ncrypt_version_date = "2025-12-15";
const std::string co3ncrypt_version_number = "0.0.1";

class co3ncrypt {
protected:
    std::string key_a = "";
    std::string key_b = "";

    // Prints log message to console
    void log_message(const std::string& message, bool fatal = false, bool output_file = false); // Todo: Add output file support
    
    // key_creator function, used by generate_key
    void key_creator(int type, int size);
    // char_encryption function for key_creator()
    void character_encryption(std::string _char, int size);
public:
    // Should usually be an empty variable. Once encryption key is generated, it is saved to a text file and exits memory.
    std::string encryption_key = "";

    // Generates encryption keys
    void generate_key(int key_size, bool logging_enabled = false, bool output_file = false); // Todo: Add output file support
    
    std::string encrypt(const std::string& data);
    std::string decrypt(const std::string& data);

};