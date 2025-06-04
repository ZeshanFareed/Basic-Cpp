#include <iostream>
using namespace std;

int main()
{
    /*
    // for if condition
    int x = 20;
    int y = 18;

    if (x > y) {
    cout<<"x is greater than y";
    }

    cout<<endl<<endl;


    // for else condition

    int time = 20;
    if (time < 18) {
    cout << "Good day.";
    }
    else {
    cout << "Good evening.";
    }

    cout<<endl<<endl;


    // else if

    int age;

    cout << "Enter your age : ";
    cin >> age;

    if (age >=18) {
        cout<<"You'r Eligible for Voting";
    }
    else if (age > 0 && age < 18) {
        cout<<"You'r not Eligible for Voting ";
    }
    else {
        cout<<"Please enter a valid age!";
    }

    cout<<endl<<endl;

    //Real Life Example

    int password;

    cout << "Enter your Password : ";
    cin >> password;

    if (password == 1234) {
        cout<<"Correct Password! Door Opend";
    }
    else {
        cout<<"Wrong Password! Door Closed";
    }

    cout<<endl<<endl;

    // Find out Number Even or Odd or Zero

    int number;

    cout << "Enter your Number : ";
    cin >> number;

    if (number % 2 == 0) {
        cout<<"Number is Even";
    }
    else if (number == 0) {
        cout<<"Number is Zero";
    }
    else {
        cout<<"Number is Odd";
    }

    */


    /*

    // real life example

    int num;

    cout << "Enter your Marks : ";
    cin >> num;

    if (num >= 24 && num <=32)
    {
        cout<<"Your Grade is D";
    }
    else if (num >= 33 && num <= 38)
    {
        cout<<"Your Garde is C";
    }
    else if (num >= 39 && num <= 47)
    {
        cout<<"Your Grade is B";
    }
    else if (num >= 48 && num <=60)
    {
        cout<<"Your Grade is A";
    }
    else {
        cout<<"Your Grade is F";
    }

    */


    // Nested if else Example

    int a , b , c;

    cout << "Enter three number : ";
    cin >> a >> b >> c;

    if (a > b) {
        if (a > c) {
            cout << "The largest number of A: "<< a ;
        }
        else {
            cout << "The largest number of C: " << c ;
        }
    }

    else {
        if (b > c) {
            cout<<"The largest number of B: "<< b ;
        }
        else {
            cout<<"The largest number of C Else part: "<< c ;
        }
    }


}
