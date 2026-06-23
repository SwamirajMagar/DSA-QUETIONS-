#include<iostream>
#include<vector>
using namespace std;

int floordiv(int a, int b){

    int q = a / b;
    
    if ((a ^ b)<0 && a%b != 0)
    {
        q--;
    }
    return q;
}

int ceildiv(int a , int b){

    int q = a / b;

    if((a ^ b)>0 && a%b != 0){

        q++;
    }

    return q;

}

vector<int>floorceil(int a ,int b){

    vector<int>res;

    res.push_back(floordiv(a,b));
    res.push_back(ceildiv(a,b));

    return res;
}

int main(){

    int a , b;
    cin >>a>>b;

    vector<int>res = floorceil(a , b);
    cout<<res[0]<<" "<<res[1]<<endl;

    return 0;
}