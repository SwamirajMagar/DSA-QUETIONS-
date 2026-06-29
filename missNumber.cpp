#include<iostream>
using namespace std;

int missNO(int arr[], int n){

    int expected = n * (n+1)/2;
    int actual = 0;

    for (int i = 0; i < n; i++)
    {
        actual = actual + arr[i];
    }

    return expected - actual ;
    
}

int main(){

    int arr[5] = {1,2,4,5};
    int n = 5;
  
    int ans = missNO(arr, n);

    cout<<"missing no of arr is : "<<ans;
    
   return 0;
}