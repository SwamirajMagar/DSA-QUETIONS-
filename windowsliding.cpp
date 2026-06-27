#include<iostream>
#include<vector>
using namespace std;

int maxsumarray(vector<int>& arr , int k){
    int n = arr.size();
    int windowsum = 0;
    for (int i = 0; i < k; i++)
    {
       windowsum += arr[i];
    }

    int maxSum = windowsum;
    for (int i = k; i < n; i++)
    {
       windowsum = windowsum - arr[i -k] + arr[i];

       maxSum = max(maxSum , windowsum);
    }
    return maxSum;
}

int main(){
 vector<int> arr = {2,1,12,3,3,2};
 int k = 2;

 cout<<"maximum sum is :"<<maxsumarray(arr,k);

 return 0;
}