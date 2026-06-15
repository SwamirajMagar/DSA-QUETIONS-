#include <iostream>
using namespace std;

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    } cout<<endl;
    return ;
}
void swapalter(int arr[], int size ){

    for (int i = 0; i < size; i=i+2)
    {
       if (i+1 < size)
       {
         swap(arr[i], arr[i+1]);
       }

    }
    return;
}

int main(){

    int even[8] = {5,2,9,4,2,7,8,0};
    int odd[5] = {11,33,21,45,43};

    swapalter(even , 8);
    printarray(even , 8);
    cout<<endl;
    swapalter(odd , 5);
    printarray(odd , 5);

    cout<<"everything is fine";

    return 0;
}



