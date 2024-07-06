# C++ Data Structures Laboratory

## Overview
This repository contains laboratory exercises and assignments for the C++ programming course, focusing on the definition and utilization of data structure types in C and C++. The lab aims to deepen the understanding of data structures through practical application in C and C++, emphasizing the differences and advantages of each approach.

## Contents
- **Lab Exercises**:
  - **C Implementation**: Implementation of data structures using C.
  - **C++ Implementation**: Enhancement using C++ features.

- **Assignments**:
  - **Student Catalog**: A comprehensive assignment to implement a catalog of students, utilizing dynamic memory management and data structure handling in C++.

## Lab Exercises

### C Implementation
1. **Defining the Student Structure**:
   - Create a `student` structure with attributes like student ID, name, gender, and grade.
   - Include function pointers for data input and output operations.

2. **Dynamic Memory Allocation**:
   - Dynamically allocate an array for storing `student` instances.

3. **Function Pointers**:
   - Initialize function pointers to point to the appropriate functions for reading and writing data.

4. **Data Handling**:
   - Implement functions to read and write `student` data and process the array of students using these function pointers.

### C++ Implementation
1. **Enhancing Student Structure**:
   - Integrate member functions within the `student` structure to handle data input and output.

2. **Member Functions**:
   - Define the member functions externally and utilize them to manage student data.

3. **Data Processing**:
   - Process an array of `student` instances using the defined member functions.

## Assignment: Student Catalog

### Objective
Create a `catalog` data structure containing:
- Number of students.
- A dynamically allocated array of strings.
- Member functions for alphabetical and length-based sorting.
- Functions for reading and displaying data.

### Tasks
- **Catalog Creation**:
  - Define a function to dynamically allocate memory for a `catalog` instance and initialize it.
  
- **Catalog Destruction**:
  - Ensure proper memory management by defining a function to deallocate memory used by a `catalog`.

- **Functionality**:
  - Implement sorting functions and data handling functions within the catalog.

### Expected Deliverables
- Source code for the `student` and `catalog` data structures.
- Documentation and comments explaining the implementation.
- A simple program demonstrating the use of the `catalog` data structure.

## Memory Management
Remember to properly manage memory by deallocating any dynamically allocated memory using `delete[]` to prevent memory leaks.

## Discussion
Compare and discuss the procedural approach used in C with the object-oriented approach in C++ within your submissions.
