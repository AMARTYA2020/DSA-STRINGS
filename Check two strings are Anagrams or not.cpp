#include<bits/stdc++.h>
using namespace std;

// FIRST METHOD USING SORTING 
// TIME COMPLEXITY-O(nlogn) SPACE COMPLEXITY-O(n)
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

// USING HASHING: TIME COMPLEXITY-O(n)  SPACE COMPLEXITY-O(n)
#include<bits/stdc++.h>
using namespace std;
bool areanagrams(char* str1,char* str2){
    int c1[256]={0};
    int c2[256]={0};
    
    for(int i=0;str1[i] && str2[i];i++){
        c1[str[i]]++;
        c2[str[i]]++;
    }
    
    if(str1[i] || str2[i])
        return false;
    
    for(int i=0;i<256;i++){
        if(str1[i]!=str2[i])
            return false;
        return true;
    }
}



















