//* Author : Adela Martinez *//

//header file
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

//declaring variables
int hr, hr2, min, sec;
string AmPm;

//function to add an hour 
void addHour() {
    hr = hr + 1;
    //adjusting AM and PM
    if (hr >= 12) {
        hr = hr - 12;
        if (AmPm == "AM")
            AmPm = "PM";
        else
            AmPm = "AM";
    }
}
//function to add a minute 
void addMinute() {
    min = min + 1;
    if (min > 59) {
        min = 0;
        addHour();

    }
}
//function to add a second
void addSecond() {
    sec = sec + 1;
    if (sec > 59) {
        sec = 0;
        addMinute();
    }
}

//main function
int main() {
    //variables
    int option = 0;
    //setting the current time manually
    hr = 12;
    min = 50;
    sec = 58;
    AmPm = "PM";
    //start infinite loop
    while (1) {
        //calculating the 24 hours 
        if (AmPm == "PM") {
            hr2 = hr + 12;
            if (hr2 >= 24) {
                hr2 = hr2 - 24;
            }
        }
        else {
            hr2 = hr;
        }
        //displaying the clocks
        cout << "\n****************************\t\t****************************\n";
        cout << "*      12-Hour clock       *\t\t*      24-Hour clock       *\n";
        cout << "*       " << setw(2) << setfill('0') << hr << ":" << setw(2) << setfill('0') << min << ":" << setw(2) << setfill('0') << sec << " " << AmPm << "        *";
        cout << "\t\t*         " << setw(2) << setfill('0') << hr2 << ":" << setw(2) << setfill('0') << min << ":" << setw(2) << setfill('0') << sec << " " << "        *\n";
        cout << "****************************\t\t****************************\n";
        //displaying the menu
        cout << "\n\n****************************\n";
        cout << "* 1-Add one hour           *\n";
        cout << "* 2-Add one minutes        *\n";
        cout << "* 3-Add one second         *\n";
        cout << "* 4-Exit program           *\n";
        cout << "****************************\n";
        cout << "Choose and option: ";
        cin >> option;
        //executes users option
        if (option == 1) {
            //option to add an hour
            addHour();
        }
        else if (option == 2) {
            //option to add a minute
            addMinute();
        }
        else if (option == 3) {
            //option to add second
            addSecond();
        }
        else if (option == 4) {
            //option to exit the program
            cout << "Exiting program.";
            break;
            // end loop
        }
        else {
            //output error message
            cout << "Invalid input. Try Again.";
        }
    }
}