// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Size of char: " << sizeof(char) << " byte" << endl;
//     cout << "Size of int: " << sizeof(int) << " byte" << endl;
//     cout << "Size of float: " << sizeof(float) << " byte" << endl;
//     cout << "Size of double: " << sizeof(double) << " byte" << endl;
//     cout << "Size of short: " << sizeof(short) << " byte" << endl;
//     cout << "Size of long: " << sizeof(long) << " byte" << endl;
//     cout << "Size of long double: " << sizeof(long double) << " byte" << endl;
//     cout << "Size of bool: " << sizeof(bool) << " byte" << endl;
//     cout << "Size of long long: " << sizeof(long long) << " byte" << endl;
//     return 0;
// }


// #include <iostream>
// #include <iomanip> 
// using namespace std;
// int main()
// {
   
// cout << left << setw(20) << "Data Type" << "Size (in bytes)" << endl;
// cout << "------------------------------------------" << endl;
// cout << setw(20) << "char" << sizeof(char) << " byte" << endl;
// cout << setw(20) << "bool" << sizeof(bool) << " byte" << endl;
// cout << setw(20) << "short" << sizeof(short) << " bytes" << endl;
// cout << setw(20) << "int" << sizeof(int) << " bytes" << endl;
// cout << setw(20) << "float" << sizeof(float) << " bytes" << endl;
// cout << setw(20) << "long" << sizeof(long) << " bytes" << endl;
// cout << setw(20) << "double" << sizeof(double) << " bytes" << endl;
// cout << setw(20) << "long long" << sizeof(long long) << " bytes" << endl;
// cout << setw(20) << "long double" << sizeof(long double) << " bytes" << endl;
// return 0;
// }

// #include <iostream>
// #include <iomanip>
// #include <string>
// using namespace std;

// int main() {
//     cout << left << setw(10) << "Name" << left << setw(10) << "ID" << "Number" <<endl;
//     cout << left << setw(10) << "Abdullah" << setw(10) << 2389 << "01745677826" <<endl;
//     cout << left << setw(10) << "Aziz" << setw(10) << 2395 << "01745677826" <<endl;
//     cout << left << setw(10) << "Ebny" << setw(10) << 2958 << "01745677826" <<endl;
//     cout << left << setw(10) << "Arman" << setw(10) << 2354 << "01745677826" <<endl;
//     return 0;
// }

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string name1, name2;
    int id1, id2;
    string phone1, phone2;

   
    cout << "Enter first person's Name: ";
    cin >> name1;
    cout << "Enter ID: ";
    cin >> id1;
    cout << "Enter Phone Number: ";
    cin >> phone1;

    cout << "\n---------------------------\n";

   
    cout << "Enter second person's Name: ";
    cin >> name2;
    cout << "Enter ID: ";
    cin >> id2;
    cout << "Enter Phone Number: ";
    cin >> phone2;

    cout << "\n\nFinal Output Table:\n";

   
    cout << left << setw(15) << "Name"
         << left << setw(10) << "ID"
         << "Number" << endl;
    cout << "------------------------------------------" << endl;

 
    cout << left << setw(15) << name1 << setw(10) << id1 << phone1 << endl;
    cout << left << setw(15) << name2 << setw(10) << id2 << phone2 << endl;

    return 0;
}



