#include<iostream>
using namespace std;


void print(int *p){

    cout<<"the value is >"<<p<<endl;
    cout<<"the value is >"<<&p<<endl;

}

void update(int *p){

    *p = *p +1;

}


int main(){
    int value = 5;

    int *p = &value;

    print(p);
     update(p);
    cout<<"after"<<*p;
}