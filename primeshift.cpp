#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to check if a number is prime (for key validation)
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

// Encryption function
string encrypt(const string& plaintext, int key) {
    string ciphertext;
    for (size_t i = 0; i < plaintext.length(); ++i) {
        int ascii_val = static_cast<int>(plaintext[i]);
        int shift = key * (i + 1);
        int new_val = (ascii_val + shift) % 256;
        
        // Handle negative values (though modulo 256 of positive should be positive)
        if (new_val < 0) new_val += 256;
        
        ciphertext += static_cast<char>(new_val);
    }
    return ciphertext;
}

// Decryption function
string decrypt(const string& ciphertext, int key) {
    string plaintext;
    for (size_t i = 0; i < ciphertext.length(); ++i) {
        int ascii_val = static_cast<int>(ciphertext[i]);
        int shift = key * (i + 1);
        int new_val = (ascii_val - shift) % 256;
        
        // Handle negative values
        if (new_val < 0) new_val += 256;
        
        plaintext += static_cast<char>(new_val);
    }
    return plaintext;
}

// Function to display ASCII values of a string (for debugging)
void displayASCII(const string& s) {
    cout << "ASCII values: ";
    for (char c : s) {
        cout << static_cast<int>(c) << " ";
    }
    cout << endl;
}

int main() {
    cout << "PrimeShift Cipher Implementation in C++" << endl;
    cout << "=====================================" << endl << endl;
    
    string plaintext;
    int key;
    
    cout << "Enter plaintext: ";
    getline(cin, plaintext);
    
    do {
        cout << "Enter a prime number as key: ";
        cin >> key;
        if (!isPrime(key)) {
            cout << "Invalid key! Please enter a prime number." << endl;
        }
    } while (!isPrime(key));
    
    // Encryption
    string ciphertext = encrypt(plaintext, key);
    cout << "\nEncryption Process:" << endl;
    cout << "Plaintext: " << plaintext << endl;
    displayASCII(plaintext);
    cout << "Ciphertext: " << ciphertext << endl;
    displayASCII(ciphertext);
    
    // Decryption
    string decrypted = decrypt(ciphertext, key);
    cout << "\nDecryption Process:" << endl;
    cout << "Ciphertext: " << ciphertext << endl;
    displayASCII(ciphertext);
    cout << "Decrypted text: " << decrypted << endl;
    displayASCII(decrypted);
    
    // Verification
    cout << "\nVerification:" << endl;
    if (plaintext == decrypted) {
        cout << "Success! Original and decrypted texts match." << endl;
    } else {
        cout << "Error! Decryption failed." << endl;
    }
    
    return 0;
}
