#include <iostream>
#include <string.h> 
using namespace std;
class student
{
    int roll;  
    char name[20];

public:
    student()
    {
        roll = 0;
        strcpy(name, "");
    }
    int setrollandname(int r, char n[20])
    {
        roll = r;
        strcpy(name, n);
        return 0;
    }
    int retroll() //To return roll no
    {
        return roll;
    }
    char *retname() //to return name
    {
        return name;
    }

} s;
int main()
{
    int choice, roll;
    char name[20];
    cout << "enter 1 if u want to enter roll number and name";
    cin >> choice;
    if (choice == 1)
    {
        cout << "\nenter roll no  : ";
        cin >> roll;
        cout<<"\nenter name : ";
        cin>>name;
        int c;
        s.setrollandname(roll, name);
    }

    cout << "\n"
         <<"Roll no = " <<s.retroll() <<"\n"<<"Name : "<< s.retname();

    return 0;
}