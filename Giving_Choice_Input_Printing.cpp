#include <iostream>
using namespace std;

int main() {
    char choice;

    cout << "Do you want to give an input?  ";
    cin >> choice;

    if (choice == 'Y') {
        int the_input_integer;
        cout << "Give me an integer: ";
        cin >> the_input_integer;
        cout << endl << "You have entered " << the_input_integer << endl;
    }
    else if (choice == 'N' || choice == 'n') {
        cout << "No input given. Exiting program." << endl;
    }
    else {
        cout << "Invalid choice. Please run again and enter Y or N." << endl;
    }

    return 0;
}
