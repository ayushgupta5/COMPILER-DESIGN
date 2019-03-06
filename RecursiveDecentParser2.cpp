/*S-->A
A-->aBA'
A'-->dA'|NULL
B-->bBC|f
C-->g*/
#include<bits/stdc++.h>
using namespace std;
char s[100];
int i=0,error=0;
void S();
void A();
void Ads(); 
void B(); 
void C();
int main()
{
    cout<<"ENTER INPUT::"<<endl;
    gets(s); 
    S();
    if(i==strlen(s)&&error==0) 
    {
        cout<<"ACCEPT"<<endl;
    }
    else 
    {
        cout<<"REJECT"<<endl;
    }
}
void S()
{
    A();
}
void A()
{
    if(s[i]=='a')
    {
        i++; 
        B(); 
        Ads();
    }
    else 
    {
        error=1;
    }
}
void Ads()
{
    if(s[i]=='d')
    {
        i++; 
        Ads(); 
    }
}
void B()
{
    if(s[i]=='b')
    {
         i++; 
         B(); 
         C();
    }
    else if(s[i]=='f')
    {
        i++;
    }
    else 
    {
        error=1;
    }
}
void C()
{
    if(s[i]=='g')
    {
        i++;
    }
    else 
    {
        error=1;
    }
}
