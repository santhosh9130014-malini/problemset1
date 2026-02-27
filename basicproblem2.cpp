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
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    for(int i=1;i<=y;i++)
    {
        cout<<x<<"\n";

    }
    return 0;
}
