#include <iostream>
using namespace std;

int main()
{
    /*
    cout<<"My name is Xeeshan Fareed\n";
    cout<<"Addition : "<<3+3<<endl;          // addidion
    cout<<"Multiplication : "<<3*3<<endl;   // endl for new line

    // how we get input through user

    int a;

    cout<<"Please Enter your input : ";
    cin>>a;  //get input
    cout<<"This is your input : "<<a<<endl; // print input which we get from user

    // user input string example

    string firstName;
    cout << "Type your first name: ";
    cin >> firstName; // get user input from the keyboard
    cout << "Your name is: " << firstName;

    //real life example of user input

    int x, y;
    int sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum<<endl;



    //Assignment Operator

     int x = 10;
     x += 5;
     cout << x;

    //Comparison Operator

    int x = 5;
    int y = 3;
    cout << (x > y);

     */


    // different data types with variable

    int number = 5;
    float value = 2.5;
    string name = "Ali";
    char letter = 'o';
    bool newbool = true;
    cout<<"The integer value is : " <<number;
    cout<<"\nThe float value is : " <<value;
    cout<<"\nThe string value is : " <<name;
    cout<<"\nThe char value is : " <<letter;
    cout<<"\nThe bool value is : " <<newbool;

    cout<<endl<<endl;

    // Declare Multiple variables

    int x , y , z;
    x = y = z = 50;
    cout<<"\nAddition : "<<x + y + z<<endl;
    cout<<"\nThree Varibale Values are : " <<x<<endl<<y<<endl<<z;

    return 0;
}
