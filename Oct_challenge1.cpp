#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void FindUnique(int arr[], int n)
{
    sort(arr,arr+n);                        //answer should be in sorted form
    for (int i=0; i<n; i++)
    {

       while(i< n-1 && arr[i]==arr[i+1])        //if element is repeated then move to next index
          i++;

       cout << arr[i] << " ";                   //print array answer
    }
}

int main()
{
    int arr[] = {23,45,78,9,2,-1,-23,23,45,67,78,9,22,2};
    int n = sizeof(arr)/sizeof(arr[0]);         //n is number of inputs
    FindUnique(arr,n);                          //call the function
    return 0;
}
