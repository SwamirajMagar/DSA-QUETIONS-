#include<iostream>
using namespace std;



void update(int** p2){

    **p2 = **p2 + 2;

}


int main(){

    int i = 3;

    cout<<"ptr is "<<i<<endl;


    int *ptr = &i;

    cout<<"ptr is "<<ptr<<endl;
    cout<<"ptr is "<<*ptr<<endl;

    int **ptr2 = &ptr;

    cout<<"ptr2 is "<<ptr2<<endl;

     cout<<"ptr2 is "<<**ptr2<<endl;
   
     cout<<endl<<endl;

     update(ptr2);

     cout<<**ptr2;

     cout<<endl;

    return 0;
}