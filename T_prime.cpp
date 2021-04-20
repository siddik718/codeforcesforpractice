#include<bits/stdc++.h>
#define ll long long int
#define N 1000000
using namespace std;
vector<bool> prime(N+2,true);
void sieve(){
for(int i = 2;i*i<=N;i++){
    if(prime[i]){
        for(int j = i*i;j<=N;j+=i){
            prime[j] = false;
        }
    }
}
prime[0]=prime[1]=false;
}
int main(){
    sieve();
    ll n,x,y;
    cin >> n;
    while(n--){
        cin >> x;
        y = sqrt(x);
        if(((y*y) == x) && (x>1) && (prime[y] == true)){
            cout << "YES\n";
        }else
            cout << "NO\n";
    }
return 0;
}

