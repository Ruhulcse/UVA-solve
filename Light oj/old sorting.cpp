#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int solve(int arr[],int n)
{
    vector< pair<int,int> >vec(n);
    for(int i=0;i<n;i++)
    {
        vec[i].first=arr[i];
        vec[i].second=i;
    }
    sort(vec.begin(),vec.end());
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(vec[i].second==i)
            continue;
        else
        {
           swap(vec[i].first,vec[vec[i].second].first);
           swap(vec[i].second,vec[vec[i].second].second);
        }
        if(i!=vec[i].second)
            --i;
        ans++;
    }
    return ans;
}
int main()
{
    IOS;
    int test;
    cin>>test;
    int cas=1;
    while(test--)
    {
        int input;
        cin>>input;
        int arr[input];
        for(int i=0;i<input;i++)
        {
            int n;
            cin>>n;
            arr[i]=n;
        }
        cout<<"Case "<<cas++<<": "<<solve(arr,input)<<endl;
    }
    return 0;
}
