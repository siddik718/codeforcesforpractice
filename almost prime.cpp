#include<bits/stdc++.h>
#define N 3005
using namespace std;
vector <bool> prime(N,true);
void sieve(){
prime[0] = prime[1] = false;
for(int i = 2;i*i<N;i++){
    if(prime[i]){
        for(int j = i*i;j<N;j+=i){
            prime[j]= false;
        }
    }
}
}
bool isalmostprime(int n){
vector <int> v;
int cnt = 0;
for(int i = 1;i<=sqrt(n);i++){
    if(n%i == 0){
        v.push_back(i);
        if(n/i != i)
            v.push_back(n/i);
    }
}
for(int i = 0;i<v.size();i++){
    if(prime[v[i]])
        cnt++;
}
if(cnt == 2) return true;
else return false;
}
int main(){
    sieve();

int n,cnt = 0;
cin >> n;
for(int i = 1;i<=n;i++){
if(isalmostprime(i))
    cnt++;
}
cout << cnt << endl;
return 0;
}
