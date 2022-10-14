// Enter the number of stars for rows: 5
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

#include <iostream>

using namespace std;

// Using For Loop...

void Pattern_1(int n){
    for (int i = 1; i <= 2*n-1; i++)
    {
        // created Formula...
        int totalColmInRow = i > n ? 2*n-i : i;
        for (int j = 1; j <= totalColmInRow; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// Using While Loop...

void Pattern_2(int n){
    int i = 1, j = 1;
    while (i <= 2*n-1)
    {
        int TotalColmInRow = i > n ? 2*n-i : i;
        while (j <= TotalColmInRow)
        {
            cout << "* ";
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
    cout << "Using For Loop..." << endl << "-----------------------" << endl;
    Pattern_1(n);
    cout << "Using While Loop..." << endl << "-----------------------" << endl;
    Pattern_2(n);
    return 0;
}

