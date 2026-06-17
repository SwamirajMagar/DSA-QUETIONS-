#include <iostream>
#include <vector>
using namespace std;

int main()
{

  vector<int> v;
  cout << "size->>" << v.size() << endl;

  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  cout << "size->>" << v.size()<<endl;

  cout<< "capacity--->"<<v.capacity()<<endl;

  v.clear();
   cout << "after clear size->>" << v.size()<<endl;
    cout<< "after capacity--->"<<v.capacity()<<endl;


  return 0;
}