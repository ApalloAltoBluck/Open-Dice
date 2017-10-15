#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <time.h>

using namespace std;

int main()
{
    char response;
    int v1;

    cout << "Would you like to roll the dice? Y or N" << endl;
    cin >> response;
    srand (time(NULL));
    while (response == 'y') {
        v1 = rand() % 6 + 1;
        cout << v1 << endl;
        if (v1 == 4|| v1 == 5 || v1 == 6) {
            cout << "Wow what a roll!" << endl;
            cout << "Wanna try again?" << endl;
            if (response == 'y')
            {

            }
            if (response == 'n'){

                cout << "Thanks for trying!" << endl;
            }
        } else {

            cout << "What a bad a roll" << endl;
            cout << "Wanna try again?" << endl;
            cin >> response;
            if (response == 'y')
            {

            }
            if (response == 'n'){

                cout << "Thanks for trying!" << endl;
                return 0;
            }
        }


    }


}
