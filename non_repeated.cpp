#include<iostream>
using namespace std;
int NonRepeated(int arr[],int n)
{
    for (int i=0;i<n;i++){
        int j;
        for(j=0;j<n;j++)
            if(i!=j&&arr[i]==arr[j])            //index should not be same
                break;
        if(j==n)                                //if these condition true then array is finished
            return arr[i];
    }
    return -1;
}
int main()
{
    int arr[] = {1,1,2,2,3,4,4,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);           //n is size of array
    cout<<NonRepeated(arr,n);
    return 0;
}
