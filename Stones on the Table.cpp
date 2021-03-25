#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt = 0;
    scanf("%d",&n);
    string s;
    cin >> s;
    for(int i = 0;i<s.size();i++){
        if(s[i] == s[i+1])
            cnt++;
    }
    printf("%d\n",cnt);
return 0;
}

