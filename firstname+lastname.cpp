/*
Prob 3:

Write a program to get firstName and lastName and n as input and print fullName that is firstName+lastName for n times.

Input

Nandy

Raja

5

Expected output:

NandyRaja

NandyRaja

NandyRaja

NandyRaja

NandyRaja

Explanation - Nandy is the firstName, Raja is the lastName and n is 5, so the expected output has NandyRaja printed 5 times.

*/

/* using for loop
#include<iostream>
using namespace std;
int main()
{
    string a,b;
    int c;
    cin>>a>>b>>c;
   for(int i=1;i<=c;i++ )
   {
       cout<<a+b<<"\n";
   }
    
}
   */



/*
   // using function without return type
#include <iostream>
using namespace std;
// Function to print full name n times
void printFullName(string a, string b, int c) {
    for(int i = 1; i <= c; i++) {
        cout << a + b << endl;
    }
}

int main() {
    string a, b;
    int c;

    cin >> a;
    cin >> b;
    cin >> c;

    // Function call
    printFullName(a, b, c);

    return 0;
}
*/


//using function with return type
#include <iostream>
using namespace std;

// Function with return type
string printFullName(string a, string b, int c) {
    string result = "";
    
    for(int i = 1; i <= c; i++) {
        result = result+(a + b) + "\n";
    }
    
    return result;
}

int main() {
    string a, b;
    int c;

    cin >> a;
    cin >> b;
    cin >> c;

    // Store returned value
    string output = printFullName(a, b, c);
    
    // Print result
    cout << output;

    return 0;
}