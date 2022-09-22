#include <iostream>
#include <iomanip>
#include <string>

/* The libraries included are capable of using cin,cout,strings, and printout manipulation*/

using namespace std;

// function to put enough whitespaces to center a printout

void spacer(int w, int i) {
    int k = (w - i) / 2;
    for (int i = 1; i <= k; i++) {
        cout << " ";
    };
}


int main() {

    // printing out the application banner

    for (int i = 0; i <= 2; i++) {
        if (i == 1) {
            spacer(50, 2);
            cout << "THE HOUSE DRAWING PROGRAM\n";
            continue;
        }
        for (int j = 0; j <= 40; j++) {
            cout << "- ";
        };
        cout << endl;
    };
    /* initializing width as w, height as h, dec is the decision(yes,no),count is used to repeat the question regarding width   */

    int w, h;
    string name;
    string dec;
    int count;
    int housenmbr = 0;
    cout << endl;
    cout << "what is your name? ";
    cin >> name;
    cout << endl;
    cout << "Well " << name << " welcome to the house drawing program!!\n\n";

    /* Controlled flow that repeats itself until the user breaks it*/

    while (true) {

        // Repeating the question until i get either yes or no

        do {
            cout << "Do you want me to draw a simple house for you? (yes/no) ";
            cin >> dec;
        } while (dec != "yes" && dec != "no");

        // IF the user says no, then they either made 0,1 or more houses which each has a specific printout 

        if (dec == "no") {
            if (housenmbr == 0) {
                cout << "Well it was nice having you!\n";
                break;
            }
            else if (housenmbr == 1) {
                cout << "\nHope you liked your house !!\n";
                break;
            }
            else {
                cout << "\nHope you liked your " << housenmbr << " houses !!\n";
                break;
            };
        }

        // if user says yes, then the program demands details about the house to be drawn

        else if (dec == "yes") {

            cout << "Enter the height of the house you want me to draw: ";
            cin >> h;
            cout << "Enter an even number for the width of the house, make sure it is greater than 2: ";
            count = 3;
            cin >> w;
            // the program gives feedback regarding the width and demands a correct value but just 3 times, otherwise it terminates

            do {
                if (count == 1) {
                    cout << "It seems that you are having troubles entering even numbers! Program ends now!!";
                    count--;
                    break;

                }
                else if (w <= 2) {
                    cout << "Please enter an integer greater than 2 for the width of the house: \n";
                    cin >> w;
                    count--;
                }
                else if (w % 2 != 0) {
                    cout << "You entered " << w << " which is not an even number! Please enter an Even number for the width of the house:\n";
                    cin >> w;
                    count--;
                }

            } while (w <= 2 || w % 2 != 0);

            //breaking from both the do and the while loops hence terminating the whole program

            if (count == 0) {
                break;

            }
            else {

                // Printing the house in case the values entered are accpeted 

                cout << "\ndrawing house number " << housenmbr + 1 << "\n\n";
                housenmbr += 1;
                for (int i = 2; i <= w; i += 2) {
                    spacer(w, i);
                    for (int j = 1; j <= i / 2; j++) {
                        cout << "**";
                    };
                    cout << endl;
                };

                for (int i = 1; i <= h; i++) {
                    cout << left << setw(w - 1) << "|" << right << "|" << endl;
                };
                for (int i = 1; i <= w; i++) {
                    cout << "-";

                };

                cout << "\n\n";

            };
        };

    };
    return 0;

}
