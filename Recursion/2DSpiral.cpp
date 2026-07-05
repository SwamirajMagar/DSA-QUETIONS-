#include<iostream>
#include<vector>

using namespace std;

void spiralform(vector<vector<int>> &arr, int cols, int rows)
{

    int count = 0;
    int total = cols * rows;

    int startcoln = 0;
    int startrow = 0;
    int endcoln = cols -1 ;
    int endrow = rows -1 ;

    while (count < total)
    {

        for (int col = startcoln ; count < total && col < endcoln; col++)
        {
            cout << arr[startrow][col] << " ";  
            count++;
        }
        startrow++;
        

        for (int row = startrow;count <total && row <= endrow; row++)
        {
            cout << arr[row][endcoln] << " "; 
            count++;
        }
        endcoln--;

        for (int col = endcoln;count <total && col >= startcoln; col--)
        {
            cout << arr[endrow][col] << " "; 
            count++;
        }
        endrow--;

        for (int row = endrow;count <total && row >= startrow; row--)
        {
            cout << arr[row][startcoln] << " "; 
            count++;
        }
        startcoln++;
        
    }
}

int main()
{

    vector<vector<int>> arr = {
        {1, 2, 3 ,23},
        {8, 9, 4, 11},
        {7, 6, 5, 12},
        {10, 11, 12, 13}
        };

    spiralform(arr, 4, 4);
}