#include<bits/stdc++.h>
using namespace std;
string s;
int i;
int main()
{
    int c,d,e,I,O;
    string s; cin>>s;
    c=d=e=i=O=0;
    if(s[0]=='0'||s[0]=='1'||s[0]=='2'||s[0]=='3'||s[0]=='4'||s[0]=='5'||s[0]=='6'||s[0]=='7'||s[0]=='8'||s[0]=='9')
    {
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='i') c++;
            if(c==0)
            {
                if(s[i]=='e') e++;
                else if(s[i]=='.') d++;
                else if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')I++;
            }
        }
    }
    else O=1;
    if(c==1&&d==0&&e==0) cout<<"COMPLEX"<<endl;
    else if(s[0]=='e'||(e==1&&d==0&&c==0)) cout<<"EXPONENTIAL"<<endl;
    else if(d==1&&e==0&&c==0) cout<<"DECIMAL"<<endl;
    else if(I>0&&d==0&&e==0&&c==0&&O==0) cout<<"INTEGER"<<endl;
    else cout<<"OTHER"<<endl;
}
