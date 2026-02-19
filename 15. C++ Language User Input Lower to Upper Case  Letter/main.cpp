#include <iostream>
#include <cctype> 
using namespace std;
int main() {

    // char ch;
    // cout << "Enter any lowercase character: ";
    // cin >> ch;
    // char result = toupper(ch);
    // cout << "Convert your lowercase character to uppercase: " << result << endl;

    char lower = 'm';
    char upper = toupper(lower);
    cout<< "Upper case character: " << upper <<endl;
    return 0;
}

//লাইব্রেরি ফাংশন ছাড়া কোড:

#include <iostream>
using namespace std;

int main() {
    char lower = 'm';
   // ASCII লজিক: 'm' থেকে 32 বিয়োগ করলে 'M' পাওয়া যায়
    char upper = lower - 32;

    cout << "Lower case character: " << lower << endl;
    cout << "Upper case character: " << upper << endl;

    return 0;
}