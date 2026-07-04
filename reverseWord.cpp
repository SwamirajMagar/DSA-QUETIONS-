#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void ReverseWord(vector<char> &s)
{
    int n = s.size();

    // Step 1: Reverse the entire string
    reverse(s.begin(), s.end());

    // Step 2: Reverse each word
    int start = 0;
    for (int end = 0; end <= n; end++)
    {
        if (end == n || s[end] == ' ')
        {
            reverse(s.begin() + start, s.begin() + end);
            start = end + 1;
        }
    }
}

int main()
{
    vector<char> S = {'t','h','e',' ','s','k','y',' ','i','s',' ','b','l','u','e'};
    ReverseWord(S);

    cout << "Reversed sentence: ";
    for (char c : S)
    {
        cout << c;
    }
    cout << endl;

    return 0;
}
