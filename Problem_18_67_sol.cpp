// Problem 18/67
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mp make_pair
#define pb push_back
#define fir first
#define sec second
#define pi pair<ll, ll>
#define f(a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define mod(a) a%(int)(1e9+7)
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll maxi_sum(vector<vector<ll>> arr,vector<vector<ll>> v,int i,int j)   // here i and j represent current row and column respectvely
{
    if (i>=v.size())
        return 0;
    else if (arr[i][j]==0)
        arr[i][j]= v[i][j]+max(maxi_sum(arr,v,i+1,j),maxi_sum(arr,v,i+1,j+1));
    return arr[i][j];
}

int main()
{
    ll a=0,n=0;
    cout<<"No of row ";
    cin>>n;
    vector<vector<ll>> v(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cin>>a;
            v[i].pb(a);
        }
    }
    vector<ll> vv(n,0);
    vector<vector<ll>> arr(n,vv);
    cout<<maxi_sum(arr,v,0,0)<<endl;
}
