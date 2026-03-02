#include <iostream>
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    string indexNumber;

public:
    Student(string n, string i) {
        name = n;
        indexNumber = i;
    }

    string getName() {
        return name;
    }

    string getIndex() {
        return indexNumber;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Index Number: " << indexNumber << endl;
        cout << "------------------------" << endl;
    }
};

vector<Student> students;

// Function to register student
void addStudent() {
    string name, index;

    cout << "Enter student name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter index number: ";
    getline(cin, index);

    Student s(name, index);
    students.push_back(s);

    cout << "Student registered successfully!\n";
}

// Function to view students
void viewStudents() {
    if (students.empty()) {
        cout << "No students registered.\n";
        return;
    }

    for (int i = 0; i < students.size(); i++) {
        students[i].display();
    }
}

int main() {
    int choice;

    do {
        cout << "\n=== DIGITAL ATTENDANCE SYSTEM ===\n";
        cout << "1. Register Student\n";
        cout << "2. View Students\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                viewStudents();
                break;
            case 3:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 3);

    return 0;
}