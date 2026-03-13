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

---------------------------------------------------------------------------------------------------------------------------------------------------------------------


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

    string name;
    string village;
    string subject;
    string gmail;
    string phoneNumber;
    const string COUNTRY = "Bangladesh";
    string bloodGroup;

    int age;
    char grade;
    float height;
    double accountBalance;

    bool isPassed;
    bool isGraduated;

    // User Input
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your village: ";
    getline(cin, village);

    cout << "Enter your subject: ";
    getline(cin, subject);

    cout << "Enter your gmail: ";
    getline(cin, gmail);

    cout << "Enter your phone number: ";
    getline(cin, phoneNumber);

    cout << "Enter your blood group: ";
    getline(cin, bloodGroup);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your grade: ";
    cin >> grade;

    cout << "Enter your height: ";
    cin >> height;

    cout << "Enter your account balance: ";
    cin >> accountBalance;

    cout << "Are you passed (1 = yes, 0 = no): ";
    cin >> isPassed;

    cout << "Are you graduated (1 = yes, 0 = no): ";
    cin >> isGraduated;
   
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear buffer
   
    cout << endl;
    cout << "------------ Student Information ------------" << endl;

    cout << left << setw(20) << "Name:" << name << endl;
    cout << left << setw(20) << "Village:" << village << endl;
    cout << left << setw(20) << "Subject:" << subject << endl;
    cout << left << setw(20) << "Gmail:" << gmail << endl;
    cout << left << setw(20) << "Phone Number:" << phoneNumber << endl;
    cout << left << setw(20) << "Country:" << COUNTRY << endl;
    cout << left << setw(20) << "Blood Group:" << bloodGroup << endl;
    cout << left << setw(20) << "Age:" << age << endl;
    cout << left << setw(20) << "Grade:" << grade << endl;
    cout << left << setw(20) << "Height:" << height << endl;
    cout << left << setw(20) << "Account Balance:" <<fixed <<setprecision(10) << accountBalance << endl;
    cout << left << setw(20) << "Passed:" <<boolalpha << isPassed << endl;
    cout << left << setw(20) << "Graduated:" <<boolalpha << isGraduated << endl;

    return 0;
}

   
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

int main()
{

    string name;
    string village;
    string subject;
    string gmail;
    string phoneNumber;
    const string COUNTRY = "Bangladesh";
    string bloodGroup;

    int age;
    char grade;
    float height;
    double accountBalance;

    bool isPassed;
    bool isGraduated;

    // User Input
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your village: ";
    getline(cin, village);

    cout << "Enter your subject: ";
    getline(cin, subject);

    cout << "Enter your gmail: ";
    getline(cin, gmail);

    cout << "Enter your phone number: ";
    getline(cin, phoneNumber);

    cout << "Enter your blood group: ";
    getline(cin, bloodGroup);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your grade: ";
    cin >> grade;

    cout << "Enter your height: ";
    cin >> height;

    cout << "Enter your account balance: ";
    cin >> accountBalance;

    cout << "Are you passed (1 = yes, 0 = no): ";
    cin >> isPassed;

    cout << "Are you graduated (1 = yes, 0 = no): ";
    cin >> isGraduated;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear buffer

    cout << endl;
    cout << "------------ Student Information ------------" << endl;

    cout << fixed << setprecision(2);
    cout << boolalpha;

    cout << left << setw(20) << "Name:" << name << endl;
    cout << left << setw(20) << "Village:" << village << endl;
    cout << left << setw(20) << "Subject:" << subject << endl;
    cout << left << setw(20) << "Gmail:" << gmail << endl;
    cout << left << setw(20) << "Phone Number:" << phoneNumber << endl;
    cout << left << setw(20) << "Country:" << COUNTRY << endl;
    cout << left << setw(20) << "Blood Group:" << bloodGroup << endl;
    cout << left << setw(20) << "Age:" << age << endl;
    cout << left << setw(20) << "Grade:" << grade << endl;
    cout << left << setw(20) << "Height:" << height << endl;
    cout << left << setw(20) << "Account Balance:" << accountBalance << endl;
    cout << left << setw(20) << "Passed:" << isPassed << endl;
    cout << left << setw(20) << "Graduated:" << isGraduated << endl;

    return 0;
}

  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  numeric_limits<streamsize>::max() → buffer এর সব character ignore করবে
  '\n' → newline পর্যন্ত পরিষ্কার করবে 
  অর্থাৎ input buffer clean করে দেয়।
  cin.ignore() ব্যবহার করা হয় input buffer থেকে অবাঞ্ছিত character (বিশেষ করে newline \n) মুছে ফেলার জন্য।



