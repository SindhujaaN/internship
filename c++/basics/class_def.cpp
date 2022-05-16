#include <iostream>
using namespace std;
class name
{
public:              // access specifier
    string fullname; // data members
    int id, ph_no;
    void printname() // member functions
    {
        cout << "My full name:" << fullname << endl;
    }
    void print_id(); // not defined inside class definition
    void phone_no();
};
void name::print_id() // defining print_id using scope resolution operator
{
    cout << "id number:" << id << endl;
}
void name::phone_no() // defining print_id using scope resolution operator
{
    cout << "Phone number:" << ph_no << endl;
}

int main()
{
    name sind_obj;                               // declaring an object for the class name
    sind_obj.fullname = "sindhujaa nallathambi"; // accessing the data member
    sind_obj.printname();                        // accessing the member functions
    sind_obj.id = 12345;
    sind_obj.print_id();
    sind_obj.ph_no = 213253647;
    sind_obj.phone_no();
    name ragav_obj;                            // declaring an object for the class name
    ragav_obj.fullname = "Ragavsathis Chinnu"; // accessing the data member
    ragav_obj.printname();                     // accessing the member functions
    ragav_obj.id = 6789;
    ragav_obj.print_id();
    ragav_obj.ph_no = 0720704045;
    ragav_obj.phone_no();
    return 0;
}