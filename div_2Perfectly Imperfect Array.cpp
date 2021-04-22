#include<bits/stdc++.h>
using namespace std;
bool solve(int n){
int x = sqrt(n);
if(n == x*x)
    return true;
return false;
}
int main(){
int t;
cin >> t;
while(t--){
    int n,cnt = 0,pro = 1;
    cin >> n;
    int arr[n];

    for(int i = 0;i<n;i++)
        cin >> arr[i];
    for(int i = 0;i<n;i++){
        pro = arr[i];
        if(!solve(pro)){
            cout << "YES\n";break;
        }else
            cnt++;
    }
    if(cnt == n)
        cout << "NO\n";
}



return 0;
}
