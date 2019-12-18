#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void bubble(int arr[],int n)
{
    int pass,j,flag;
    for(pass=0;pass<n;pass++)
    {
        flag=0;
        for(j=1;j<n-pass;j++)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]);
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}
void printArr(int arr[],int size)
{

    for (int i=0; i < size; i++)
       {

       cout<<arr[i]<<endl;
       }
}
int main()
{
         int arr[]={9,5,8,2,1};
         int n=5;
         bubble(arr,n);
         cout<<"Sorted Array is: "<<endl;
         printArr(arr,n);
         return 0;
}











