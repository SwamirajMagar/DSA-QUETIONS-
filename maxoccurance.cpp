#include<iostream>
#include<string>
using namespace std;

char maxoccurance(string s){
    int arr[26] = {0};
    //getting no of occurance of char
    for (int  i = 0; i < s.length(); i++)
    {
       char ch = s[i];
       int number = 0;
       number = ch - 'a';
       arr[number]++;
    }

    //maximum occurnace
    int maxi = -1, ans ;
    for (int i = 0; i < 26; i++)
    {
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];

        }

    }
    char finalans = ans +'a';
    return finalans;
}



int main(){
    string s;
    cin>>s;

    cout<<"max occurance char is:"<<maxoccurance(s);
}