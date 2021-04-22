/*
 Solving : if (i+1) is prime then multiple of it's will be different color.
prime prices are color one and multiples of it's are color two.
*/
#include<bits/stdc++.h>
#define N 100000
using namespace std;
vector <bool> ar(N+5,true);
void sieve(int n){
for(int i = 2;i*i<=n+1;i++){
    if(ar[i]){
        for(int j = 2*i;j<=n+1;j+=i)
            ar[j] = false;
    }
}
}
int main(){
int n;
cin >> n;
   sieve(n);
if(n>2)
cout << "2\n";
else
cout << "1\n";
for(int i = 2;i<=n+1;i++){
    if(ar[i])
        cout << "1 ";
    else
        cout << "2 ";
}
return 0;
}

