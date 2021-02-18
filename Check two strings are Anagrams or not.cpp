#include<bits/stdc++.h>
using namespace std;


bool areanagram(string str1,string str2)
{
    int n1=str1.lenght();
    int n2=str2.lenght();

    if(n1!=n2) return false;

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    for(int i=0;i<n1;i++){
        if(str[i]!=str[i]){
            return false;
        }
        return true;
    }

}





















