/*
Prob 3: 

Given mark of student, Print the Grade

Grade A if mark is greater than or equal to 90

Grade B if mark is greater than or equal to 80

Grade C if mark if greater than or equal to 60

Grade D if mark if greaer than or equal to 35

Fail if mark is lesser than 35


Input: 95

Expected Output:

Grade A

Explanation: Here 95 is greater than or equal to 90 so its Grade A

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>=90)
    {
        cout<<"Grade A"; //Grade A if mark is greater than or equal to 90
    }
    else if(n>=80)
    {
        cout<<"Grade B"; //Grade B if mark is greater than or equal to 80
    }
    else if(n>=60)
    {
        cout<<"Grade C"; //Grade C if mark is greater than or equal to 60
    }
    else if(n>=35)
    {
        cout<<"Grade D"; //Grade D if mark is greater than or equal to 35
    }
    else
    {
        cout<<"Fail"; //Fail if mark is lesser than 35
    }

    return 0;
}

/*
1) if condition1 is true , that will be exected. other wise below condtion will not exeuted

2) if condtion 2 is true, the condition 2 wil be executed , but that sametime ,imagine
   condition2 is true and also condtion 3 and 4 also true what wil happen?
   the answer is , condtion 2 will be executed otherwise not executer
            " only one of  condtion will execute"

3) if all condtions false, in the else statement will executed.

*/