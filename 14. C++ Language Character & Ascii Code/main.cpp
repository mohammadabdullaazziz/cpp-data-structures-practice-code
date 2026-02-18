#include <iostream>
using namespace std;
int main()
{
    /*
    char ch = 'A';
    int code = ch;
    cout << "Character: " << ch << endl;
    cout << "ASCII Code: " << code << endl;
    */

    /*
    char first = 'A', second = 'a', third = 'B', fourth = ' ';
    cout << "ASCII of " << first << " is: " << (int)first << endl; //output: 65
    cout << "ASCII of " << second << " is: " << (int)second << endl; // output: 97
    cout << "ASCII of " << third << " is: " << (int)third << endl;   // output: 66
    cout << "ASCII of (space) is: " << (int)fourth << endl;          // output: 32
   */

    int first = 65, second = 97, third = 66, fourth = 32;

    // (char) ব্যবহার করে সংখ্যাকে অক্ষরে রূপান্তর করা হয়েছে
    cout << "Character of ASCII 65: " << (char)first << endl;
    cout << "Character of ASCII 97: " << (char)second << endl;
    cout << "Character of ASCII 66: " << (char)third << endl;
    cout << "Character of ASCII 32: '" << (char)fourth << "'" << " (Space)" << endl;
    return 0;
}

//Character ইনপুট নিয়ে ASCII মান বের করা
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // char কে (int) দিয়ে টাইপকাস্ট করলে ASCII মান পাওয়া যায়
    cout << "The ASCII value of '" << ch << "' is: " << (int)ch << endl;

    return 0;
}

//Number ইনপুট নিয়ে ASCII ক্যারেক্টার বের করা
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter an ASCII number: ";
    cin >> num;

    // int কে (char) দিয়ে টাইপকাস্ট করলে ক্যারেক্টার পাওয়া যায়
    cout << "The character for ASCII " << num << " is: '" << (char)num << "'" << endl;

    return 0;
}