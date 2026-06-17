#include<iostream>
using namespace std;

void bubble(int arr[], int n){

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
               swap(arr[j], arr[j+1]);
            }
            
        }
        
    }
    return ;
}

int main(){
    int arr[5] = {34,2,22,6,1};
    bubble(arr , 5);
    cout<<" sorted array is: ";
    for (int i = 0; i < 5; i++)
    {
       cout<< arr[i] << " ";
    }
    return 0;
}