# 12-Hour and 24-Hour Clock

This C++ program demonstrates the functionality of 12-hour and 24-hour clocks. It allows you to interactively manipulate the time, adding hours, minutes, and seconds to both types of clocks.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Classes](#classes)
- [How to Run](#how-to-run)

## Introduction

This program showcases two clock types: a 12-hour clock and a 24-hour clock. It provides methods to add hours, minutes, and seconds to both clocks. 
The program is written in C++ and utilizes class inheritance and time functions.

## Features

- Display the current time for both 12-hour and 24-hour clocks.
- Increment hours, minutes, and seconds for both clock types.
- The 12-hour clock includes a meridian (AM/PM) indicator that changes appropriately.
- The program provides an interactive menu for performing clock operations.


## Classes

### Clock

- Base class representing time with hours, minutes, and seconds.

### Hour12

- Derived class from `Clock`, representing a 12-hour clock with AM/PM indicator.
- Methods to add hours, minutes, and seconds, considering the AM/PM transition.

### Hour24

- Derived class from `Clock`, representing a 24-hour clock.
- Methods to add hours, minutes, and seconds.

## How to Run

1. Open a terminal or command prompt.
2. Navigate to the directory containing the compiled executable.
3. Run the executable.
4. Follow the on-screen instructions to interact with the program.

# Summarize the project and what problem it was solving.
  The project is a C++ program that implements both 12-hour and 24-hour clocks, allowing users to manipulate the time by adding hours, minutes, and seconds. 
  The primary goal is to showcase object-oriented programming concepts and time manipulation functionalities.

# What did you do particularly well?
  The class hierarchy is effectively organized, encapsulating the clock representations and their operations. The usage of time functions to initialize clock instances enhances the program's realism.

# Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
  Error Handling: Implement robust error handling for user input to prevent unexpected behaviors.
  Menu Improvements: Provide clearer user instructions and feedback within the menu.
  Code Reusability: Refactor code for repetitive tasks like AM/PM transition logic to increase code reusability and readability.
  Comments: Add comments to clarify complex logic or important sections of code.
  Unit Testing: Integrate unit tests to ensure the correctness of clock operations.

# Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
  The logic for handling AM/PM transitions in the 12-hour clock class might have been challenging, particularly ensuring smooth transitions and synchronization. 
  This was overcome by breaking down the logic into separate functions and testing thoroughly. Resources such as C++ documentation, online tutorials, and programming
  communities can provide valuable insights when facing coding challenges.

# What skills from this project will be particularly transferable to other projects or course work?
  The understanding of class inheritance, encapsulation, and polymorphism gained from this project can be transferred to other object-oriented programming languages. Additionally,
  the experience in working with time-related functions can be applied to various applications involving time manipulation.

# How did you make this program maintainable, readable, and adaptable?
  Maintainability: By structuring the code into well-defined classes, maintaining and extending the code becomes easier.
  Readability: Using descriptive variable names, adding comments, and following consistent indentation contribute to code readability.
  Adaptability: The modular structure of the code and the separation of concerns allow for easier modification or extension without affecting 
  other parts of the program. This adaptability simplifies future improvements or feature additions.
