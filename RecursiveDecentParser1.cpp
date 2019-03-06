/*
S-->+SS
S-->-SS
S-->0|1|2|3|4|5|6|7|8|9
*/
#include<bits/stdc++.h>
using namespace std;
void S();
int i,error;
char str[100];
int main()
{
    cout<<"ENTER STRING:"<<endl;
    gets(str); 
    S();
    if(i==strlen(str)&&error==0) 
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
    if(str[i]=='+')
    {
        i++; 
        S(); 
        S();
    }
    else if(str[i]=='-')
    {
        i++; 
        S(); 
        S();
    }
    else if(str[i]=='0') 
    {
        i++;
    }
    else if(str[i]=='1')
    {
        i++;
    }
    else if(str[i]=='2')
    {
        i++;
    }
    else if(str[i]=='3')
    {
        i++;
    }
    else if(str[i]=='4')
    {
        i++;
    }
    else if(str[i]=='5')
    {
        i++;
    }
    else if(str[i]=='6')
    {
        i++;
    }
    else if(str[i]=='7')
    {
        i++;
    }
    else if(str[i]=='8')
    {
        i++;
    }
    else if(str[i]=='9')
    {
        i++;
    }
    else 
    {
        error=1;
    }
}
