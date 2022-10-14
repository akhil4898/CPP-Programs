#include <iostream>

using namespace std;

namespace ns1{
    int value(){
        return 5;
    }

    int value(int n){
        return 5*n;
    }

}

namespace ns2{
    const double x = 100;
    double value(){
        return 2*x;
    }

    int Akhil = 21;

} // namespace ns2


int main(){
    int n = 10;
    if (n >= 10 ? n = 150 : n = 100)
    {
        cout << "value of n is: " <<  n << "\n" ;
    }
    cout << ns1::value(n) << endl;

    // cout << "NS1 : " << ns1::value() << endl;
    // cout << "NS2 : " << ns2::value() << endl;
    // cout << "NS2 (x) : " << ns2::x << endl; 
    // cout << "NS1 (n) : " << ns1::value(n) << endl;
    // cout << "NS2 (Akhil) : " << ns2::Akhil << endl;
    // return 0;
}