#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int i;
    string keyword[5]={"for","if","int","float","true"};
    cout<< "Enter keyword to check :  ";
    cin>>input;
    cout<<endl;
    for (i=0;i<input.length();i++)
    {


             if (input == keyword[i])
               {
                  cout<< "Keyword :"<<keyword[i]<<endl  ;

               }

            else{cout<<"nothing match";}
    }


}
