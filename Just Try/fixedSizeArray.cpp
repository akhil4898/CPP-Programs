#include <iostream>
#include <iomanip>

using namespace std;

auto main() -> int 
{
    int const n_rows = 3;
    int const n_column = 4;
    int const m[n_rows][n_column] = 
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    for (int i = 0; i < n_rows; i++)
    {
        for (int j = 0; j < n_column; j++)
        {
            cout << setw(4) << m[i][j];
            // cout <<  m[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}
