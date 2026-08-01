#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;


struct Student {
    string name;
    int id;
    vector<double> scores;
};



double calculateAverage(const Student& student) {
    double total = 0;

    for (double score : student.scores) {
        total += score;
    }

    return total / student.scores.size();
}



void addStudent(vector<Student>& students) {

    Student newStudent;

    cout << "Student name: ";
    cin.ignore();
    getline(cin, newStudent.name);

    cout << "Student ID: ";
    cin >> newStudent.id;

    int numberOfScores;

    cout << "How many scores? ";
    cin >> numberOfScores;


    for (int i = 0; i < numberOfScores; i++) {
        double score;

        cout << "Enter score " << i + 1 << ": ";
        cin >> score;

        newStudent.scores.push_back(score);
    }


    students.push_back(newStudent);

    cout << "Student \"" << newStudent.name 
         << "\" added successfully.\n";
}


// Function to display all students
void displayStudents(const vector<Student>& students) {

    if (students.empty()) {
        cout << "No students have been added yet.\n";
        return;
    }


    cout << "\n========== STUDENT RECORDS ==========\n";


    for (Student student : students) {

        cout << "Name: " << student.name << endl;
        cout << "ID: " << student.id << endl;

        cout << "Scores: ";

        for (double score : student.scores) {
            cout << score << " ";
        }

        cout << endl;

        cout << fixed << setprecision(2);
        cout << "Average: " 
             << calculateAverage(student) 
             << endl;

        cout << "-------------------------------------\n";
    }
}



void findStudentAverage(const vector<Student>& students) {

    int searchID;

    cout << "Enter student ID: ";
    cin >> searchID;


    for (Student student : students) {

        if (student.id == searchID) {

            cout << fixed << setprecision(2);

            cout << student.name 
                 << "'s average score: "
                 << calculateAverage(student)
                 << endl;

            return;
        }
    }


    cout << "Student ID not found.\n";
}



int main() {

    vector<Student> students;

    int choice;


    while (true) {

        cout << "\n================================\n";
        cout << "   STUDENT RECORD SYSTEM MENU\n";
        cout << "================================\n";

        cout << "1. Add student\n";
        cout << "2. Display all students\n";
        cout << "3. Calculate average score\n";
        cout << "4. Quit\n";

        cout << "Enter your choice (1-4): ";
        cin >> choice;


        switch(choice) {

            case 1:
                addStudent(students);
                break;


            case 2:
                displayStudents(students);
                break;


            case 3:
                findStudentAverage(students);
                break;


            case 4:
                cout << "Exiting program...\n";
                return 0;


            default:
                cout << "Invalid choice. Please enter 1-4.\n";
        }
    }


    return 0;
}