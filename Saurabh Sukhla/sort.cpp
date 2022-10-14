// #include <algorithm>
// #include <iostream>
#include <bits/stdc++.h>

using namespace std;

void show(int a[], int array_size){
    for (int i = 0; i < array_size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    int a[] = {1, 5, 8, 7, 6, 9, 0};
    // size of array...
    int array_size = sizeof(a)/sizeof(a[0]);
    // cout << "Array before sorting..." << endl;
    // print the array...
    // show(a, array_size);
    // Sort the array...
    // sort(a, a + array_size);
    // cout << "Array after sorting..." << endl;
    // show(a, array_size);
    // binary_search(a, a + array_size, 5);
    // if (binary_search(a, a + array_size, 10))
        // cout << "Element found..." << endl;
    // else
        // cout << "Element not found..." << endl;
    // sort in decending order...
    // sort(a+2, a + array_size, greater<int>());
    // print array...
    // cout << "Array after sorting in decending order..." << endl;
    // show(a, array_size);
    return 0;
}
