#include<bits/stdc++.h>
using namespace std;
int main()
{
    int CS,i;
    int A[6][2];
    A[0][0]=1;A[0][1]=4;
    A[1][0]=2;A[1][1]=5;
    A[2][0]=3;A[2][1]=4;
    A[3][0]=2;A[3][1]=5;
    A[4][0]=5;A[4][1]=5;
    A[5][0]=5;A[5][1]=5;
    char s[100];
    cout<<"ENTER STRING (DFA)::"<<endl;
    cin>>s;
    CS=0;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]!='a'&&s[i]!='b')
        {
            cout<<"NOT ACCEPTED"<<endl;
            CS=-1;
            break;
        }
        if(s[i]=='a') {CS=A[CS][0]; cout<<CS<<" ";}
        else {CS=A[CS][1]; cout<<CS<<" ";}
    }
    cout<<endl;
    if(CS==-1) cout<<"STRING NOT ACCEPTED"<<endl;
    if(CS==1||CS==4) cout<<"STRING ACCEPTED"<<endl;
    else cout<<"STRING NOT ACCEPTED"<<endl;
}
