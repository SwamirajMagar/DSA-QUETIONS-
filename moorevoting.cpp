#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int candidate = -1;
    int count = 0;

    for (int num : nums)
    {
        if (count == 0)
        {
            candidate = num;
            count = 1;
        }
        else if (num == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    count = 0;
    for (int num : nums)
    {
        if (num == candidate)
        {
            count++;
        }
    }
        if (count > nums.size() / 2)
        {
            return candidate;
        }
        else
        {
            return -1;
        }
    
}

int main()
{
    vector<int> S = { 1 ,1, 1, 3};

    int ans = majorityElement(S);

    if (ans != -1)
    {
        cout << "majority element is : " << ans;
    }
    else{
        cout<<"No majority element found";
    }
}