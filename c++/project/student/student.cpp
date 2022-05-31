#include <iostream>
#include <string>
using namespace std;
class student
{
    int roll_no;
    char name[100];
    int english_marks, science_marks, math_marks, computer_sci_marks;
    char grade;
    double average;

public:
    void getdata();
    void showdata();
    void calculate();
};
void student::calculate()
{
    average = (english_marks, science_marks, math_marks, computer_sci_marks) / 4;
    if (average >= 90)
        grade = 'A';
    if (average >= 70)
        grade = 'B';
    if (average >= 50)
        grade = 'C';
    else
        grade = 'D';
}
void student::getdata()
{
    cout << "Enter the student rollno:" << endl;
    cin >> roll_no;
    cout << "Enter the student name:" << endl;
    cin.ignore();
    cin.getline(name, 100);
    cout << "Enter the English mark:" << endl;
    cin >> english_marks;
    cout << "Enter the science mark:" << endl;
    cin >> science_marks;
    cout << "Enter the math mark:" << endl;
    cin >> math_marks;
    cout << "Enter the computer science mark:" << endl;
    cin >> computer_sci_marks;
    calculate();
}
void student::showdata()
{
    cout << "\nStudent Roll number:" << roll_no << endl;
    cout << "\nStudent Name:" << name << endl;
    cout << "\nEnglish mark:" << english_marks << endl;
    cout << "\nScience mark:" << science_marks << endl;
    cout << "\nMath mark:" << math_marks << endl;
    cout << "\nComputer science mark:" << computer_sci_marks << endl;
    cout << "\nAverage:" << average << endl;
    cout << "\nGrade:" << grade << endl;
}

int main()
{
    student obj;
    obj.calculate();
    obj.getdata();
    obj.showdata();

    return 0;
}