#pragma once
#include <iostream>

// Returns the version of the co3ncrypt library.
char const* co3ncrypt_version() {
    return "co3ncrypt v0.0.1";
};

// Returns the build date of the co3ncrypt library.
char const* co3ncrypt_build_date() {
    return "co3ncrypt build: Dec 15 2025";
};

// Logging function declaration
void logMessage(const std::string& message);
