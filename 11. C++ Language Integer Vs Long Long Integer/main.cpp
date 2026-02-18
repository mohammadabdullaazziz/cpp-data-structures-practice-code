#include <iostream>
#include <iomanip>
#include <string>
#include <iostream>
using namespace std;
int main(){
    int normalNumber = 1000000;            // ১০ লাখ
    long long bigNumber = 1000000000000LL; // ১ লাখ কোটি (শেষে LL দেওয়া ভালো)
    long long b = 9223372036854775807LL;   // শেষে LL দিলে কম্পাইলার বোঝে এটি একটি long long সংখ্যা

    // cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    // cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;
    


    // int a;
    // long long b;
    // a = 2147483647; //এটি int এর সর্বোচ্চ সীমা
    // b = 2147483648;
    // cout<< "Value is: " << a << endl;
    // cout<< "Value is: " << b << endl;

    int num1, num2, result;
    num1 = 10, num2 = 3;
    // result = num1 + num2; output 13;
    //result = num1 / num2; output 3 \ ans 3.333
    result = num1 % num2;
    cout<< "Result is: " << result << endl;
    return 0;
}

