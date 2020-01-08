#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double pi=3.14159,R,r,area;
        int temp;
        cin>>R;
        temp=R*R+R*R;
        r= sqrt(double(temp))/2;
        area=pi*(r*r);
        printf("%.2lf\n",area);
    }
    return 0;
}
