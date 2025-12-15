#include <iostream>

// Returns the version of the co3ncrypt library.
char const* co3ncrypt_version() {
    return "co3ncrypt v0.0.1";
};

// Returns the build date of the co3ncrypt library.
char const* co3ncrypt_build_date() {
    return "co3ncrypt build: Dec 15 2025";
};



// Function prototype for generateKey
// This function generates an encryption key of specified size.
// This function provides the key generation functionality for the encryption library.
// Parameters:
// - keySize: Size of the key to generate (default is 16).
// - logEnabled: If true, enables logging during key generation (default is false).
int generateKey(int keySize = 16, bool logEnabled = false);

// Function prototype for encryptData
// This function encrypts the provided data using the generated key.
// This function provides the data encryption functionality for the encryption library.
// generateKey() must be called before this function in order for encryption to work.
// Parameters:
// - data: The data to be encrypted.
char* encryptData(const char* data);

// Function prototype for decryptData
// This function decrypts the provided encrypted data using the generated key.
// This function provides the data decryption functionality for the encryption library.
// generateKey() or getKey() must be called before this function in order for decryption to work.
// Parameters:
// - encryptedData: The data to be decrypted.
char* decryptData(const char* encryptedData);