// Method: 1
// ----------

// This method uses the technique of the summation formula. 

// #include <bits/stdc++.h>

// using namespace std;

// int missingNumber(int arr[], int n)
// {
//     int temp;
//     temp = (n+1)*(n+2)/2;
//     for (int i = 0; i < n; i++)
//     {
//         temp = temp - arr[i];
//     }
//     return temp;
// }

// int main()
// {
//     int n;
//     cout << "Enter the Size of array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements of array: ";
//     for(int i = 0; i < n; i++)
//     {
//         cin >> arr[i]; 
//     }
//     cout << "Missing number is: " << missingNumber(arr, n) << endl;
//     return 0;
// }

// -------------------------------------------------------------------------------------------------------------------------------


// Method: 2
// ----------

// Modification fork overflow....

// Approach: The approach remains the same but there can be overflow if n is large. In order to avoid integer overflow, pick one number from known numbers and subtract one number from given numbers. This way there won’t have Integer Overflow ever.

#include <bits/stdc++.h>

using namespace std;

int getMissingNumber(int arr[], int n)
{
    int sum = 1;
    for (int i = 2; i < ; i++)
    {
        /* code */
    }
    
}

int main()
{
    int arr[] = {1, 2, 3, 5, 6};    // sizeof(arr)/sizeof(arr[0])
    cout << "The Missing number is: " << getMissingNumber(arr, sizeof(arr)/sizeof(arr[0])));
    return 0;
}