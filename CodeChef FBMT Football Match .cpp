#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {

        cin>>n;
        ll cntb=0,cntc=0,i;
        string a="",b="",c="";
        for(i=0; i<n; i++)
        {
            cin>>a;

            if(i==0)
            {
                b=a;
            }
            else if(a!=b && c=="")
            {
                c=a;
            }


            if(a==b)
            {
                cntb++;
            }
            else if(c==a)
            {
                cntc++;
            }

        }
        //cout<<b<<" "<<c;
        if(cntb>cntc)
        {
            cout<<b<<endl;
        }
        else if(cntb==cntc)
        {
            cout<<"Draw"<<endl;
        }
        else if(cntb<cntc)
        {
            cout<<c<<endl;
        }

    }
    return 0;
}
