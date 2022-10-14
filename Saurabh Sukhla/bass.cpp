#include <iostream>
#include "file.h"

using namespace std;

namespace ns
{
    class bass;
    // {
    // public:
    //     void display(){
    //         cout << "Akhil Upadhyay" << endl;
    //     }   
    // };
    
} // namespace ns

class ns::bass
{

    public:
       void display(){
        
           cout << "Akhil Upadhyay..." << endl;
       }
};


int main(){
    ns::bass obj;
    obj.display();
    // cout << "Upadhyay's brothers : " << foo::value() << endl;
    return 0;
}