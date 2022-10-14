#include <iostream>
#include "file.h"

// #include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int array_size){
    for (int i = 0; i < array_size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}

// void introsortUtil(int arr[], int *begin, int *end, int depth){

// }

// void introsort(int arr[], int *begin, int *end){
//     int depthutil = 2 * log(end - begin);
//     introsortUtil(arr, begin, end, depthutil);
// }

int main(){
    int array[] = {8, 5, 2, 7, 4, 1};
    int n = sizeof(array) / sizeof(array[0]);
    printArray(array, n);
    foo::swap_It();
    return 0;
    // int n;
    // cout << "Enter the size: ";
    // cin >> n;
    // int array[n];
    // cout << "Enter the elements of array: " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> array[i];
    // }
}