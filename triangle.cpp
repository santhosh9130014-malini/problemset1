/*
Prob 2: Write a program to check whether a triangle can be formed with the given values for the angles.

If sum of angles is equal to 180, then triangle can be formed, else it can't be formed.

Input: 45 45 45

Expected Output: 

Triangle cannot be formed

Explanation -> We are getting 3 inputs, that is three angles of triangle, but here the sum of three angles that is 45+45+45 is not equal to 180 so Triangle cannot be formed is the output.
*/

#include<iostream>  
using namespace std;
int main()
{
    int a,b,c,n;
    cin>>a>>b>>c;
    n=a+b+c;  

    if(n==180)  //if my n is  equal to 180 this condition is true
    {
        cout<<"Triangle can be formed"; //printing f statement
    }
    else{ // otherwise , if condition1  is fasle, execute else statement 
        cout<<"Triangle cannot be  formed";
    }


    return 0;

}