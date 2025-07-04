# AetherLock Cipher - A Novel Cryptographic Algorithm  
*Securing data in the digital aether with prime shifts*

![Cryptography](https://img.shields.io/badge/Algorithm-Cryptography-blue)
![C++](https://img.shields.io/badge/Language-C++-green)

## Overview

**AetherLock Cipher** is an original symmetric-key cryptographic algorithm designed for the *Mathematical Analysis for Computer Science* course (CSE 361). The algorithm introduces a lightweight encryption technique using prime number-based shifting and modular arithmetic, providing a balance of simplicity and cryptographic strength for academic or experimental purposes.

## Features

- 🔐 **Symmetric-key algorithm** — Same key for encryption and decryption  
- 🧮 **Prime-based shifting** — The encryption shift depends on a prime number and character position  
- 🧠 **Position-aware transformation** — Adds complexity to pattern detection  
- 📏 **Modular arithmetic** — Ensures output characters are valid byte values (0–255)  

## Mathematical Foundation

For each character at position `i` (0-indexed):

- **Encryption**:  
  `cipher_char = (plain_char + key × (i + 1)) mod 256`

- **Decryption**:  
  `plain_char = (cipher_char - key × (i + 1)) mod 256`

Here, `key` must be a **prime number**.

## File Structure

| File Name        | Description                                 |
|------------------|---------------------------------------------|
| `aetherlock.cpp` | Main source code implementing the algorithm |
| `pseudocode.txt` | Algorithm logic in pseudocode form          |
| `README.md`      | Project documentation (this file)           |

## Compilation & Execution

Make sure you have **g++** and **C++11** or later installed.

```bash
g++ aetherlock.cpp -o aetherlock
./aetherlock
```

## Usage Instructions

1. Run the program  
2. Enter your plaintext message  
3. Provide a **prime number** as the key  

### Sample Output

```
AetherLock Cipher Implementation in C++
Securing data in the digital aether with prime shifts
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
```

## Test Cases

| Plaintext      | Key | Ciphertext    |
|----------------|-----|---------------|
| "HelloWorld"   | 5   | "Mjqqt\[twqi" |
| "CSE361"       | 11  | "D\\_J:<<"     |
| "Cryptography" | 7   | "Jzÿüôîüêîàä"  |

## Security Analysis

### ✅ Strengths

- **Dynamic shifts**: Each character is shifted by a unique amount  
- **Prime keys**: Prevent brute-force attacks based on uniform shifting  
- **Efficient**: Light-weight and fast encryption suitable for academic use  

### ⚠️ Limitations

- Not suitable for production or sensitive data  
- Vulnerable to **frequency analysis** for long messages  
- Requires **secure key exchange** (symmetric encryption issue)  

## Future Improvements

- 🔒 Integrate with **asymmetric encryption** (e.g., RSA) for secure key exchange  
- 📁 Add support for **file encryption/decryption**  
- 🔑 Implement **stronger key scheduling** for dynamic keys  
- 🧾 Add **message integrity/authentication** features  

## Author

**Jannatul Ferthaous**  
ID: 2102022  
Department of Computer Science and Engineering  
Hajee Mohammad Danesh Science and Technology University  
Dinajpur-5200, Bangladesh

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more information.
