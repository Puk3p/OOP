# C++ Object-Oriented Programming Laboratory - Lab 9

## Overview
This repository contains laboratory exercises for Lab 9 of the C++ programming course, focusing on the use of base class pointers, virtual methods, and the concept of polymorphism in object-oriented programming. The lab aims to provide a practical understanding of how these concepts enable flexible and reusable code.

## Contents
- **Base Class Pointers**
- **Virtual Methods and Polymorphism**
- **Virtual Destructors**
- **Abstract Classes**
- **Lab Exercises**

## Lab Exercises

### 1. Base Class Pointers
- **Understanding Base Class Pointers**: Learn how pointers to a base class can point to objects of derived classes and the implications of such assignments.

### 2. Virtual Methods and Polymorphism
- **Implementing Virtual Methods**: Explore how virtual methods allow derived classes to provide specific implementations that are invoked even when using base class pointers.
- **Exploring Polymorphism**: Understand how polymorphism works in practice through dynamic binding of methods.

### 3. Virtual Destructors
- **Using Virtual Destructors**: Ensure resources are properly released when objects are deleted through base class pointers by implementing virtual destructors.

### 4. Abstract Classes
- **Working with Abstract Classes**: Create classes that can only be used as base classes for other derived classes and cannot be instantiated on their own.

## Lab Assignment: Implementations and Challenges

### Objective
Create a system of classes that demonstrates effective use of polymorphism, virtual methods, and abstract classes to model real-world scenarios.

### Tasks
1. **Book and Collection Classes**:
   - Develop a `Book` class with a virtual display method and a `Collection` class that extends `Book` and manages a collection of books.
   - Implement polymorphic behavior where the type of book determines how information is displayed.

2. **Shape Classes with Abstract Base Class**:
   - Create an abstract `Shape` class with a pure virtual function for area calculation.
   - Extend `Shape` with concrete classes like `Rectangle` and `Circle`, each implementing the area calculation.

3. **Managing Shapes**:
   - Develop a function to find the shape with the maximum area using a vector of pointers to `Shape`.
   - Implement a function to display properties of shapes polymorphically.

### Expected Deliverables
- Source code for all classes demonstrating base class pointers, virtual methods, polymorphism, and abstract classes.
- Documentation explaining the purpose and functionality of each part of the code.
- A main program that demonstrates the dynamic behavior of these concepts through various object manipulations.

## Testing and Validation
- Instructions for compiling and running the program.
- Example test cases to verify the dynamic binding of methods and proper memory management.

## Discussion
- Discuss the impact of virtual methods on program behavior.
- Analyze the benefits and potential pitfalls of using polymorphism in software design.

