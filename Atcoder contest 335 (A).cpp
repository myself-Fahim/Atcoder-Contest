#include<bits/stdc++.h>
using namespace std;
int main()
{
    char S[105];
    gets(S);
    int length=strlen(S);
    S[length-1]='4';
    for(int i=0;i<length;i++)
    {
        cout<<S[i];
    }
}
