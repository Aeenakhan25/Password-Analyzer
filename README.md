# 🔐 Password Analyzer & Cracking Simulator (Python)

---

## 📌 OVERVIEW / DESCRIPTION

A Python-based console application that analyzes password strength, securely stores passwords using basic encryption, and simulates a brute-force attack to demonstrate how passwords can be cracked.

The system evaluates password complexity based on character diversity (uppercase, lowercase, digits, symbols), encrypts it using XOR logic, and stores it in a file. It then performs a cracking simulation using random password generation to highlight the importance of strong passwords in cybersecurity.

---

## 🚀 KEY HIGHLIGHTS

- ✔️ Password strength analysis  
- ✔️ XOR-based encryption  
- ✔️ File handling for storage  
- ✔️ Brute-force cracking simulation  
- ✔️ Random password generation  
- ✔️ Demonstrates weak password risks  

---

## ⚙️ FEATURES / CORE MODULES

### Password Analysis Module
- Detects:
  - Lowercase letters  
  - Uppercase letters  
  - Digits  
  - Special characters  
- Classifies password as:
  - Weak  
  - Medium  
  - Strong  

---

### Encryption Module
- Uses XOR operation with a fixed key  
- Converts plaintext password → encrypted form  

---

### File Storage Module
- Stores encrypted passwords in:
- saved_password.txt
- - Uses append mode for continuous storage  

---

### Password Generator Module
- Generates random passwords using:
- a–z  
- A–Z  
- 0–9  
- Symbols  

---

### Cracking Simulation Module
- Repeatedly generates random guesses  
- Compares with original password  
- Stops when match is found  
- Counts total attempts  

---

## 🎯 OBJECTIVES

- Understand password strength evaluation  
- Learn basic encryption techniques  
- Simulate brute-force attacks  
- Practice file handling in Python  
- Explore randomness and algorithms  

---

## 🏗️ ARCHITECTURE OVERVIEW

```text
+----------------------+
|     User Input       |
+----------+-----------+
         |
         v
+----------------------+
| Password Analysis    |
+----------+-----------+
         |
         v
+----------------------+
| XOR Encryption       |
+----------+-----------+
         |
         v
+----------------------+
| File Storage         |
+----------+-----------+
         |
         v
+----------------------+
| Brute Force Engine   |
+----------+-----------+
         |
         v
+----------------------+
| Result Display       |
+----------------------+
```

## 🧠 CONCEPTS USED

- **Modular Programming**
  - Functions used for analysis, encryption, storage, and simulation

- **File Handling**
  - Reading/writing using `open()` with modes like `'a'`, `'r'`

- **String Manipulation**
  - Iterating through characters and comparing strings

- **Randomization**
  - Generating guesses using `random.choice()` / `random.randint()`

-  **Bitwise Operations**
  - XOR (`^`) used for simple encryption/decryption

-  **Control Flow**
  - `while` loops for brute-force simulation  
  - `if-elif-else` for decision making  

-  **Character Analysis**
  - Using methods like:
    - `str.islower()`  
    - `str.isupper()`  
    - `str.isdigit()`  

---

## 💻 TECHNOLOGIES

-  **Language**
  - Python 3.x  

-  **Libraries / Modules**
  - `random` → password generation  
  - `string` → character sets (ascii, digits, symbols)  
  - `time` → optional timing / seeding  
  - Built-in file handling (`open`)  

-  **Environment**
  - CLI / Terminal-based execution  
  - Works on Windows, Linux, macOS  

---

## SYSTEM FLOW
+--------+
| Start  |
+---+----+
    |
    v
+----------------------+
| Enter Password       |
+----------+-----------+
           |
           v
+----------------------+
| Analyze Strength     |
+----------+-----------+
           |
           v
+----------------------+
| Encrypt Password     |
+----------+-----------+
           |
           v
+----------------------+
| Save to File         |
+----------+-----------+
           |
           v
+----------------------+
| Start Simulation     |
+----------+-----------+
           |
           v
+----------------------+
| Generate Guess       |
+----------+-----------+
           |
           v
+----------------------+
| Compare Password     |
+----+-----------+-----+
     |           |
     v           v
   [No]        [Yes]
     |           |
     v           v
Repeat Loop   Show Result
                  |
                  v
               +------+
               | End  |
               +------+

---             

## 🔮 FUTURE IMPROVEMENTS

- **Secure Hashing**
  - Replace XOR with `bcrypt`, `hashlib (SHA-256)`

- **Dictionary Attack**
  - Use wordlists instead of random guesses  

-  **Performance Metrics**
  - Track execution time and attempts per second  

-  **GUI Development**
  - Build interface using Tkinter / PyQt  

-  **Entropy Calculation**
  - More accurate password strength scoring  

-  **Multi-threading**
  - Parallelize cracking process  

-  **Authentication System**
  - Add login/signup with stored credentials  

-  **Visualization**
  - Show cracking progress dynamically  

---
