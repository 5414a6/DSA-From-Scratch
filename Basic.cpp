//// The following main function shows way of taking values in and out of the console
#include<iostream> //C++ library called iostream (input/output stream library), short for input-output stream.

using namespace std; //In C++, all standard library features are grouped under a namespace called std

int main(){
    cout << "Give me an integer : ";  //cout refers to console output. '<<' (insertion operator - sends data to output stream) means send this to output stream
    int the_input_intger;
    cin >> the_input_intger; // cin refers to console input. '>>' (extraction operator) means take something from keyboard
    cout << endl << "You have entered " << the_input_intger; // 'endl' displays newline
    return 0;
}
