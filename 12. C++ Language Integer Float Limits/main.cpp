#include <iostream>
#include <climits>
#include <float.h>

using namespace std;

int main()
{
    cout << "--- Integer Limits ---" << endl;
    cout << "Int Max: " << INT_MAX << endl;
    cout << "Int Min: " << INT_MIN << endl;
    cout << "Unsigned Int Max: " << UINT_MAX << endl;
    cout << "Long Long Max: " << LLONG_MAX << endl;
    cout << "Long Long Min: " << LLONG_MIN << endl;
    cout << "\n--- Floating Point Limits ---" << endl;
    cout << "Float Max: " << FLT_MAX << endl;
    cout << "Double Max: " << DBL_MAX << endl;
    cout << "Long Double Max: " << LDBL_MAX << endl;
    cout << "\n--- Floating Point Minimum (Negative) ---" << endl;
    // ফ্লোটিং পয়েন্টে সবচেয়ে ছোট মান পেতে মাইনাস ব্যবহার করা হয়
    cout << "Float Min    : " << -FLT_MAX << endl;
    cout << "Double Min   : " << -DBL_MAX << endl;

    cout << "--- Maximum Limits ---" << endl;
    // Char এর সর্বোচ্চ সীমা
    cout << "Char Max      : " << SCHAR_MAX << endl;

    // Short এর সর্বোচ্চ সীমা
    cout << "Short Max     : " << SHRT_MAX << endl;

    cout << "\n--- Minimum Limits (Reference) ---" << endl;
    cout << "Char Min      : " << SCHAR_MIN << endl;
    cout << "Short Min     : " << SHRT_MIN << endl;
    return 0;
}
