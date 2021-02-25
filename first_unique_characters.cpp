#include<bits/stdc++.h>
using namespace std;

int firstUniqueChar(string s)
{
    int hash[26]={0};
    int n=s.length();
    for(int i=0;i<n;i++){
        hash[s[i]-'a']++;
    }
    for(int i=0;i<n;i++){
        if(hash[s[i]-'a']==1){
            return i;
        }
    }
    return -1;
}
