#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=(n*2)-1;i++)
        {
            for(int j=1;j<(n-i)*2;j++)
            {
                cout<<" ";
            }
            for(int k=i;k>=1;k--)
            {
                cout<<" "<<k;
            }
            for(int p=2;p<=i;p++)
            {
                cout<<" "<<p;
            }
            cout<<endl;
        }

    }
}
