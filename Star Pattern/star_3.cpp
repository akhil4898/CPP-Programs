// Enter the number of stars for rows: 5
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

#include <iostream>

using namespace std;

// Using For Loop...

void Pattern_1(int n){
     for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void Pattern_2(int n){
      for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout << "* ";

        }
        cout << endl;
    }
   
}

// Using While Loop...

void Pattern_3(int n){
    int i = 1, j = 1;
    while (i <= n)  
    {
        while (j <= n)
        {
            cout << "* ";   
            j++;

        }
        i++;
        j = i;
        cout << endl;
        
    }
    
}

void Pattern_4(int n){
    int i = 1, j = 1;
    while (i <= n)
    {
        while (j <= n-i+1)
        {
            cout << "* ";
            j++;

        }
        i++;
        j = 1;
        cout << endl;
    }
}

void Pattern_5(int n){
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i ; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
}

void Pattern_6(int n){
    int i = n, j = 1;
    while (i >= 1)
    {
        while (j <= i)
        {
            cout << "* ";
            j++;

        }
        i--;
        j = 1;
        cout << endl;
    }
    
}

int main(){
    int n;
    cout << "Enter the number of stars for rows: ";
    cin >> n;
    cout << "Using For Loop..." << endl << "--------------------" << endl;
    Pattern_1(n);
    cout << "Using For Loop (2nd Method)..." << endl << "------------------------------" << endl;
    Pattern_2(n);
    cout << "Using While Loop..." << endl << "--------------------" << endl;
    Pattern_3(n);
    cout << "Using While Loop (2nd Method)..." << endl << "-----------------------------" << endl;
    Pattern_4(n);
    cout << "Using For Loop (3rd Method)..." << endl << "-----------------------------" << endl;
    Pattern_5(n);
    cout << "Using While Loop (3rd Method)..." << endl << "-----------------------------" << endl;
    Pattern_6(n);
    return 0;
}






