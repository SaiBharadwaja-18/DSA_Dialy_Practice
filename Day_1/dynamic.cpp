#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1, 2, 3, 4, 5};
    // reverse(arr.begin(), arr.end());
    
    int start=0;int end=arr.size()-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    arr.push_back(6);
     for(int a:arr){
        cout<<a<<" ";
    }
    cout<<endl;
    reverse(arr.begin(), arr.end());
    for(int a:arr){
        cout<<a<<" ";
    }
    arr.erase(arr.begin());
    cout<<endl;
    for(int a:arr){
        cout<<a<<" ";
    }
}