#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string name1, name2, phone1, phone2;
    int id1, id2;

    // প্রথম ব্যক্তির ইনপুট
    cout << "Enter first person name: ";
    getline(cin, name1); 
    cout << "Enter first person id: ";
    cin >> id1;
    cout << "Enter first person phone number: ";
    cin >> phone1;

    // বাফার ক্লিয়ার করা (খুবই গুরুত্বপূর্ণ!)
    cin.ignore(); 

    // দ্বিতীয় ব্যক্তির ইনপুট
    cout << "\nEnter second person name: ";
    getline(cin, name2); 
    cout << "Enter second person id: ";
    cin >> id2;
    cout << "Enter second person phone number: ";
    cin >> phone2;

    // সব আউটপুট একসাথে একটি টেবিলে দেখানো
    cout << "\n\n" << left << setw(40) << setfill('=') << "" << setfill(' ') << endl;
    cout << left << setw(20) << "Name" << setw(15) << "ID" << "Phone Number" << endl;
    cout << left << setw(40) << setfill('-') << "" << setfill(' ') << endl;

    cout << left << setw(20) << name1 << setw(15) << id1 << phone1 << endl;
    cout << left << setw(20) << name2 << setw(15) << id2 << phone2 << endl;

    return 0;
}

    cout << "\n\n"
    << left << setw(40) << setfill('=') << "" << setfill(' ') << endl;
    cout << left << setw(20) << "Name" << setw(15) << "ID" << "Phone Number" << endl;
    cout << left << setw(40) << setfill('-') << "" << setfill(' ') << endl;

লাইন ১: cout << "\n\n"
\n\n: এটি দুটি নতুন লাইন (New Line) তৈরি করে। এর ফলে আগের ইনপুটগুলোর নিচে কিছুটা ফাঁকা জায়গা তৈরি হবে, যা আউটপুটকে পরিষ্কার দেখাবে।
   

লাইন ২: << left << setw(40) << setfill('=') << "" << setfill(' ') << endl;
এই লাইনটি একটি লম্বা সমান চিহ্ন (================) দিয়ে বর্ডার তৈরি করে।

left: এটি নির্দেশ দেয় যে পরের অংশটি বাম দিক থেকে শুরু হবে।

setw(40): এটি ৪০টি ক্যারেক্টার বা ঘরের সমান জায়গা বরাদ্দ করে।

setfill('='): এটি বলে দেয় যে, setw(40) দিয়ে তৈরি করা ৪০টি খালি ঘর = চিহ্ন দিয়ে ভরাট করতে হবে।

<< "": এটি একটি খালি স্ট্রিং। যেহেতু setw() এর পরে কিছু একটা প্রিন্ট করতে হয়, আমরা খালি স্ট্রিং দিয়েছি যাতে পুরো ৪০টি ঘরই = দিয়ে ভরে যায়।

setfill(' '): এটি খুব গুরুত্বপূর্ণ! এর কাজ হলো setfill-কে আবার ডিফল্ট অবস্থায় অর্থাৎ স্পেস (Space)-এ ফিরিয়ে আনা। এটি না করলে পরের লাইনগুলোতেও সব ফাঁকা জায়গায় = চলে আসতো।
   

লাইন ৩: cout << left << setw(20) << "Name" << setw(15) << "ID" << "Phone Number" << endl;
এটি টেবিলের হেডিং (Heading) বা শিরোনাম তৈরি করে।

setw(20) << "Name": "Name" কলামের জন্য ২০টি ঘর নেয়। "Name" লেখাটি বামে থাকে এবং ডানে ফাঁকা জায়গা থাকে।

setw(15) << "ID": "ID" কলামের জন্য ১৫টি ঘর নেয়।

"Phone Number": এটি শেষ কলাম। এর জন্য আলাদা করে setw() দেওয়া হয়নি কারণ এরপরে আর কোনো কলাম নেই।


লাইন ৪: cout << left << setw(40) << setfill('-') << "" << setfill(' ') << endl;
এই লাইনটি হেডিং-এর নিচে একটি ড্যাশ বর্ডার (----------------) তৈরি করে।

এটি ঠিক লাইন ২-এর মতোই কাজ করে, শুধু এখানে = এর জায়গায় - (ড্যাশ) ব্যবহার করা হয়েছে।

এখানেও ৪০টি ঘর ড্যাশ দিয়ে পূরণ করা হয়েছে এবং শেষে আবার setfill(' ') দিয়ে স্পেস ফিরিয়ে আনা হয়েছে।

ভিজ্যুয়াল আউটপুট কেমন হবে?
কোডটি রান করলে আপনার স্ক্রিনে ঠিক এমন একটি সুন্দর টেবিল হেড তৈরি হবে:

Plaintext
========================================
Name                ID             Phone Number
----------------------------------------
