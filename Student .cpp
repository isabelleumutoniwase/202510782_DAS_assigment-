#include "student.h"

Student students[100];
int count = 0;

void addStudent() {
    cout << "Enter ID: ";
    cin >> students[count].id;

    cout << "Enter Name: ";
    cin >> students[count].name;

    cout << "Enter Age: ";
    cin >> students[count].age;

    cout << "Enter Course: ";
    cin >> students[count].course;

    count++;
    cout << "Student added successfully!\n";
}

void displayStudents() {
    if (count == 0) {
        cout << "No students available.\n";
        return;
    }

    for (int i = 0; i < count; i++) {
        cout << "\nID: " << students[i].id;
        cout << "\nName: " << students[i].name;
        cout << "\nAge: " << students[i].age;
        cout << "\nCourse: " << students[i].course << endl;
    }
}

void searchStudent() {
    int id;
    cout << "Enter ID to search: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            cout << "Student found:\n";
            cout << students[i].name << endl;
            return;
        }
    }

    cout << "Student not found.\n";
}

void updateStudent() {
    int id;
    cout << "Enter ID to update: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            cout << "Enter new name: ";
            cin >> students[i].name;

            cout << "Enter new age: ";
            cin >> students[i].age;

            cout << "Enter new course: ";
            cin >> students[i].course;

            cout << "Updated successfully!\n";
            return;
        }
    }

    cout << "Student not found.\n";
}

void deleteStudent() {
    int id;
    cout << "Enter ID to delete: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            count--;
            cout << "Deleted successfully!\n";
            return;
        }
    }

    cout << "Student not found.\n";
}
