#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int i,j,k=1;
    string o="+-*/=";
    cout<< "Enter input to check operator:  ";
    cin>>input;
    cout<<endl;

    for (i=0;i<input.length();i++)
    {
        for (j=0; j<5;j++)
        {
             if (input[i] == o[j])
               {
                  cout<< "Operator "<<k<<": "<<o[j]<<endl  ;
                  k++;
               }
        }

    }


}
