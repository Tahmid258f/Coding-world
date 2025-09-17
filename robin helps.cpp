#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        int g=0,c=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>=k)
            {
                g+=arr[i];
            }
            else if(arr[i]==0){
                if(g>0)
                {
                    g--;
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
}
