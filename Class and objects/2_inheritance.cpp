#include <iostream>
using namespace std;
class A
    {
        int x;
        int y;
        public:
            
            A(){cout<<"Constructor of class A\n";x=0;y=0;}
            ~A(){cout<<"Destructor of class A\n";}
    };
class B
    {
        public:
            int k;
            B(){cout<<"Constructor of class B\n";k=0;}
            ~B(){cout<<"Destructor of class B\n";}
    };
class C:public B,A
    {
        public:
            C(){cout<<"Constructor of class C\n";}
            ~C(){cout<<"Destructor of class  C\n";}
    };
int main()
    {


        C z;
        cout<<"k is = "<<z.k;
        return 0;

    }