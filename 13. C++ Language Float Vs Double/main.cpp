#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{   
    /*
    float num1 = 1.123456789f;
    double num2 = 1.123456789123456;
    cout << "Float value is: " << fixed << setprecision(10) << num1 << endl;
    cout << "Float value is: " << fixed << setprecision(5) << num1 << endl;

    cout << "Double value is: " << fixed << setprecision(20) << num2 << endl;
    cout << "Double value is: " << fixed << setprecision(15) << num2 << endl;
    */

    float num3 = 4.0;
    float num4 = 3;

    // float কে float দিয়ে ভাগ করলে উত্তর দশমিক (float) আসবে
    float result = num3 / num4;

    cout << "Result is: " << fixed << setprecision(2) << result << endl;
    return 0;
}