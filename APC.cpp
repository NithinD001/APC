#include <iostream>
#include <vector>

using namespace std;

void calculateGPA();
void calculateCGPA();
void method();

int main() {
    int input;
    do {
        cout << "--------------------------------------------------------------------------" << endl;
        cout << "                    GPA & CGPA Calculator (Developed by Ohid)             " << endl;
        cout << "--------------------------------------------------------------------------\n" << endl;
        cout << "            MENU:" << endl;
        cout << "                   1. Calculate GPA (Grade Point Average)" << endl;
        cout << "                   2. Calculate CGPA (Cummulative Grade Point Average)" << endl;
        cout << "                   3. Method that is applied here for calculating GPA & CGPA" << endl;
        cout << "                   4. Exit Application" << endl;
        cout << "--------------------------------------------------------------------------" << endl;

        cout << "Enter your choice: ";
        cin >> input;

        switch (input) {
            case 1:
                calculateGPA();
                break;
            case 2:
                calculateCGPA();
                break;
            case 3:
                method();
                break;
            case 4:
                cout << "Exiting application." << endl;
                break;
            default:
                cout << "You have entered an invalid input. Please try again!" << endl;
        }
    } while (input != 4);

    return 0;
}

void calculateGPA() {
    int numSubjects;
    cout << "-------------- GPA Calculating -----------------" << endl;
    cout << "How many subject's points do you want to calculate? : ";
    cin >> numSubjects;

    if (numSubjects <= 0) {
        cout << "Invalid number of subjects." << endl;
        return;
    }

    vector<float> credits(numSubjects);
    vector<float> points(numSubjects);

    for (int i = 0; i < numSubjects; ++i) {
        cout << "Enter the credit for subject " << i + 1 << ": ";
        cin >> credits[i];
        cout << "Enter the point for subject " << i + 1 << ": ";
        cin >> points[i];
    }

    float totalPoints = 0;
    float totalCredits = 0;

    for (int i = 0; i < numSubjects; ++i) {
        totalPoints += credits[i] * points[i];
        totalCredits += credits[i];
    }

    if (totalCredits == 0) {
        cout << "Total credits cannot be zero." << endl;
    } else {
        cout << "Total Points: " << totalPoints << " . Total Credits: " << totalCredits << " . Total GPA: " << totalPoints / totalCredits << " ." << endl;
    }

    int inMenu;
    do {
        cout << "\n1. Calculate Again" << endl;
        cout << "2. Go Back to Main Menu" << endl;
        cout << "3. Exit This App \n" << endl;
        cout << "Your Input: ";
        cin >> inMenu;

        switch (inMenu) {
            case 1:
                calculateGPA();
                return;
            case 2:
                return;
            case 3:
                exit(EXIT_SUCCESS);
            default:
                cout << "You have entered an invalid input. Please choose again!" << endl;
        }
    } while (inMenu != 2);
}

void calculateCGPA() {
    int numSemesters;
    cout << "-------------- CGPA Calculating -----------------" << endl;
    cout << "How many semester results do you want to input? : ";
    cin >> numSemesters;

    if (numSemesters <= 0) {
        cout << "Invalid number of semesters." << endl;
        return;
    }

    vector<float> semesterResults(numSemesters);
    float totalGPA = 0;

    for (int i = 0; i < numSemesters; ++i) {
        cout << "Enter Semester " << i + 1 << " Result (GPA): ";
        cin >> semesterResults[i];
        totalGPA += semesterResults[i];
    }

    cout << "******** Your CGPA is " << totalGPA / numSemesters << " **********" << endl;

    int inMenu;
    do {
        cout << "\n1. Calculate Again" << endl;
        cout << "2. Go Back to Main Menu" << endl;
        cout << "3. Exit This App \n" << endl;
        cout << "Your Input: ";
        cin >> inMenu;

        switch (inMenu) {
            case 1:
                calculateCGPA();
                return;
            case 2:
                return;
            case 3:
                exit(EXIT_SUCCESS);
            default:
                cout << "You have entered an invalid input. Please choose again!" << endl;
        }
    } while (inMenu != 2);
}

void method() {
    cout << "--------------- Method of Calculating GPA & CGPA ---------------" << endl;
    cout << "GPA = Sum of (Credit * Point) / Total Credits" << endl;
    cout << "CGPA = Sum of GPA / Number of Semesters" << endl;
    cout << "-----------------------------------------------------------------" << endl;

    int inMenu;
    do {
        cout << "1. Go Back to Main Menu" << endl;
        cout << "2. Exit This App \n" << endl;
        cout << "Your Input: ";
        cin >> inMenu;

        switch (inMenu) {
            case 1:
                return;
            case 2:
                exit(EXIT_SUCCESS);
            default:
                cout << "You have entered an invalid input. Please choose again!" << endl;
        }
    } while (inMenu != 1 && inMenu != 2);
}