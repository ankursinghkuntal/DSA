#include <bits/stdc++.h>
using namespace std;

struct Student {
    int rollNo;
    string name;
    string division;
    string address;
};

void addStudentInfo() {
    ofstream outFile("studentInfo.txt", ios::app);
    if (!outFile) {
        cout << " Error " << endl;
        return;
    }
    Student student;
    cout << "Enter Roll No: ";
    cin >> student.rollNo;
    cout << "Enter Name: ";
    cin.ignore();
    cin>>student.name;
    cout << "Enter Division: ";
    cin>>student.division;
    cout << "Enter Address: ";
    cin>>student.address;
    outFile << student.rollNo << " " << student.name << " " << student.division << " " << student.address << endl;
    outFile.close();
}

void searchStudentInfo(int rollNo) {
    ifstream inFile("studentInfo.txt");
    if (!inFile) {
        cout << "Error opening file!" << endl;
        return;
    }
    Student student;
    bool found = false;
    while (inFile >> student.rollNo >> student.name >> student.division >> student.address) {
        if (student.rollNo == rollNo) {
            found = true;
            cout << "Roll No: " << student.rollNo << endl;
            cout << "Name: " << student.name << endl;
            cout << "Division: " << student.division << endl;
            cout << "Address: " << student.address << endl;
            break;
        }
    }
    inFile.close();
    if (!found) {
        cout << "Student with Roll No " << rollNo << " not found!" << endl;
    }
}

void deleteStudentInfo(int rollNo) {
    ifstream inFile("studentInfo.txt");
    if (!inFile) {
        cout << "Error opening file!" << endl;
        return;
    }
    ofstream tempFile("temp.txt");
    if (!tempFile) {
        cout << "Error creating temporary file!" << endl;
        return;
    }
    Student student;
    bool found = false;
    while (inFile >> student.rollNo >> student.name >> student.division >> student.address) {
        if (student.rollNo != rollNo) {
            tempFile << student.rollNo << " " << student.name << " " << student.division << " " << student.address << endl;
        } else {
            found = true;
        }
    }
    inFile.close();
    tempFile.close();
    remove("studentInfo.txt");
    rename("temp.txt", "studentInfo.txt");
    if (!found) {
        cout << "Student with Roll No " << rollNo << " not found!" << endl;
    } else {
        cout << "Student with Roll No " << rollNo << " deleted successfully!" << endl;
    }
}

void editStudentInfo(int rollNo) {
    ifstream inFile("studentInfo.txt");
    if (!inFile) {
        cout << "Error opening file!" << endl;
        return;
    }

    ofstream tempFile("temp.txt");
    if (!tempFile) {
        cout << "Error creating temporary file!" << endl;
        inFile.close();
        return;
    }

    Student student;
    bool found = false;
    while (inFile >> student.rollNo >> student.name >> student.division >> student.address) {
        if (student.rollNo == rollNo) {
            found = true;
            cout << "Enter New Name: ";
            cin.ignore();
            cin>>student.name;
            cout << "Enter New Division: ";
            cin>>student.division;
            cout << "Enter New Address: ";
            cin>>student.address;
            tempFile << student.rollNo << " " << student.name << " " << student.division << " " << student.address << endl;
            cout << "Student information updated successfully!" << endl;
        } else {
            tempFile << student.rollNo << " " << student.name << " " << student.division << " " << student.address << endl;
        }
    }
    inFile.close();
    tempFile.close();

    if (!found) {
        cout << "Student with Roll No " << rollNo << " not found!" << endl;
    } else {
        remove("studentInfo.txt");
        rename("temp.txt", "studentInfo.txt");
    }
}

int main() {
    int choice;
    int rollNo;

    while (true) {
        cout << "1. Add student information" << endl;
        cout << "2. Delete student information" << endl;
        cout << "3. Search student information" << endl;
        cout << "4. Edit student information" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                addStudentInfo();
                break;
            case 2:
                cout << "Enter Roll No to delete: ";
                cin >> rollNo;
                deleteStudentInfo(rollNo);
                break;
            case 3:
                cout << "Enter Roll No to search: ";
                cin >> rollNo;
                searchStudentInfo(rollNo);
                break;
            case 4:
                cout << "Enter Roll No to edit: ";
                cin >> rollNo;
                editStudentInfo(rollNo);
                break;
            case 5:
                cout << "Exiting program" << endl;
                exit(0);
        }
    }
    return 0;
}
