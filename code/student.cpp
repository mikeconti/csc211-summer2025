#include <iostream>
#include <string>
// Write a Student struct that contains
// Name
// StudentID
// Major
// Implement functions:
// void buildStudent(Student &someStudent)
// Initialize member variables of student Struct
//   void changeMajor(Student &someStudent);
// Change the major of a student structure
// void printStudent(Student &someStudent);
// Prints out all member variables of student structure 

struct Student {

    std::string name;
    std::string major;
    int studentID;

};

void changeMajor(Student &someStudent){
    std::cout << "Change Major: " << std::endl;
    std::cin >> someStudent.major;

}

void printStudent(Student &someStudent){
    std::cout << "student: " << someStudent.name;
    std::cout << "Major: " << someStudent.major;
    std::cout << "studentID: " << someStudent.studentID;

}

void buildStudent(Student &someStudent){
    std::cout << "Enter student name" << std::endl;
    std::cin >> someStudent.name;

    std::cout << "Enter student major" << std::endl;
    std::cin >> someStudent.major;

    std::cout << "Enter student ID" << std::endl;
    std::cin >> someStudent.studentID;

}

int main(){

    Student mike; // int a;
    Student sarah; // int a;

    buildStudent(mike);
    buildStudent(sarah);

    printStudent(mike);

    changeMajor(mike);

    printStudent(mike);

}