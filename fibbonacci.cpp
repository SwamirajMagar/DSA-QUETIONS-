#include<iostream>
using namespace std;

int fib(int n){

    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    int ans = fib(n-1) + fib(n-2);

    return ans;

}

int main(){

    cout<<endl;
    int n;
    cout<<"term at location : ";
    cin >>n;

    cout<<endl;
    int ans = fib(n);
    cout<<n<<"th term of fibbonacci series: " << ans<<endl;

    cout<<endl;
    
    return 0;
}