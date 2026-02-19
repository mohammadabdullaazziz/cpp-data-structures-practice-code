#include <iostream>
#include <cctype>
using namespace std;

int main() {

    // char ch;

    // cout << "Enter an uppercase letter: ";
    // cin >> ch;
    // ch = tolower(ch);
    // cout << "Lowercase: " << ch << endl;

    char upper = 'M';
    char lower = tolower(upper);
    cout << "Lower case character: " << lower << endl;

    return 0;
}

// লাইব্রেরি ফাংশন ছাড়া কোড:

#include <iostream>
using namespace std;

int main()
{
    char upper = 'K';

    char lower = upper + 32;

    cout << "Lower case character: " << lower << endl;
    cout << "Upper case character: " << upper << endl;

    return 0;
}
