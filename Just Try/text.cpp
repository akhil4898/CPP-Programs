// #include <iostream>
// #include <cstring>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    int _firstNo, _secondNo;
    cout << "Enter First Number: ";
    cin >> _firstNo;
    cout << "Enter Second Number: ";
    cin >> _secondNo;
    int Sum = 0, Subtraction = 0, Multiply = 0;
    float Division = 0.0;
    int i = 0;
    while(i < 10){    
    cout << endl << "Choose the Valid Option!!" << endl;
    cout << "1. Sum" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. multiply \n4. Division \n0. Exit" << endl << endl;
    int choose;
    cout << "Enter the valid Option: ";
    cin >> choose;   
    switch (choose)
    {
    case 1:
        Sum = _firstNo + _secondNo;
        cout << "Sum of First and Second Number is: " << Sum << endl;
        break;
    case 2:
        Subtraction = _firstNo - _secondNo;
        cout << "Subtraction of First and Second Number is: " << _firstNo - _secondNo << endl;
        break;
    case 3:
        Multiply = _firstNo * _secondNo;
        cout << "Multiply of First and Second Number is: " << _firstNo * _secondNo << endl;
        break;
    case 4:
        Division = float(_firstNo) / float(_secondNo);
        cout << "Division of First and Second Number is: " << Division << endl;
        break;
    case 0: 
        cout << endl << "Thank you for Execute the Program :)" << endl << endl;
        exit(0);
    default:
        cout << "You Choose Invalid Option!!" << endl;
        break;
    }
    cout << endl << "Do you want to Choose another option again!! \nElse Enter Zero!" << endl << endl;
    }
    return 0;
}



// #include <bits/stdc++.h>
// #include <iomanip>

// using namespace std;

// int main(){
//     // string n_temp;
//     // cout << "Enter your name: " << endl;
//     // getline(cin, n_temp);
//     // cout << "Your name is: " << n_temp << endl;

//     float temp = 0.0;
//     cout << temp << endl;
//     temp++;
//     cout << "temp: " << temp << endl;
//     temp++;
//     cout << "temp: " << temp << endl;
//     return 0;
// }