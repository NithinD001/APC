# Academic Performance Calculator

## Overview
This project is a simple console-based GPA (Grade Point Average) and CGPA (Cumulative Grade Point Average) calculator developed in C++. It allows users to compute their GPA for individual semesters based on course credits and grades, as well as calculate the CGPA over multiple semesters. The program also provides information on the method used for these calculations.

## Features
- **Calculate GPA:** Input the credits and grades for multiple subjects to calculate the GPA for a single semester.
- **Calculate CGPA:** Input the GPA for multiple semesters to calculate the overall CGPA.
- **Method Information:** Displays the formulae used for calculating GPA and CGPA.
- **User-friendly Menu:** An easy-to-use menu system that guides users through the process.

## Requirements
- A C++ compiler (e.g., GCC, Clang, MSVC).
- A terminal or command prompt to run the executable.

Installation
1. **Clone the Repository:**
```console
git clone https://github.com/NithinD001/APC.git
```
2. **Compile the Code:**
Open your terminal or command prompt and navigate to the directory where the source code is located. Then, compile the code using a C++ compiler. For example, with `g++`:
```console
g++ APC.cpp -o GPA_CGPA_Calculator
```
3. **Run the Executable:**
After compiling, run the executable from your terminal or command prompt:
```bash
./GPA_CGPA_Calculator   # On Unix-based systems (Linux, macOS)
GPA_CGPA_Calculator.exe # On Windows
```
## Usage
1. **Launch the Application:** Run the executable as described above.
2. **Main Menu Options:**
    - **Calculate GPA:** Allows you to input the number of subjects, their corresponding credits, and grades to calculate the GPA.
    - **Calculate CGPA:** Allows you to input the GPA for each semester to calculate the overall CGPA.
    - **Method Information:** Displays the formulas used to calculate GPA and CGPA.
    - **Exit Application:** Closes the program.
3. **Follow On-Screen Prompts:** Enter your choices and input data as prompted by the application.
4. **Error Handling:** The program includes basic input validation to handle invalid inputs gracefully.

## Example
### Calculating GPA
1. Select option `1` from the main menu.
2. Enter the number of subjects (e.g., `3`).
3. Input the credit and grade for each subject:
```console
-------------- GPA Calculating -----------------
How many subject's points do you want to calculate? : 3
Enter the credit for subject 1: 3
Enter the point for subject 1: 4.0
Enter the credit for subject 2: 4 
Enter the point for subject 2: 3.7
Enter the credit for subject 3: 2 
Enter the point for subject 3: 3.5
Total Points: 33.8 . Total Credits: 9 . Total GPA: 3.75556 .
```
4. The program calculates and displays the GPA based on the provided inputs.

### Calculating CGPA
1. Select option `2` from the main menu.
2. Enter the number of semesters (e.g., `2`).
3. Input the GPA for each semester:
```console
-------------- CGPA Calculating -----------------
How many semester results do you want to input? : 2
Enter Semester 1 Result (GPA): 3.7
Enter Semester 2 Result (GPA): 3.5
******** Your CGPA is 3.6 **********
```
4. The program calculates and displays the CGPA based on the provided inputs.

## Method of Calculation

- **GPA:** Calculated as the sum of the product of credits and grade points for all subjects, divided by the total number of credits.

<div style="text-align: center;">

  $\text{GPA} = \frac{\sum(\text{Credit} \times \text{Grade Point})}{\sum \text{Credits}}$

</div>

- **CGPA:** Calculated as the average of all GPAs from the individual semesters.

<div style="text-align: center;">

$$
\text{CGPA} = \frac{\sum \text{GPA}}{\text{Number of Semesters}}
$$

</div>

## Contributing
Contributions are welcome! Feel free to open issues or submit pull requests with improvements.