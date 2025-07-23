#include <iostream>

class Date {
    private:
        int month;
        int year;
        int day;

    public:

    
        
        void addYears(int addedYears);
        void addDay(int addedDays);
        void addMonths(int addedMonths);
        
        void set(int m, int d, int y);
        void print();

        int getDay();
        int getMonth();
        int getYear();

        void operator++(int);

        //Default
        Date();

        // //copy constructor
        Date(Date &someDate);
};

void Date::print() {
    std::cout << month << '-'  << day << '-'  << year << std::endl;
}


void Date::set(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}

void Date::addYears(int addedYears){

    if(addedYears > 0){
        year += addedYears;
    }

}

void Date::addMonths(int addedMonths){

    month += addedMonths;

}

void Date::addDay(int addedDays){
    day += addedDays;
}

int Date::getDay(){
    return this->day;
}

int Date::getMonth(){
    return this->month;
}

int Date::getYear(){
    return this->year;
}

void Date::operator++(int){
    this->day++;
    std::cout << day;
}

Date::Date(){};

Date::Date(Date &someDate){
    this->day = someDate.getDay();
    this->month = someDate.getMonth();
    this->year = someDate.getYear();

}

int main(){

    Date today;

    today.set(11, 15, 2022);
    today.print();
    today.addYears(1);
    today.addMonths(1);
    today.addDay(1);
    today.print();

    today++;

    today.print();

    Date tomorrow = today;

    tomorrow.print();

    return 0;
}