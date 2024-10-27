#include<bits/stdc++.h>
using namespace std;
void vsort(vector<int>& v)
{
    sort(v.rbegin(),v.rend());
}
int main()
{

    int n,sum=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    vsort(v);
    int flag=0,i=0,j=0;
    while(i<n && j<=sum/2)
    {
        j+=v[i];
        i++;
        flag++;
    }
    cout<<flag<<endl;
}

