#include <iostream>
using namespace std;
int main(){

   int num;
   cout << "Enter Your Number: ";
   cin >> num;
   cout << "You entered: " << num <<endl;

   int a, b, sum;
   cout << "Type a Number: ";
   cin >> a ;
   cout << "Type another Number: ";
   cin >> b;
   sum = a + b;
   cout << "Sum is:" <<sum <<endl;

   string name;
   int age;
   cout << "Enter Your Name: ";
   getline(cin, name);
   cout << "Enter Your Age: ";
   cin >> age;
   cout << "Hello " << name << ", your age is " << age <<endl;

   int length, width;
   cout << "Enter your length: ";
   cin >> length;
   cout << "Enter your width: ";
   cin >> width;
   cout << "Area = " << length * width <<endl;

   int a, b, c;
   float average;
   cout << "1st Person: ";
   cin >> a;
   cout << "2nd Person: ";
   cin >> b;
   cout << "3rd Person: ";
   cin >> c;
   average = (a + b + c) / 3.0;
   cout << "Average = " << average <<endl;
   
   bool isRaining;
   cout << "Is it raining ? (1 Yes, 0 No): ";
   cin >> isRaining;
   cout << "Is it raining: " <<isRaining <<endl;
   return 0;
}


#include <iostream>
using namespace std;
int main()
{
    int x, y, sum;
    cout<< "Type a number: ";
    cin>> x;
    cout<< "Type another number: ";
    cin>> y;
    sum = x + y;
    cout<< "Type first number: " << x <<endl << "And Type second number: " << y <<endl << "Sum is: " << sum <<endl;
    return 0;
}

