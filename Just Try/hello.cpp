#include <iostream>

using namespace std;

int LeftRotate(int arr[], int d, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[(i + d) % n] << " ";
        cout << endl
        
    }
    return 0;
}

// int printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
    
// }

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof (arr[0]);
    int d = 3;

    //Function calling
    LeftRotate(arr, d, n);
    cout << endl;
    // printArray(arr, n); 
    return 0;
}