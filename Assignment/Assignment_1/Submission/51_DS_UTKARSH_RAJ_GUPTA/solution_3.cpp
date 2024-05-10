#include <iostream>
#include <iomanip>
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int daysInMonth(int month, int year) {
    switch (month) {
        case 2:
            return isLeapYear(year) ? 29 : 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}
void printCalendar(int month, int year) {
    std::cout << std::setw(20) << std::setfill(' ') << std::right << month << " " << year << std::endl; 
    std::cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat" << std::endl;
    int startDay = 1; 
    for (int i = 1900; i < year; ++i) {
        startDay += isLeapYear(i) ? 366 : 365;
    }
    for (int i = 1; i < month; ++i) {
        startDay += daysInMonth(i, year);
    }
    startDay %= 7;
    for (int i = 0; i < startDay; ++i) {
        std::cout << std::setw(5) << " ";
    }
    int days = daysInMonth(month, year);
    for (int day = 1; day <= days; ++day) {
        std::cout << std::setw(5) << day;
        if ((startDay + day) % 7 == 0) { 
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
}
int main() {
    int year = 2024;
    for (int month = 1; month <= 12; ++month) {
        printCalendar(month, year);
        std::cout << std::endl;
    }
    return 0;
}