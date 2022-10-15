// Pair And Vectors...

#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair<int, string> p;
    // p = make_pair(2, "Akhil");
    cin >> p.first;
    cin >> p.second;
    // p = {2, "Akhil Upadhyay"};
    pair <int, string> p1 = p;    // By value
    p1.first = 10;
    cout << p1.first << " " << p1.second << endl;
    cout << p.first << " " << p.second << endl;


    pair <int, string> &p2 = p;   // By reference
    p2.second = "Nikhil";
    cout << p2.first << " " << p2.second << endl;
    cout << p.first << " " << p.second << endl << endl;


// Why we use pair => for maintain relationship between two things.


    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};
    // Here a and b is related to each other....

    pair<int, int> p_array[3];   // Always used vector of array for this....
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};

    swap(p_array[0], p_array[2]);

    // For print this pair array...
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
    

    return 0;
} 