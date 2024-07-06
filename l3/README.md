# C++ Advanced Programming Laboratory - Lab 3

## Overview
This repository includes laboratory exercises for the C++ programming course, which covers namespaces, parameter passing mechanisms, function overloading, and other advanced C++ programming concepts. These topics are critical for managing larger projects and writing efficient and maintainable code.

## Contents
- **Namespace Usage**
- **Parameter Passing Mechanisms**
- **Function Overloading**
- **Scope and Visibility**
- **Lab Assignment**

## Lab Exercises

### Namespace
- **Introduction to Namespaces**: Understanding the use of namespaces to avoid name collisions in large programs. The exercises include defining and using namespaces, and the impact of using declarations and directives.

### Parameter Passing Mechanisms
- **By Value and By Reference**: Detailed exercises to differentiate between passing parameters by value and by reference, including modifications to the standard behavior to optimize program performance.

### Function Overloading
- **Implementing Overloaded Functions**: Exercises on creating multiple functions with the same name but different parameters, demonstrating how C++ differentiates these functions based on their signature.

### Scope and Visibility
- **Understanding Local and Global Scope**: Discussion and examples on the scope and visibility of variables and functions within different blocks of code.

## Lab Assignment: Student Catalog System

### Objective
To revise the student catalog application from Lab 1, incorporating:
- Dynamic memory allocation and deallocation.
- Reading, displaying, and sorting student data based on various criteria (alphabetically, by name length, by grade).

### Tasks
1. **Catalog Definition**:
   - Implement a struct for `Student` with private fields for name and grade, and public accessor and mutator functions.
   - Define a `Grupa` struct to manage a group of students, including functions for reading and displaying student data.
   - Create a `Catalog` struct that manages multiple groups, with functions to set comparison functions for sorting, and to manage memory.

2. **Function Implementation**:
   - Define global comparison functions for sorting students.
   - Implement all member functions of `Student`, `Grupa`, and `Catalog`.

3. **Memory Management**:
   - Ensure proper handling of dynamic memory to prevent leaks.

### Expected Deliverables
- Complete source code for the structs and their functions.
- Documentation explaining each component and its function.

## Usage and Testing
- Instructions for compiling and running the program.
- Test cases to verify each component and functionality.

## Discussion
- Compare different parameter passing mechanisms and their use cases.
- Discuss the benefits of using namespaces in large projects and how they can help manage complex software architectures.

