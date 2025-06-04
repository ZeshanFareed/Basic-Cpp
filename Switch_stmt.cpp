#include <iostream>
using namespace std;

int main()
{

/*
    int day;

    cout<<"Enter Your Number : ";
    cin>>day;

    switch(day) {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"Thursday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 7:
        cout<<"Sunday";
        break;
    default:
        cout<<"Another Day";
}

*/


/*

   // Atm Menu Example

   int choice;

    cout << "*****************ATM Menu****************\n";
    cout << "1. Withdraw Money\n";
    cout << "2. Deposit Money\n";
    cout << "3. Check Balance\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected Withdraw Money.";
            break;
        case 2:
            cout << "You selected Deposit Money.";
            break;
        case 3:
            cout << "Your balance is $5000.";
            break;
        case 4:
            cout << "Exiting... Thank you!";
            break;
        default: cout << "Invalid choice! Please select a number between 1 and 4.";
    }


*/

    //   Traffic Light System

    char color;

    cout << "Enter traffic light color (r for Red, y for Yellow, g for Green): ";
    cin >> color;

    switch (color) {
        case 'r':
        case 'R':
            cout << "STOP!" << endl;
            break;
        case 'y':
        case 'Y':
            cout << "GET READY!" << endl;
            break;
        case 'g':
        case 'G':
            cout << "GO!" << endl;
            break;
        default:
            cout << "Invalid input! Please enter r, y, or g." << endl;
    }

    return 0;
}


