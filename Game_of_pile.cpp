#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(arr[0]%2==0)
        {
            cout<<"CHEFINA"<<endl;
        }
        else{
            cout<<"CHEF"<<endl;
        }
    }
}
