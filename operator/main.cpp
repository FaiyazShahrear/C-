#include <iostream>
#include <string>
using namespace std;

int main()
{
    string value;
    string oper="+-*/=";
    cout<< "Enter your value:  ";
    cin>>value;
    cout<<endl;
    int i,j;
    for (i=0;i<value.length();i++)
    {
        for (j=0; j<5;j++)
        {
             if (value[i] == oper[j])
               {
                  cout<<"operator :"<<oper[j] <<endl;

               }
        }

    }


}
