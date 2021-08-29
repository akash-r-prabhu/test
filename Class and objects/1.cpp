#include <iostream>
#include <string.h>
using namespace std;
class student
{
    int roll;
    char name[20];
    
    public:
        student(){roll=0;strcpy(name,"akash");}
        int retroll()
            {
                return roll;
            }
        char* retname()
            {
                return name;
            } 
}s;
int main()
{
    cout<<s.retroll()<<s.retname();


}