#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;


    int age = 21;
    char name = 's';
    char initial = 'a';


    while (true) {
        cout << "Enter a string ( max 10 characters): " ;
        cin >> input;

        if (input.length()>10) {
            cout<< "Too long! Please enter something shorter!";
        }
        else {
            break;
        }       //input is valid
    }
        cout <<"you entered: "<<input<<endl;


        return 0;

}