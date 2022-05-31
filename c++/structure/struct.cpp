#include <iostream>
#include <string>
using namespace std;
int main()
{
    struct
    {
        int stud_id;
        string stud_name;
        int year;
    } student1, student2;
    student1.stud_id = 100;
    student1.stud_name = "agilan";
    student1.year = 2016;

    cout << "Student ID:" << student1.stud_id << endl;
    cout << "Student name:" << student1.stud_name << endl;
    cout << "Year:" << student1.year << endl;

    student2.stud_id = 200;
    student2.stud_name = "shaarav";
    student2.year = 2014;

    cout << "Student ID:" << student2.stud_id << endl;
    cout << "Student name:" << student2.stud_name << endl;
    cout << "Year:" << student2.year << endl;
    return 0;
}
