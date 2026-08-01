#include <iostream>
#include <vector>
#include <string>

using namespace std;

void addTask(vector<string>& tasks);
void viewTasks(const vector<string>& tasks);
void deleteTask(vector<string>& tasks);

int main() {
    vector<string> tasks;
    int choice;

    while (true) {
        cout << "============================" << endl;
        cout << "      TO-DO LIST MENU" << endl;
        cout << "============================" << endl;
        cout << "1. Add task" << endl;
        cout << "2. View tasks" << endl;
        cout << "3. Delete task" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";

        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            addTask(tasks);
        }
        else if (choice == 2) {
            viewTasks(tasks);
        }
        else if (choice == 3) {
            deleteTask(tasks);
        }
        else if (choice == 4) {
            cout << "Goodbye!" << endl;
            break;
        }
        else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}


void addTask(vector<string>& tasks) {
    string task;

    cout << "Enter task: ";
    getline(cin, task);

    tasks.push_back(task);

    cout << "Task added: \"" << task << "\"" << endl;
}
void viewTasks(const vector<string>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks available." << endl;
        return;
    }

    cout << "Your tasks:" << endl;

    for (int i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i] << endl;
    }
}
void deleteTask(vector<string>& tasks) {
    int number;

    if (tasks.empty()) {
        cout << "No tasks to delete." << endl;
        return;
    }

    viewTasks(tasks);

    cout << "Enter task number to delete: ";
    cin >> number;

    if (number < 1 || number > tasks.size()) {
        cout << "Invalid task number!" << endl;
        return;
    }

    cout << "Task \"" << tasks[number - 1] << "\" has been removed." << endl;

    tasks.erase(tasks.begin() + number - 1);
}