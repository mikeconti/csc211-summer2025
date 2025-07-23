#include <iostream>

// Write a base Person class with following properties and methods
// Person (base):Member Variables: name, age, favorite color, birthday

// Derive a Student from person and an Employee class derives student with the respective additional attributes

// Student: GPA, Major, Year, StudentID

// Employee: Job Title, Salary, Years Employed 

// Print for employee class

class Person{

    protected:
        std::string name, favoriteColor;
        int age, birthday;

};

class Student : public Person {

    protected:
        int GPA, Year, StudentID;
        std::string Major;


};

class Employee : public Person {

    public:
        void print();
        void setAge( int someAge);


    protected:
        std::string JobTitle;
        int Salary, YearsEmployed;

};


void Employee::print(){
    std::cout << "Employee's age is" << this->age;

}

void Employee::setAge( int someAge){
    this->age = someAge;
}

int main(){
    Person p1;
    Student s1;
    Employee e1;

    e1.setAge(10);
    e1.print();
}