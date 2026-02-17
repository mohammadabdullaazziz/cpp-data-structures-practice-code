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




#include <iostream>
#include <string>  // স্ট্রিং এর জন্য অবশ্যই লাগবে
#include <iomanip> // আউটপুট সুন্দর করার জন্য (ঐচ্ছিক)

using namespace std;

int main() {
    string fullName, village, subject;
    int age;
    float height, cgpa;
    char grade;
    bool isPassed;

    // নামের ইনপুট
    cout << "Enter your Full name: ";
    getline(cin, fullName);

    // বয়সের ইনপুট
    cout << "Enter your age: ";
    cin >> age;

    // হাইটের ইনপুট
    cout << "Enter your height: ";
    cin >> height;
    
    // cin এর পর getline ব্যবহার করার আগে বাফার ক্লিয়ার করা
    cin.ignore(); 

    cout << "Enter your village: ";
    getline(cin, village);

    cout << "Enter your subject: ";
    getline(cin, subject);

    cout << "Enter your cgpa: ";
    cin >> cgpa;

    cout << "Enter your grade: ";
    cin >> grade;

    cout << "Are you passed? (1 for Yes, 0 for No): ";
    cin >> isPassed;

    // আউটপুট সেকশন
    cout << "\n------- Your Output ----------" << endl;
    cout << "Name:    " << fullName << endl;
    cout << "Age:     " << age << " years" << endl;
    cout << "Height:  " << height << " feet" << endl;
    cout << "Village: " << village << endl;
    cout << "Subject: " << subject << endl;
    cout << "CGPA:    " << cgpa << endl;
    cout << "Grade:   " << grade << endl;
    
    // boolalpha দিলে 0/1 এর বদলে true/false দেখাবে
    cout << "Status:  " << boolalpha << isPassed << endl; 

    return 0;
}
