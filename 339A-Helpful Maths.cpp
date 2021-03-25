#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);int a = 0,arr[105];
for(int i  = 0;i<s.size();i++){
    if(s[i] != '+')
        arr[a++] = s[i]-48;
}
sort(arr,arr+a);
if(a>1){
for(int i = 0;i<a-1;i++){
    printf("%d+",arr[i]);
}
printf("%d\n",arr[a-1]);
}else{
printf("%d\n",arr[a-1]);
}

return 0;
}
