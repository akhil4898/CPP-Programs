// Pair And Vectors...

#include <bits/stdc++.h>

using namespace std;

void printVec(vector<pair<int, int>> &v){
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    // v.push_back(5);
}

int main()
{

// Pairs

    // pair<int, string> p;
    // // p = make_pair(2, "Akhil");
    // cin >> p.first;
    // cin >> p.second;
    // // p = {2, "Akhil Upadhyay"};
    // pair <int, string> p1 = p;    // By value
    // p1.first = 10;
    // cout << p1.first << " " << p1.second << endl;
    // cout << p.first << " " << p.second << endl;


    // pair <int, string> &p2 = p;   // By reference
    // p2.second = "Nikhil";
    // cout << p2.first << " " << p2.second << endl;
    // cout << p.first << " " << p.second << endl << endl;


// Why we use pair => for maintain relationship between two things.


    // int a[] = {1, 2, 3};
    // int b[] = {2, 3, 4};
    // // Here a and b is related to each other....

    // pair<int, int> p_array[3];   // Always used vector of array for this....
    // p_array[0] = {1, 2};
    // p_array[1] = {2, 3};
    // p_array[2] = {3, 4};

    // swap(p_array[0], p_array[2]);

    // // For print this pair array...
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << p_array[i].first << " " << p_array[i].second << endl;
    // }
    

// ===================================================================================================


// Vectors


    // int a[10];   // 10 size array of int type...
    // vector<int> v;   // Currently size is 0. But we can vary its size.
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    //     printVec(v); 
    // }


    // int n = 1e5;           // Vector and Array size not more than 1e5(10^5) in local or 1e7(10^7) in global.
    // int a[n];
    // a[n-1] = 20;                 
    // cout << a[n-1] << endl; 
    

// Directly initialize vector with value of 5.

    // vector<int> v;
    // v.push_back(2);
    // v.push_back(5);
    // printVec(v);
    // // v.pop_back();
    // printVec(v);
    // vector<int> &v1 = v;    // We use reference here then actual vector will passed to the function not copy.
    // v1.push_back(10);
    // printVec(v1);
    // printVec(v1);



    // We use string for vectors...

    // vector<string> s1;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     string x;
    //     cin >> x;
    //     s1.push_back(x);
    // }
    // printVec(s1);


    // Vector of pair...

    // vector<pair<int, int>> v = {{1, 2}, {2, 3},{3, 4}};

    vector<pair<int, int>> v;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    
    printVec(v);

    return 0;
} 