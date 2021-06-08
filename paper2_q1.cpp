//PAPER 2 QUESTION 1
//Program to print LEADERS

#include<bits/stdc++.h>
using namespace std;
void getleader(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                break;
            }

            if (j == n - 1)
                cout<<arr[i] <<" is a leader\n";
        }
    }
}

int main()
{
    int arr[] = { 16, 18, 12, 9, 1, 3 };
    int Totalsize = sizeof(arr) / sizeof(arr[0]);
    getleader(arr, Totalsize);
    return 0;
}
