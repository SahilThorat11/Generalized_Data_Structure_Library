
# Generalized Data Structure Library (GDSL) - Project Overview

## 1. Introduction

The **Generalized Data Structure Library (GDSL)** is a **C++ template-based library** that provides **reusable, type-safe, and efficient implementations** of commonly used data structures.  
It is designed for **students, developers, and competitive programmers** who want a **single, modular library** for learning or integrating data structures into projects.

---

## 2. Features

The library provides **generic implementations** of the following data structures:

| Type                  | Node Class         | Functionality Class  | Description |
|----------------------|------------------|-------------------|------------|
| Singly Linear         | `SinglyLLLnode`  | `SinglyLLL`       | Standard singly linked list |
| Singly Circular       | `SinglyCLLnode`  | `SinglyCLL`       | Circular version of singly linked list |
| Doubly Linear         | `DoublyLLLnode`  | `DoublyLLL`       | Doubly linked list with next & prev pointers |
| Doubly Circular       | `DoublyCLLnode`  | `DoublyCLL`       | Doubly linked list with circular connection |
| Stack                 | `Stacknode`      | `Stack`           | LIFO stack with push/pop/peek |
| Queue                 | `Queuenode`      | `Queue`           | FIFO queue with enqueue/dequeue |

---

## 3. Operations Supported

The following operations are implemented consistently across the data structures:

### Linked Lists:
- `InsertFirst(data)` – Inserts at the beginning
- `InsertLast(data)` – Inserts at the end
- `InsertAtPos(data, position)` – Inserts at a specific position
- `DeleteFirst()` – Deletes the first node
- `DeleteLast()` – Deletes the last node
- `DeleteAtPos(position)` – Deletes a node from a specific position
- `Display()` – Prints all elements
- `Count()` – Returns the number of elements

### Stack:
- `Push(data)` – Adds element to the top
- `Pop()` – Removes and returns the top element
- `Peep()` – Returns the top element without removing it
- `Display()` – Prints all stack elements
- `Count()` – Returns total elements

### Queue:
- `Enqueue(data)` – Adds element to the rear
- `Dequeue()` – Removes and returns the front element
- `Display()` – Prints all queue elements
- `Count()` – Returns total elements

---

## 4. Design Principles

- **Generic Templates:** All data structures are implemented with **C++ templates**, making them **type-safe and reusable**.  
- **Modular & Lightweight:** Entire library is in `gdsl.cpp`. Can be easily included in any project.  
- **Consistent Interfaces:** All classes use similar method names for ease of learning and usage.  
- **Efficient Memory Use:** Minimal memory overhead; optimized operations.  
- **Beginner-Friendly Documentation:** Each function is documented, making it **easy to understand**.

---

## 5. Example Usage

```cpp
#include "../library/gdsl.cpp"

int main() {
    DoublyLLL<int> dll;

    dll.InsertFirst(10);
    dll.InsertLast(20);
    dll.InsertAtPos(15, 2);
    dll.Display();   // Output: NULL<=> | 10 | <=> | 15 | <=> | 20 | <=> NULL

    dll.DeleteAtPos(2);
    dll.Display();   // Output: NULL<=> | 10 | <=> | 20 | <=> NULL

    cout << "Total nodes: " << dll.Count() << endl;
    return 0;
}
````

---
