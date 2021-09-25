#--------------------------------------------EXPLAINATION--------------------------------------------------------#

#Let f(s,c) = (number of occurences of letter c in word s) - (number of occurences of all other letters in total in s)
#so f(s1+s2,c) = f(s1,c)+f(s2,c) 
#Given a sequence s1,s2,s3,......,sn ,a story consisting of subsequence si1,si2,.....sim is interesting iff there exists a letter c [a<=c<=e] such that 
#f(si1+si2+....+sim,c)=f(si1,c)+f(si2,c)+f(si3,c)+....f(sim,c)>0

#So we are interested in searching for letter c such that there exists a subsequence si1,si2,...sim of length m that satisfies the above equation.

#So we will iterate over [a,c] and find out a sequence of words that satisfies the above condition for each alphabet and print maximum of 5 answers.
#So first loop is for(c='a';c<='e',c++)
#Inside to above loop we will be finding maximum no of words for each character such that they form interesting story , that will be done by storing f(s,c) of each 
#word for each character. a[] will store f(s,c) for each character and we will consider (si1+si2+....+sim,c) for each character by sorting the array and picking out
#words that satisfy above condition.

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

