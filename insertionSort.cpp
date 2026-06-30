#include<iostream>
using namespace std;

void insert(int arr[], int n){

    for (int i = 1; i < n; i++)
    {  int temp = arr[i];

        int j = i-1;
        for (; j >= 0; j--)
        {
            if (temp<arr[j])
            {
              arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
    
}

int main(){
    int arr[5] = {34,2,22,6,1};
    insert(arr , 5);
    cout<<" sorted array is: ";
    for (int i = 0; i < 5; i++)
    {
       cout<< arr[i] << " ";
    }
    return 0;
}