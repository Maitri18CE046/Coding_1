#include<iostream>
using namespace std;

int f_one(int arr[],int n)
{
    int a=0;
    int ans=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)       //if number is 0 then we don't consider it in output
            a=0;
        else
        {
            a++;            //if number is not 0 then add 1 in output
            ans=max(ans,a);
        }
    }
    return ans;
}

int main()
{
    int arr[]={0,1,1,1,0,0,0,1,1,1,1,1,0,1,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"maximum consecutive 1's is "<<f_one(arr, n)<< endl;
    return 0;
}
