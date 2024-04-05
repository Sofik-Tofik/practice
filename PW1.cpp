#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int age;
    double averageScore;
};

int main() {
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    Student* students = new Student[numStudents];

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter information for student " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin.ignore();
        getline(cin, students[i].name);
        cout << "Age: ";
        cin >> students[i].age;
        cout << "Average Score: ";
        cin >> students[i].averageScore;
    }

    cout << "Student Information:";
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << i + 1 << ":";
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Average Score: " << students[i].averageScore << endl;
    }

    delete[] students;

    return 0;
}