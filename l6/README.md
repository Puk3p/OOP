# C++ Object-Oriented Programming Laboratory - Lab 6

## Overview
This repository includes laboratory exercises for Lab 6 of the C++ programming course, which explores the concepts of friend functions and classes, and operator overloading in C++. This lab aims to provide practical experience in enhancing the functionality of custom data types using these advanced features.

## Contents
- **Friend Functions and Classes**
- **Operator Overloading**
- **Increment and Decrement Operators**
- **Assignment Operator Overloading**
- **Lab Exercises**

## Lab Exercises

### 1. Friend Functions and Classes
- **Understanding Friendships**: Learn how to grant access to private and protected members of a class to global functions and other classes using the `friend` keyword.

### 2. Operator Overloading
- **Basic Operator Overloading**: Implement operators like `+`, `*`, and `-` for custom types such as complex numbers or matrices.
- **Advanced Operator Overloading**: Explore overloading more complex operators such as increment (`++`) and decrement (`--`), both in prefix and postfix forms.

### 3. Assignment Operator Overloading
- **Deep Copy Assignment**: Customize the behavior of the assignment operator to handle deep copy operations, especially when dynamic memory allocation is involved.

## Lab Assignment: Implementations and Challenges

### Objective
Implement a series of classes that utilize friend functions and overloaded operators to demonstrate how these features can be used to create more intuitive and powerful interfaces for custom types.

### Tasks
1. **Complex Number Class**:
   - Overload arithmetic operators to allow natural mathematical operations.
   - Implement friend functions that can access private members.

2. **Custom String Class**:
   - Overload operators like `+` (concatenation), `=` (assignment), and `==` (equality).
   - Provide a method to search for a substring within the string and compare strings lexicographically.

3. **Set Class for Complex Numbers**:
   - Overload operators such as `+=` and `+` to handle sets of complex numbers, allowing operations like union and addition of elements.
   - Implement copy constructors and assignment operators to manage deep copies.

### Expected Deliverables
- Source code for all classes with operator overloading and friend declarations.
- Documentation explaining the purpose and usage of each class and method.
- A main program that demonstrates the functionality of each class, including proper memory management.

## Testing and Validation
- Instructions for compiling and running the program.
- Test cases to validate the correct behavior of overloaded operators and friend functions.

## Discussion
- Discuss the design choices involved in deciding which operators to overload and the implications on usability and performance.
- Analyze the security and design implications of using friend classes and functions.

