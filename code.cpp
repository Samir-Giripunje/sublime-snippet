#include<bits/stdc++.h>
using namespace std;

#define sci(x)        int x; cin>>x
#define all(x)     (x).begin(), (x).end()
#define TC(x)          sci(x); while(x --)
#define print(v)     for(int i=0;i<v.size();i++)
#define endl        "\n"

int main(){
ios::sync_with_stdio(false);
TC(t)
{
    sci(n);
    int arr1[n];
    int arr2[n];
    for(auto i=0;i<n;i++){
         cin>>arr1[i];
    }
    for(auto i=0;i<n;i++){
         cin>>arr2[i];
    }
    int ans=0;
    for(auto i=0;i<n;i++){
         ans+=arr1[i]^arr2[i];
    }
    
    
}


return 0;
}