#include <iostream>
using namespace std;
int main()
    {
        int n,i,j;
        cin>>n;
        for(i=0;i<n;i++)
            {
                for(j=0;j<n-i-1;j++)
                    cout<<":";
                for(j=0;j<i+1;j++)
                    cout<<"#";
                cout<<"\n";
            }
        cout<<endl;
        for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                   {
                       if((i==j)||(i+j==n-1)||(i==0)||(j==0)||(i==n-1)||(j==n-1)||(i==int(n/2))||(j==int(n/2)))
                            {
                                cout<<" @ ";
                            }
                        else 
                            cout<<" ! ";
                        
                   }
                cout<<endl<<endl;
            }
        return 0;
    }