#include <iostream>
using namespace std;

int main()
{


/*

    // While Loop

    int num = 1;

    while (num <= 10)
    {
        cout<<num<<endl;
        num++;
    }

*/


/*

    // do while loop

    int a = 10;
    do {
        cout<<a<<endl;
        a--;
    }
    while(a > 0);

*/


    //  for loop

    for(int a = 1; a <= 10; a++) {
        cout<<"Value of a : "<<a<<endl;
    }


     // Tables of 3
    for(int a = 1; a <= 10; a++) {
        cout<<"3 * "<< a <<" = "<< (3 * a) <<endl;
    }


    // Outer loop
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {  // Inner loop
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }



    cout<<endl<<endl;



    int n = 5;
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout<<" * ";
        }
        cout << endl;
    }



    cout<<endl<<endl;



    int no = 5;

    for (int i = 1; i <= no; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

}
