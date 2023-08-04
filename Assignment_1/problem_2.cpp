#include <bits/stdc++.h>
using namespace std;


const int N=1e5+7;
int nums[N];


void find_num(int l,int r,int k){
    if(l>r){
        cout<<"Not Found"<<endl;
        return;
    }
    int mid=(l+r)/2;
    if (nums[mid]==k)
    {
        cout<<mid<<endl;
        return;
    }else if (nums[mid]>k)
    {
        find_num(l,mid-1,k);
    }else if (nums[mid]<k){
        find_num(mid+1,r,k);
    }
   
}
int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    int k;cin>>k;
    find_num(0,n-1,k);
    return 0;
}
