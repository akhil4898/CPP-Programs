// Enter the number of stars for rows: 5
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

#include <iostream>

using namespace std;

// Using For Loop...

void Pattern_1(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Using While Loop...

void Pattern_2(int n){
    int i = 1, j = 1;
    while (i <= n)
    {
        while (j <= i   )
        {
            cout << j << " ";
            j++;
        }
        i++;
        j = 1;
        cout << endl;
    }
    
}

int main(){
    int n;
    cout << "Enter the number of stars for rows: ";
    cin >> n;
    cout << "Using For Loop..." << endl << "---------------------" << endl;
    Pattern_1(n);
    cout << "Using While Loop..." << endl << "---------------------" << endl;
    Pattern_2(n);
    return 0;
}

