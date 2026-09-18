#include<iostream>
using namespace std;

void printDiagonalSum(int arr[][3],int rowSize)
{
    int sum = 0;
    for(int i = 0; i<rowSize; i++)
    {
        sum = sum + arr[i][2-i];
        
        
    }
    cout<<"Sum = "<< sum;
}

int main(){
    
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    printDiagonalSum(arr,3);
    
    return 0;
    
    
    
}