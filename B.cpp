#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1,x2,x3,x4,y1,y2,y3,y4;
        cin>>x1>>y1>>x2>>y2;
        cin>>x3>>y3>>x4>>y4;
        if(y1==y3 || y2==y4)
        {

            if(x1<=x3 || x1<=x4 || x2<=x3 || x2<= x4)
            {
                cout<<"YES"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
