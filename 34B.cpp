#include<bits/stdc++.h>
using namespace std;
void vsort(vector<int>& v)
{
    sort(v.begin(),v.end());
}
int main()
{

    int n,k,sum=0;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    vsort(v);
    int flag=0,i=0,j=0;
    while(i<k && v[i]<0)
    {
        j+=((-1)*v[i]);
        i++;

    }
    cout<<j<<endl;
}


