# 🔁 Circular Queue in C (Circular Array Implementation)

[![Language](https://img.shields.io/badge/Language-C-blue)](https://en.wikipedia.org/wiki/C_(programming_language))  
[![License](https://img.shields.io/badge/License-Academic-lightgrey)](https://ufpb.br)  
[![Build](https://img.shields.io/badge/Build-Makefile-green)](#how-to-run)

## 📚 Overview

This project is an academic implementation of a **Circular Queue** (FIFO structure) using a **static array with circular indexing**, developed as part of the _Data Structures_ course at **UFPB (Universidade Federal da Paraíba)**.

It demonstrates fundamental queue operations with a focus on pointer arithmetic and buffer wrap-around techniques.

---

## ✅ Features

- 🔄 Circular insertion/removal using modular arithmetic
- 🧠 Front element peek
- 📈 Full/empty state checks
- 🛠️ `Makefile` for easy build
- 📎 Header file (`.h`) included for modularity
- 🧪 Ready-to-run test case in `main.c`

---

## 📁 File Structure

```

📦 circular\_queue\_project/
├── circular\_queue.c      # Queue implementation
├── circular\_queue.h      # Queue header/interface
├── main.c                # Usage example and test cases
├── Makefile              # Compilation automation
└── README.md             # This file

````

---

## ⚙️ How to Run

### Prerequisites:
- GCC compiler
- Make utility (Linux/macOS/WSL or MinGW)

### Build and execute:
```bash
make          # Compiles the project into 'queue_test'
./queue_test  # Run the compiled executable
````

### Clean build files:

```bash
make clean
```

---

## 🧪 Sample Output

```
Front of queue: 10
Removed: 10
Queue is full
Queue is not empty
```

---

## 🧠 Queue Operations Implemented

| Operation        | Function          | Description                             |
| ---------------- | ----------------- | --------------------------------------- |
| Enqueue          | `enqueue(q, val)` | Inserts element at rear of the queue    |
| Dequeue          | `dequeue(q, &x)`  | Removes front element from the queue    |
| Peek             | `peek(q, &x)`     | Reads front element without removing it |
| Check Full       | `isFull(q)`       | Returns 1 if queue is full              |
| Check Empty      | `isEmpty(q)`      | Returns 1 if queue is empty             |
| Initialize Queue | `initQueue(q)`    | Resets queue pointers and size          |

---

## 🚀 Educational Objective

This implementation reinforces:

* Manual memory and index management
* Use of modular arithmetic for wrap-around
* Separation of interface (`.h`) and implementation (`.c`)
* Basic unit testing via `main.c`

---

## 👨‍💻 Author

**Vinicius Mangueira**
*Data Science & AI Student*
Federal University of Paraíba – 2025
📧 [viniciusmangueira04@gmail.com](mailto:viniciusmangueira04@gmail.com)
[🔗 LinkedIn](https://www.linkedin.com/in/vinicius-mangueira-0b8285224/)

---

## 📎 License

This project is for educational use under the academic policy of UFPB.
Do not copy without proper reference in your academic submissions.

```

