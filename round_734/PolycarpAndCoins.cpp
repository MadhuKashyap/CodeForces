#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c1,c2;
        cin>>n;
        int k=n/3;
        if((n-k)%2!=0)
        {
            c1=k;c2=n-2*k;
        }
        else
        {
            if(abs(k-(n-2*k))>abs(k-(n-k)/2))
            {
                c1=k;c2=(n-k)/2;
            }
            else
            {
                c2=k;c1=n-2*k;
            }
        }
        cout<<c1<<" "<<c2;
    }
    return 0;
}

