// Pair And Vectors...

#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair<int, string> p;
    // p = make_pair(2, "Akhil");
    p = {2, "Akhil Upadhyay"};
    pair <int, string> p1 = p;    // By value
    p1.first = 10;
    cout << p1.first << " " << p1.second << endl;
    cout << p.first << " " << p.second << endl;
    pair <int, string> &p2 = p;   // By reference
    p2.second = "Nikhil";
    cout << p2.first << " " << p2.second << endl;
    cout << p.first << " " << p.second << endl;
    return 0;
} 