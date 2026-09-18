#include <iostream>
using namespace std;

void transposeMatrix(int arr[][3], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[j][i] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    transposeMatrix(arr, 3);

    return 0;
}