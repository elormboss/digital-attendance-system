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
    void markAttendance() {
        void attendanceSummary() {

    int present=0, absent=0, late=0;

    for(int i=0; i<studentCount; i++) {
        if(attendanceStatus[i]=="P") present++;
        else if(attendanceStatus[i]=="A") absent++;
        else if(attendanceStatus[i]=="L") late++;
    }

    cout << "\nATTENDANCE SUMMARY\n";
    cout << "Present: " << present << endl;
    cout << "Absent: " << absent << endl;
    cout << "Late: " << late << endl;
}
    for(int i = 0; i < studentCount; i++) {
        cout << "Mark attendance for " << students[i].name << endl;
        cout << "P = Present, A = Absent, L = Late: ";
        cin >> attendanceStatus[i];
    }
}
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
        cout << "1. Register Student\n";
        cout << "2. View Students\n";
        cout << "3. Create Lecture Session\n";
        cout << "4. Mark Attendance\n";
        cout << "5. Attendance Summary\n";
        cout << "0. Exit\n";
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
                session.createSession();
                session.displaySession();
                break;
            case 4:
                markAttendance();
                break;

            case 5:
                attendanceSummary();
                break;
            case 6:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 3);

    return 0;

}
#include <iostream>
using namespace std;
class AttendanceSession {
public:
    string courseCode;
    string date;
    string startTime;
    int duration;

    void createSession() {
        cout << "Enter Course Code: ";
        cin >> courseCode;

        cout << "Enter Date: ";
        cin >> date;

        cout << "Enter Start Time: ";
        cin >> startTime;

        cout << "Enter Duration (Hours): ";
        cin >> duration;
    }

    void displaySession() {
        cout << "\nSession Created Successfully\n";
        cout << "Course: " << courseCode << endl;
        cout << "Date: " << date << endl;
        cout << "Start Time: " << startTime << endl;
        cout << "Duration: " << duration << " hours\n";
    }
};

Student students[100];
int studentCount = 0;
AttendanceSession session;

