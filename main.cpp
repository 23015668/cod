#include <iostream>

using namespace std;

int main()
{
    int partner_height;
    int partner_age;


    cout << "Enter partner's height (in inches): ";
    cin >> partner_height;

    cout << "Enter partner's age: ";
    cin >> partner_age;


    if (partner_height >= 72cm) {
        if (partner_age > 20 && partner_age < 30) {
            cout << "This person qualify to be my partner." << endl;
        } else {
            cout << "Partner's age must be between 20 and 30." << endl;
        }
    } else {
        cout << "Partner must be tall (6 feet or taller)." << endl;
    }

    return 0;
}


