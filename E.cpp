#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,mx,my,N,sum=0;
        cin>>n>>mx>>my>>N;
        int arr1[n][mx];
        int arr2[n][my];
        int temp=min(mx,my)+N;
        int arr3[n][temp];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<mx;j++)
            {
                cin>>arr1[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<my;j++)
            {
                cin>>arr2[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<temp;j++)
            {
               if(j>=mx-N && j<=my-N)
               {
                   sum=arr1[i][j]+arr2[i][j-1];
                   arr3[i][j]=sum;
                   sum=0;
               }
               else if(j<mx-N)
               {
                arr3[i][j]=arr1[i][j];
               }
               else
               {
                   arr3[i][j]=arr2[i][j-N+1];
               }
            }

        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<temp;j++)
            {
                cout<<arr3[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}
