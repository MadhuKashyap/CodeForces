#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc,l,r,k,d,n,m,x,t;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        string s[n+19];
        int a[n+10];
        //map<int,int> p;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(char ch='a';ch<='e';ch++)
        {
            m=INT_MIN;
            memset(a,0,sizeof(a));
            
            //p.clear();
            for(int i=0;i<n;i++)
            {
                t=0,k=0;
                for(char c:s[i])
                {
                    if(c!=ch)
                    {
                        t++;
                    }
                    else
                    {
                        k++;
                    }
                }
                a[i]=k-t;
            }
            sort(a,a+n);
            l=0;
            for(int i=n-1;i>=0;i--)
            {
                d+=a[i];
                if(d>0)
                    l++;
                else
                    break;
                    
            }
            m=max(l,m);
        }
        cout<<m;
    }
    return 0;
}