--------------------------------------------------------------------------------------------------------------
১০০% প্রফেশনাল ভার্সন (C++):
#include <iostream>
#include <iomanip>  // formatting এর জন্য
#include <string>
#include <limits>   // ইনপুট বাফার পরিষ্কারের জন্য

using namespace std;

int main()
{
    // ভেরিয়েবল ডিক্লেয়ারেশন
    string name, village, subject, gmail, phoneNumber, bloodGroup;
    const string COUNTRY = "Bangladesh"; // কনস্ট্যান্ট বড় হাতের অক্ষরে লেখা স্ট্যান্ডার্ড
    
    int age;
    char grade;
    float height;
    double accountBalance;
    bool isPassed, isGraduated;

    // --- ইউজার ইনপুট অংশ ---
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your village: ";
    getline(cin, village);

    cout << "Enter your subject: ";
    getline(cin, subject);

    cout << "Enter your gmail: ";
    getline(cin, gmail);

    cout << "Enter your phone number: ";
    getline(cin, phoneNumber);

    cout << "Enter your blood group: ";
    getline(cin, bloodGroup);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your grade: ";
    cin >> grade;

    cout << "Enter your height: ";
    cin >> height;

    cout << "Enter your account balance: ";
    cin >> accountBalance;

    cout << "Are you passed (1 for true, 0 for false): ";
    cin >> isPassed;

    cout << "Are you graduated (1 for true, 0 for false): ";
    cin >> isGraduated;

    // ইনপুট বাফার পরিষ্কার করা (যাতে ভবিষ্যতে অন্য ইনপুট নিতে সমস্যা না হয়)
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // --- আউটপুট প্রেজেন্টেশন ---
    cout << "\n" << string(45, '-') << endl;
    cout << setw(30) << right << "STUDENT INFORMATION" << endl;
    cout << string(45, '-') << endl;

    // ফরম্যাটিং সেটিংস
    cout << fixed << setprecision(2); // দশমিকের পর ২ ঘর
    cout << boolalpha;                // ১/০ এর বদলে true/false দেখাবে
    cout << left;                     // লেখাগুলো বাম দিকে সাজাবে

    // আউটপুটগুলো টেবিল আকারে সাজানো
    cout << setw(20) << "Name"            << ": " << name << endl;
    cout << setw(20) << "Village"         << ": " << village << endl;
    cout << setw(20) << "Subject"         << ": " << subject << endl;
    cout << setw(20) << "Gmail"           << ": " << gmail << endl;
    cout << setw(20) << "Phone Number"    << ": " << phoneNumber << endl;
    cout << setw(20) << "Country"         << ": " << COUNTRY << endl;
    cout << setw(20) << "Blood Group"     << ": " << bloodGroup << endl;
    cout << setw(20) << "Age"             << ": " << age << " years" << endl;
    cout << setw(20) << "Grade"           << ": " << grade << endl;
    cout << setw(20) << "Height"          << ": " << height << " ft" << endl;
    cout << setw(20) << "Account Balance" << ": $" << accountBalance << endl;
    cout << setw(20) << "Passed Status"   << ": " << isPassed << endl;
    cout << setw(20) << "Graduation"      << ": " << isGraduated << endl;
    
    cout << string(45, '-') << endl;

    return 0;
}
