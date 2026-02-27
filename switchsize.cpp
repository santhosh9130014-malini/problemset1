/*
Prob 4: Write a program using switch case which takes a value and prints the respective Size.
If size is 29 then its small

If size is 30 then its Medium

If size is 38 then its Large

If size is 42 then its XLarge

If size is not any of the above then Invalid.



Input: 29

Expected Output: 

Small

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    switch(n)                     // the switch expression is evaluated once.
    {
        case 29:
                cout<<"small ";    // the value of expression is compared with the value of each case
                break;

        case 30:
                cout<<"small ";   // if there is match the block of code will be excuted 
                break;

        case 38:
                cout<<"small ";   
                break;

        case 42:
                cout<<"small ";
                break;
        
       default:
                cout<<"Invalid";   // if all cases fail, default will execute.
                break;




    }

    return 0;

}