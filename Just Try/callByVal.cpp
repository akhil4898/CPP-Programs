#include <iostream>
#include <string>
#include <cstring>

#define Zero 0
#define PI 3.14

using namespace std;

void changeByValue(int data);
void changeByRef(int *data);

int main()
{
    int data = 3;
    cout << "PI value is: " << PI << endl;
    cout << "Zero is: " << Zero << endl;
    changeByValue(data);
    cout << "Value of data is by value: " << data << endl;
    changeByRef(&data);
    cout << "Value of data is by ref: " << data << endl;
    return 0;
}

void changeByValue(int data)
{
    data = 5;
}

void changeByRef(int *data)
{
    *data = 5;
}
