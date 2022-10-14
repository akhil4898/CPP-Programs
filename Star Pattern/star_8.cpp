#include <iostream>

using namespace std;

void Pattern_1(int n){
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j<=i)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
        
    }
    
}

int main(){
    int n;
    cout << "Enter the number of stars for rows: ";
    cin >> n;
    cout << "Using For Loop..." << endl << "---------------------------" << endl;
    Pattern_1(n);  
    cout << "Now I will do it in a better way!!" << endl;
    return 0;
}