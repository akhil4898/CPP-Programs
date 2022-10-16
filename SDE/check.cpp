// C++ STL...

#include <bits/stdc++.h>

using namespace std;



void printVec(vector<int> &v){
    cout << "Size: " << v.size() << endl;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    //     // cout << v[i].first << " " << v[i].second << endl;
    // }
    // // v.push_back(5);

    for(auto &val : v)
    {
        cout << val << " ";
    }
    // v.push_back(5);
    cout << endl;
}





void printMap(map<string, int> &m)
{
    cout << "Map size is: " << m.size() << endl;
    for(auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}




void printUnorderedMap(unordered_map<int, string> &m)
{
    cout << "Size of Unordered map is: " << m.size() << endl;
    for(auto &val : m)
    {
        cout << val.first << " " << val.second << endl;
    }
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







// Vector and Array size not more than 1e5(10^5) in local or 1e7(10^7) in global.

    // int n = 1e5;           
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
    // vector<pair<int, int>> v;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x, y;
    //     cin >> x >> y;
    //     // v.push_back(make_pair(x, y));
    //     v.push_back({x, y});
    // }
    // printVec(v);







// Array of vectors   v\s   Vector of Vectors...

    // int N;  
    // cin >> N;
    // vector<int> v[N];
    // for (int i = 0; i < N; i++)
    // {
    //     int n;
    //     cin >> n;
    //     for (int j = 0; j < n; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         v[i].push_back(x); // we are pushing elements in vector. when v[i = 0], v[i = 1], and v[i = 2].
    //     }
    // }

    // v[0].push_back(20);
    // v[1].push_back(40);
    // cout << "Vectors are: " << endl;
    // for (int i = 0; i < N; i++)
    // {
    //     printVec(v[i]);
    // }
    // cout << v[0][0] << endl;







// Vector of Vectors... 
        
    // int N;
    // cin >> N;
    // vector<vector<int> > v;
    // for (int i = 0; i < N; i++)
    // {
    //     int n;
    //     cin >> n;
    //     vector<int> temp;
    //     // v.push_back(vector<int> ());
    //     for (int j = 0; j < n; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         temp.push_back(x);
    //         // v[i].push_back(x);
    //     }
    //     v.push_back(temp);        
    // }
    // v[0].push_back(10);
    // v[1].push_back(20);
    // v.push_back(vector<int> ());   // we push_back the empty vector...
    // for (int i = 0; i < v.size(); i++)
    // {
    //     printVec(v[i]);
    // }
    // cout << v[0][1] << endl;






// Iterations...


    // vector<int> v = {2, 3, 4, 5, 6, 7};
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;



    // // declare Iterator...
    // vector<int> :: iterator it = v.begin();
    // cout << (*(it + 1)) << endl;
    // // print elements using iterator...
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << (*it) << " ";
    // }
    // cout << endl;




    // // declare vector of pair to iterate elements..
    // vector<pair<int, int> > v_p = {{1,2}, {2,3}, {4,5}};    
    // vector<pair<int,int>> ::iterator it;
    // for ( it = v_p.begin(); it != v_p.end(); it++)
    // {
    //     // cout << (*it).first << " " << (*it).second << endl;
    //     cout << it->first << " " << it->second << endl;
    //     // (*it).first <=> it->first both are same....
    // }
    



    // Range based loops...
    // vector<int> v = {2,3,4,5,6,7};
    // for(int &value : v)     // Always use reference operator for actual vector not copy of vector...
    // {
    //     // value++;
    //     cout << value << " ";
    // }
    // cout << endl;

    // Pair

    // vector<pair<int, int>> v_p = {{1,2}, {2,3}, {3,4}};
    // for(pair<int, int> &value : v_p)
    // {
    //     cout << value.first << " " << value.second << endl;
    // }
    

    // Auto keyword....

    // auto a = 1.230;
    // cout << a << endl;
    // vector<int> v = {1,2,3,4,5,6};
    // vector<int> :: iterator it;
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << (*it) << " ";
    // }
    // cout << endl;

    // We also use auto keyword for print vector elements And we don't need to write this statement [ vector<int> :: iterator it; ]....
    // for(auto it = v.begin(); it != v.end(); it++)
    // {
    //     cout << (*it) << " ";
    // }
    // cout << endl;

    // We also use (Auto Range Loop) for print vector elements....
    // Best practice for use with auto keyword...
    // for (auto &value : v)
    // {
    //     cout << value << " ";
    // }
    // cout << endl;



    

    
// Maps...(ordered maps or simple maps...)

    // Time complexity of insertion, find, erase, and accessing the element in map is -> O(log(n)) 
    // map<int, string> m;
    // m[1] = "Akhil";    //TC - > O(log(n))
    // m[9] = "Rahul";
    // m[2] = "Nikhil";
    // m[9] = "Shanti"; // Updated value will be store in same key...
    // // m[6]; //  empty string will inserted in this...

    // // Another way to initialize maps..
    // m.insert({3, "Rohan"});
    // m.insert(make_pair(5, "Mukul"));
    // printMap(m);              // Function call....

    // map<int, string> :: iterator it;



// Find Operation....

    // auto it = m.find(1);     // Always return iterator (it)....
    // if (it == m.end())
    //     cout << "No value exist..." << endl;
    // else
    //     cout << "Value found.. :)" << endl;
    //     cout << it->first << " " << it->second << endl;

    


// Erase Operation....
    // auto it = m.find(3);
    // if(it != m.end())
    //     m.erase(it);
    // printMap(m);
    // m.clear();
    // printMap(m);

    // map<int, string> :: iterator it;
    // for(it = m.begin(); it != m.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    // cout << "==============================" << endl;

    // for(auto &value : m)
    // {
    //     cout << value.first << " " << value.second << endl;
    // }
    

    // Time complexity of string keys are: 
    // [ s.size( ) * log(n) ]  Here, s is string.size().
    // map<string, string> m;
    // m["Akhil"] = "Lakhan";  // s.size() * log(n)      
    // m["Nikhil"] = "Ram";
    // printMap(m);





// Print unique strings in lexiographical order with their  frequency...
    // map<string, int> m;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     string s;
    //     cin >> s;
    //     m[s]++;
    // }
    // printMap(m); 







// Unordered Maps....
// Time complexity of unordered map of insertion, find, erase, and Accessing is: O(1).

    unordered_map<int, string> m;
    m[9] = "Sohan";   //O(1)
    m[1] = "Akhil";
    m[5] = "Mohan";
    m.insert({3, "Lakhan"});
    m[5] = "Rohan";
    // for(auto &val : m)
    // {
    //     cout << val.first << " " << val.second << endl;
    // }
    printUnorderedMap(m);



// Find operation in unordered map...
    // auto it = m.find(1);
    // if(it == m.end())
    // {
    //     cout << "Value not found..." << endl;
    // }
    // else
    // {
    //     cout << "Value found..." <<  endl;
    //     cout << (*it).first << " " << it->second << endl;
    // }
    // printUnorderedMap(m);




// Erase Operation in Unordered map...
    // if(it != m.end())
    //     m.erase(it);
    // else 
    //     cout << "Value not found..." << endl;
    // printUnorderedMap(m);
    







    return 0;   
} 