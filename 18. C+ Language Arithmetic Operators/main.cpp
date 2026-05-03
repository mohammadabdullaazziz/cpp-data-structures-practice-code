#include <iostream>
using namespace std;
int main(){
    int a = 10, b = 3;
    cout << "Addition = " << a + b << endl;
    cout << "Subtraction = " << a - b << endl;
    cout << "Multiplication = " << a * b << endl;
    cout << "Division = " << a / b << endl;
    cout << "Modulus = " << a % b << endl;
    return 0;
}

C++ এ গাণিতিক হিসাব-নিকাশ করার জন্য Arithmetic Operators (গাণিতিক অপারেটর) ব্যবহৃত হয়। এগুলো যোগ (+), বিয়োগ (-), গুণ (*), ভাগ (/), এবং ভাগশেষ (%) নির্ধারণে ব্যবহৃত হয়। 
এগুলো প্রধানত দুটি ভেরিয়েবলের ওপর কাজ করে (Binary Operators)

যোগ (+): দুটি সংখ্যার যোগফল নির্ণয় করে। যেমন: (10 + 5 = 15).
বিয়োগ (-): প্রথম সংখ্যা থেকে দ্বিতীয় সংখ্যা বিয়োগ করে। যেমন: (10 - 5 = 5).
গুণ (*): দুটি সংখ্যার গুণফল নির্ণয় করে। যেমন: (10 * 5 = 50).
ভাগ (/): প্রথম সংখ্যাকে দ্বিতীয় সংখ্যা দ্বারা ভাগ করে ভাগফল বের করে। পূর্ণসংখ্যার (int) ক্ষেত্রে এটি শুধু ভাগফলের পূর্ণ অংশ রাখে.
মডুলাস/ভাগশেষ (%): ভাগের পর ভাগশেষ (remainder) কত থাকে তা নির্ধারণ করে। এটি শুধুমাত্র পূর্ণসংখ্যার (int) ক্ষেত্রে কাজ করে.

শূন্য দ্বারা ভাগ (Division by Zero): কোনো সংখ্যাকে ০ (শূন্য) দিয়ে ভাগ করলে প্রোগ্রাম ক্র্যাশ (crash) করবে.

দশমিক ভাগ: যদি double বা float টাইপ ব্যবহার করা হয়, তবে ভাগের সঠিক দশমিক ফলাফল পাওয়া যাবে.

#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 5;
    int sum = a + b;

    cout << "Sum = " << sum;
    return 0;
}


#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 5;
    int sub = a - b;

    cout << "Subtraction = " << sub;
    return 0;
}


#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 5;
    int mul = a * b;

    cout << "Multiplication = " << mul;
    return 0;
}


#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 5;
    int div = a / b;

    cout << "Division = " << div;
    return 0;
}


#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 3;
    int mod = a % b;

    cout << "Modulus = " << mod;
    return 0;
}

% → শুধু integer এর জন্য কাজ করে
