// Enter the number of stars for rows: 5
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 

#include <iostream>

using namespace std;

void Pattern_1(int n);
void Pattern_2(int n);

int main(){
    int n;
    cout << "Enter the number of stars for rows: ";
    cin >> n;
    cout << "Using For Loop..." << endl << "--------------------" << endl;
    Pattern_1(n);
    cout << "Using While Loop..." << endl << "--------------------" << endl;
    Pattern_2(n);
    return 0;
}

// Using For Loop...

void Pattern_1(int n){
    for (int  row = 1; row <= n; row++)
    {
        for (int colm = 1; colm <= n; colm++)
        {
            cout << "* "; 
        }
        cout << endl;
    }
}


// Using While Loop...

void Pattern_2(int n){
    int i = 1, j = 1;
    while (i <= n)
    {
        while (j <= n)
        {
            cout << "* ";
            j++;
        }
        i++;
        j = 1;
        cout << endl;
    }
    
}

