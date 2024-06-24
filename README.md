# ItemTracker Project

## Summary
The ItemTracker project is designed to analyze the frequency of items purchased at the Corner Grocer. It reads item data from a text file, processes the data to determine the frequency of each item, and provides multiple functionalities through a user-friendly menu system. The program offers options to get the frequency of a specific item, print all item frequencies, print a histogram of item frequencies, and exit the program. Additionally, it writes the frequencies to a backup file for data persistence.

## Project Files
1. **ItemTracker.h** - Contains the class declaration for `ItemTracker`.
2. **ItemTracker.cpp** - Contains the class definitions (implementations) for `ItemTracker`.
3. **main.cpp** - Contains the main function to create `ItemTracker` objects, prompt the user for item details, and display the desired outputs.

## What Problem It Was Solving
The project aimed to provide a solution for tracking the frequency of grocery items purchased throughout the day. This data helps the store to analyze purchase patterns and optimize their product placement for better customer experience.

## What I Did Particularly Well
I effectively implemented the use of C++ maps to handle the frequency counting of items, ensuring efficient data retrieval and storage. The program is well-structured, and the menu-driven interface is intuitive and user-friendly.

## Areas for Enhancement
While the code functions correctly, it could be enhanced by adding input validation to handle erroneous user inputs more gracefully. Implementing more detailed error handling would make the program more robust and secure.

## Most Challenging Code
The most challenging part of the code was managing the dynamic memory allocation for the item frequency map and ensuring the program handled file input/output operations correctly. I overcame these challenges by thoroughly testing the code and utilizing resources such as C++ documentation and community forums.

## Transferable Skills
This project helped me improve my skills in C++ programming, particularly in file handling, data structures, and dynamic memory management. These skills are highly transferable to other programming projects and coursework, especially those involving data processing and analysis.

## Maintainability, Readability, and Adaptability
To ensure maintainability, readability, and adaptability, I followed industry-standard best practices such as using clear and descriptive variable names, writing in-line comments to explain code functionality, and modularizing the code by separating class definitions and implementations into different files. This approach makes the code easier to understand, maintain, and extend in the future.

## Usage
To compile and run the program:
1. Ensure all files (`ItemTracker.h`, `ItemTracker.cpp`, `main.cpp`) are in the same directory.
2. Use the following command to compile the program:
   ```sh
   g++ -o ItemTrackerProgram main.cpp ItemTracker.cpp
