#include<iostream>
using namespace std;

void merge(int *arr , int s , int e){

    int mid = (s+e)/2;
    
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first  = new int[len1];
    int *second = new int [len2];

    int mainArrInd = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrInd++];
    }
    
    mainArrInd = mid+1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrInd++];
    }

    //merge
    int index1 = 0;
    int index2 = 0;
    mainArrInd = s;
    
    while(index1 < len1 && index2 < len2){
       
        if (first[index1] < second[index2]){
            arr[mainArrInd++] = first[index1++];
        }
        else{
             arr[mainArrInd++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[mainArrInd++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrInd++] = second[index2++];
    }
    
    delete []first;
    delete []second;
    
}


void mergesort(int *arr, int s , int e){

    //base case
    if (s>=e) return ;

    int mid = (s+e)/2;
    //sort left arr
    mergesort(arr, s , mid);
    //sort right arr

    mergesort(arr, mid+1 ,e);

    merge(arr, s ,e);
    
}

int main(){

    int arr[9] = {4,6,1,5,2,3,8};
    int n = 9;

    mergesort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    
}