#include <iostream>

/* Created by MrR35cu3 */

using namespace std;

void logo() {
    for(int i; i < 27; ++i) {
        cout << '\n';
    }
    cout << "# CREATED BY Milly Billigan #" << '\n';
    cout << "# BASIC LEVEL #" << '\n';
}

void leetSpeak() {
    logo();
    char i = '\0';
    while(cin.get(i)) {
        switch(i) {
            case 'a':
                cout << "4";
                break;
            case 'e':
                cout << "3";
                break;
            case 't':
                cout << "7";
                break;
            case 'g':
                cout << "6";
                break;
            case 'o':
                cout << "0";
                break;
            case 'i':
                cout << "1";
                break;
            case 's':
                cout << "5";
                break;
            default:
                cout << i;
        }
    }
}

int main()
{
    leetSpeak();
    return 0;
}
