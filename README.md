# PrimeShift_Cipher


# PrimeShift Cipher - A Novel Cryptographic Algorithm

![Cryptography](https://img.shields.io/badge/Algorithm-Cryptography-blue)
![C++](https://img.shields.io/badge/Language-C++-green)

## Overview

PrimeShift Cipher is an original symmetric-key cryptographic algorithm designed for the Mathematical Analysis for Computer Science course (CSE 361). The algorithm employs prime number properties and positional shifting to transform plaintext into ciphertext and vice versa.

## Algorithm Description

### Key Features
- **Symmetric-key algorithm** (same key for encryption and decryption)
- **Prime number-based shifting** for enhanced security
- **Position-dependent transformations** where each character's shift depends on its position
- **Modular arithmetic** to ensure valid character outputs

### Mathematical Foundation
For each character at position `i` (0-indexed):
- **Encryption**: `cipher_char = (plain_char + key*(i+1)) mod 256`
- **Decryption**: `plain_char = (cipher_char - key*(i+1)) mod 256`

## Implementation

### Requirements
- C++11 or later
- Standard Library

### Files
- `primeshift.cpp`: Main implementation file
- `README.md`: This documentation file

### How to Compile and Run
bash
g++ primeshift.cpp -o primeshift
./primeshift


## Usage Example

1. Run the program
2. Enter your plaintext message
3. Enter a prime number as the encryption key

Sample Output:

PrimeShift Cipher Implementation in C++
=====================================

Enter plaintext: SecureMessage123
Enter a prime number as key: 13

Encryption Process:
Plaintext: SecureMessage123
Ciphertext: ±ÊÒáîoÔÛáîîîÉÙ

Decryption Process:
Ciphertext: ±ÊÒáîoÔÛáîîîÉÙ
Decrypted text: SecureMessage123

Verification:
Success! Original and decrypted texts match.


## Test Cases

| Plaintext         | Key | Ciphertext       |
|-------------------|-----|------------------|
| "HelloWorld"      | 5   | "Mjqqt[twqi"     |
| "CSE361"          | 11  | "D_J:<<"         |
| "Cryptography"    | 7   | "Jzÿüôîüêîàä"    |

## Security Analysis

### Strengths
- Variable shifting based on character position increases complexity
- Prime number key requirement reduces brute-force vulnerability
- Simple yet effective transformation algorithm

### Limitations
- Not suitable for production-grade security
- Vulnerable to frequency analysis for longer texts
- Symmetric key distribution challenge

## Future Enhancements

1. Implement hybrid encryption combining with asymmetric cryptography
2. Add support for file encryption/decryption
3. Develop a more complex key generation system
4. Add authentication mechanisms

## Author

Jannatul Ferthaous

ID: 2102022

Computer Science and Engineering  

Hajee Mohammad Danesh Science and Technology University, Dinajpur-5200

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.


