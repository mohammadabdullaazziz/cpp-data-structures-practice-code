সি++ (C++) এ Variable (ভেরিয়েবল) হলো মেমোরির একটি নির্দিষ্ট জায়গার নাম, যেখানে  বিভিন্ন তথ্য বা ডেটা জমা রাখা হয়। 
সহজ কথায়, ভেরিয়েবল হলো একটি পাত্র বা কন্টেইনারের মতো, যার ভেতরে প্রয়োজনমতো তথ্য রাখা যায় এবং পরে তা পরিবর্তনও করা যায়।

#include <iostream>
using namespace std;

int main()

{
    int age = 29;          // integer
    double price = 10.50;   // float number 
    char grade = 'A';      // character
    string name = "Abdullah"; // text
    bool myBoolean = true;  //bool
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    return 0;

}

#include <iostream>
using namespace std;
int main(){
   string name = "Mohammad";
   int age = 30;
   float height = 5.2;
   string village = "Changmary";
   name = "Abdullah";
   string subject = "programming";
   bool isPass = true;
   char grade = 'A';
   cout << "My name is: " <<name << " My age is: " <<age << " My height is: " <<height << " My village is: " <<village <<endl;
   cout << "My favourite subject is: " <<subject <<endl;
   cout << "My grade is: " <<grade <<endl;
   cout << "i am " <<isPass <<endl;
   return 0;
}



#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "Mohammad";
    int age = 20;
    float height = 5.2;
    string village = "Changmary";
    string subject = "Programming";
    bool isPassed = true;
    float cgpa = 3.50;
    char grade = 'A';

    // value change
    name = "Abdullah";
    age = 30;

    int num1 = 20, num2 = 30;

    cout << "------ Student Information ------" << endl;

    cout << "My name is: " << name << endl;
    cout << "My age is: " << age << endl;
    cout << "My height is: " << height << endl;
    cout << "My village is: " << village << endl;
    cout << "My subject is: " << subject << endl;
    cout << "I'm Passed: " << isPassed << endl;
    cout << "My CGPA is: " << cgpa << endl;
    cout << "My grade is: " << grade << endl;

    cout << "Num1 is: " << num1 << endl;
    cout << "Num2 is: " << num2 << endl;

    return 0;
}

#include <iostream>
#include <string> // string ব্যবহারের জন্য এটি রাখা ভালো প্র্যাকটিস
#include <iomanip> // দশমিকের পর ঘর নির্দিষ্ট করার জন্য

using namespace std;

int main() {
    // ১. ভেরিয়েবল ডিক্লারেশন এবং ইনিশিয়ালাইজেশন
    string name = "Abdullah"; // সরাসরি আপডেট করা মানটিই শুরুতে দেওয়া যায়
    int age = 30;
    float height = 5.2f; // float এর ক্ষেত্রে শেষে 'f' দেওয়া ভালো
    string village = "Changmary";
    string subject = "Programming";
    bool isPassed = true;
    float cgpa = 3.50f;
    char grade = 'A';
    double accountBalance = 23.25698865;
    // একাধিক ভেরিয়েবল এক লাইনে ডিক্লেয়ার করা
    int num1 = 20, num2 = 30;

    // ২. আউটপুট ফরম্যাটিং
    cout << "---------- Personal Info ----------" << endl;
    cout << "Name      : " << name << endl;
    cout << "Age       : " << age << " years" << endl;
    cout << "Height    : " << height << " feet" << endl;
    cout << "Village   : " << village << endl;
    cout << "Subject   : " << subject << endl;

    // ৩. বুলিয়ান মানকে 1/0 এর বদলে True/False দেখানো
    cout << "Passed    : " << boolalpha << isPassed << endl; 

    // ৪. দশমিকের পর ২ ঘর নির্দিষ্ট করা
    cout << "CGPA      : " << fixed << setprecision(2) << cgpa << endl;
    cout << "Grade     : " << grade << endl;
    cout << "Account Balance: " << fixed << setprecision(8) << accountBalance << endl;
    
    cout << "-----------------------------------" << endl;
    cout << "Numbers   : Num1 = " << num1 << " | Num2 = " << num2 << endl;

    return 0;
}

১. #include <string>: যদিও অনেক কম্পাইলারে শুধু iostream দিলেই কাজ করে, কিন্তু string ব্যবহার করলে এই হেডার ফাইলটি ইনক্লুড করা স্ট্যান্ডার্ড নিয়ম।

২. boolalpha এর ব্যবহার: ডিফল্টভাবে C++ এ bool প্রিন্ট করলে 1 বা 0 আসে। boolalpha ব্যবহার করলে সেটি সরাসরি true বা false লেখা দেখাবে, যা পড়তে সুবিধা হয়।

৩. দশমিক নিয়ন্ত্রণ (fixed ও setprecision) cgpa = 3.50 , কিন্তু সাধারণ cout এ এটি শুধু 3.5 দেখাবে। setprecision(2) ব্যবহার করলে এটি সব সময় দশমিকের পর দুই ঘর (যেমন: 3.50) দেখাবে।

৪. আলাইনমেন্ট (Alignment): আমি কোলনগুলো (:) একই লাইনে সাজিয়েছি। এতে আউটপুটটি দেখতে অনেক বেশি পরিচ্ছন্ন এবং টেবিলের মতো মনে হয়।

৫. endl এর ব্যবহার: এক লাইনে অনেকগুলো endl , যা ঠিক আছে। তবে অনেক বড় প্রোগ্রামে \n ব্যবহার করা দ্রুত কাজ করে। এখানে স্টাইলটি সুন্দর আছে।

#include <iomanip> না দাও, তবে কোড রান করবে কিন্তু নিচের সুবিধাগুলো পাবো না:

setprecision(2) কাজ করবে না।

fixed কাজ করবে না।

setw(10) কাজ করবে না।
