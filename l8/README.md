# C++ Object-Oriented Programming Laboratory - Lab 8

## Overview
This repository contains laboratory exercises for Lab 8 of the C++ programming course, which focuses on multiple inheritance and the order of constructor and destructor calls in C++. The lab aims to demonstrate the complexity and utility of these features in real-world programming scenarios.

## Contents
- **Constructor and Destructor Order**
- **Multiple Inheritance**
- **Lab Exercises**

## Lab Exercises

### 1. Constructor and Destructor Order
- **Understanding Constructor and Destructor Order**: Learn the sequence in which constructors and destructors are called in single and multiple inheritance scenarios to better manage resource allocation and deallocation.

### 2. Multiple Inheritance
- **Implementing Multiple Inheritance**: Explore the challenges and benefits of deriving a class from more than one base class.

## Lab Assignment: Implementations and Challenges

### Objective
Implement a series of classes demonstrating multiple inheritance and the proper use of constructors and destructors in a multi-class hierarchy.

### Tasks
1. **Person and Student Classes**:
   - Create `Person` and `Student` classes with appropriate constructors and destructors to understand their call sequence.
   - Implement methods for displaying profiles and managing student details.

2. **Multiple Inheritance with Professor Class**:
   - Develop a `Professor` class that inherits attributes from both a `Person` and an `Employee` class.
   - Ensure that the `Professor` class properly initializes all attributes inherited from the base classes.

### Expected Deliverables
- Source code for the `Person`, `Student`, `Employee`, and `Professor` classes.
- Documentation and comments explaining the role of each constructor and destructor.
- A main program that tests the functionality of these classes, particularly focusing on constructor and destructor behavior.

## Testing and Validation
- Instructions for compiling and running the program.
- Example outputs to verify the correct sequence of constructor and destructor calls.

## Discussion
- Discuss the use cases for multiple inheritance and scenarios where it might lead to complications.
- Evaluate how different inheritance strategies impact the initialization and cleanup processes of objects.

