#include<bits/stdc++.h>

using namespace std;

bool cmp(int a,int b)
{
    return (a>b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,k,a[35],b[35];
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i = 0;i<n;i++)
            cin >> a[i];
        for(int i = 0;i<n;i++)
            cin >> b[i];
        sort(a,a+n);
        sort(b,b+n,cmp);
        int cnt = 0;
            for(int i = 0;i<n;i++)
            {
                    if(cnt == k)break;
                    if(a[i] < b[i])
                    {
                        cnt++;
                        swap(a[i],b[i]);
                    }
            }
        int sum = 0;
        for(int i = 0;i<n;i++)
        {
            sum += a[i];
        }
        cout << sum << "\n";
    }

    return 0;
}
