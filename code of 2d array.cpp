#include<iostream>
using namespace std;


void printRowSum(int arr[][4],int rowsize,int colsize){
    for(int i = 0; i<rowsize; i++){
        int sum = 0;
        
        for(int j = 0; j<colsize; j++){
            sum = sum + arr[i][j];
        }
        cout<< sum << endl;
    }
}








int main(){
    
    int arr[3][4]={
        
        {10,10,10,10},
        {20,20,20,20},
        {30,30,30,30}
        
        
        
        
    };
    
    int rowsize = 3;
    int colsize = 4;
    
    printRowSum (arr, rowsize, colsize);
    
    
}