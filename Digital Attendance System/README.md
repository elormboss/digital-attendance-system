# DIGITAL ATTENDANCE SYSTEM FOR HOUR-BASED LECTURES

## COURSE INFORMATION

Programme: HND Electrical Engineering (Level 200)  
Course Code: EEE227  
Assessment Type: Project-Based Mid-Semester Assignment  
Project Title: Digital Attendance System for Hour-Based Lectures  
Development Environment: VS Code  
Version Control: GitHub  
Platform: Windows (Offline First)

---

## PROJECT DESCRIPTION

Attendance taking in many lecture halls is still done manually using paper-based methods. This leads to lecture disruptions, misplaced records, and difficulty in generating attendance summaries.

This project presents a Digital Attendance System developed using the C++ programming language to solve the problem of manual attendance taking in hour-based lecture sessions.

The system allows lecturers to register students, create lecture sessions, mark attendance, and generate attendance summaries. All records are saved in text files to ensure data persistence even after the program is closed.

---

## PROJECT OBJECTIVES

The objectives of this project include:

- To apply C++ programming concepts to solve a real-world engineering problem  
- To demonstrate the use of variables, arrays, functions, and classes  
- To design a menu-driven console-based application  
- To implement file handling using fstream  
- To ensure attendance data persists between program executions  
- To demonstrate the use of version control using GitHub  

---

## SYSTEM FEATURES

### STUDENT MANAGEMENT
- Register students  
- View all registered students  
- Search students by index number  

### ATTENDANCE SESSION MANAGEMENT
- Create lecture session  
- Mark attendance as:
  - Present
  - Absent
  - Late  

### REPORTS AND SUMMARY
- Display attendance list  
- Display summary of attendance status  

### FILE STORAGE
- Save student records to file  
- Load student records from file  
- Data persistence after program execution  

---

## TECHNOLOGIES USED

- Programming Language: C++  
- Development Tool: Visual Studio Code  
- File Handling: fstream  
- Version Control System: GitHub  
- Platform: Windows  

---

## PROJECT STRUCTURE

digital-attendance-system/

│── main.cpp  
│── students.txt  
│── README.md  

---

## HOW TO RUN THE PROGRAM

1. Open the project folder in VS Code  
2. Compile the main.cpp file  
3. Run the program  
4. Follow the on-screen menu options to:
   - Add Students
   - Create Lecture Sessions
   - Mark Attendance
   - View Reports  

---

## WEEKLY IMPLEMENTATION

### WEEK 1
- Created GitHub repository  
- Designed project structure  
- Implemented Student Class  
- Implemented Add Student feature  
- Implemented View Students feature  

### WEEK 2
- Implemented Attendance Session  
- Implemented Lecture Session Creation  
- Developed Menu-driven Program Flow  

### WEEK 3
- Implemented Attendance Marking Logic  
- Implemented Attendance Summary Report  

### WEEK 4
- Implemented File Saving and Loading  
- Final Testing and Debugging  
- Completed Documentation  

---

## CONCLUSION

The Digital Attendance System developed in this project provides an efficient and reliable method of recording student attendance for hour-based lectures. It eliminates the challenges associated with manual attendance taking by providing a digital platform for recording and managing attendance data.

The use of file handling ensures that attendance records are stored permanently, making it easy to retrieve attendance information when needed.