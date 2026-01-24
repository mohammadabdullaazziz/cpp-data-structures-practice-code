/*
#include <iostream>
using namespace std;
int main(){

   string name;
   cout << "Name: ";
   cin >> name;
   cout << "Your name is: " << name << endl;

   int age;
   cout << "Age: ";
   cin >> age;
   cout << "Your age is: " << age <<endl;

   char ch;
   cout << "Enter Character: ";
   cin >> ch;
   cout << "Your Character is: " << ch;
   return 0;
}
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullName;
    cout << "Enter your full-name: ";
    getline(cin, fullName);

    int age;
    cout << "Enter your age: ";
    cin >> age;

    float height;
    cout << "Enter your height: ";
    cin >> height;

    cin.ignore(); 

    string village;
    cout << "Enter your village: ";
    getline(cin, village);

    string subject;
    cout << "Enter your subject: ";
    getline(cin, subject);

    float cgpa;
    cout << "Enter your cgpa: ";
    cin >> cgpa;

    char grade;
    cout << "Enter your grade: ";
    cin >> grade;

    cout << "\n--- Output ---\n";

    cout << "Name: " << fullName << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Village: " << village << endl;
    cout << "Subject: " << subject << endl;
    cout << "CGPA: " << cgpa << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
