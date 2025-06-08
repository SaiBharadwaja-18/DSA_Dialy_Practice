#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    // int temp[n];
    // int t=5;
    // for(int i=0;i<n;i++){
    //     temp[i]=arr[--t];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<temp[i]<<" ";
    // }

    // reverse(arr, arr+n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    //Inplace
    int start=0;
    int end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}