/*
Solve the below problems and upload the code to your github repo as mentioned in Github repo creation for problems chapter.



----------------------------------------------------------------------------------------------------------------------------------------------------------------------

Prob 1:

Write a program which takes two values x and y. Prints x for y number of times.

Input:

2 

3

Expected Output

2

2

2

Explanation - 2 is x and 3 is y in the input. So 2 is printed 3 times on the output.

*/

//while loop
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n<=1000)
    {
        
        cout<<(n*1)<<"\n";
        n=n+100;
        
    }
    return 0;
}
