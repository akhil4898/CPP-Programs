// Enter the number of stars for rows: 5
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 

#include <iostream>

using namespace std;

// Using For Loop...

void Pattern_1(int n){
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j >= i)
                cout << "* ";
            else
                cout << " ";
        }
        cout << endl;
    }  
}

// Using While Loop...

void Pattern_2(int n){
    int i = n, j = 1;
    while (i >= 1)
    {
        while (j <= n)
        {
            if (j >= i)
                cout << "* ";
            else
                cout << " ";
            
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
    cout << "Using For Loop..." << endl << "-----------------------" << endl;
    Pattern_1(n);
    cout << "Using While Loop..." << endl << "-----------------------" << endl;
    Pattern_2(n);
    return 0;
}