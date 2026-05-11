#include <iostream>
using namespace std;

int main()
{
     int a = 10;
     int b = -20;

     int result1 = +a; // a এর মান ১০-ই থাকবে
     int result2 = +b; // b এর মান -২০-ই থাকবে (পরিবর্তন হবে না)

     cout << "Value of result1: " << result1 << endl;
     cout << "Value of result2: " << result2 << endl;

     return 0;
}