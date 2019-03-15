#include <bits/stdc++.h>

using namespace std;

int n, m, a[200000 + 10], b[200000 + 10];

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    cin >> m;
    for(int i = 1; i <= m; i++) cin >> b[i];

    sort(a + 1, a + n + 1);
    sort(b + 1, b + m + 1);

    a[n + 1] = b[m + 1] = INT_MAX;

    int cnt1 = 0, cnt2 = 0, l = 1, r = 1;
    while(r <= m){
        cnt1 = cnt2 = 0;
        if(a[l] == b[r]){
            while(a[l] == a[l + 1]) cnt1++, l++;
            while(b[r] == b[r + 1]) cnt2++, r++;
            if (cnt1 != cnt2) cout << b[r] <<' ';
        } else {
            cout << b[r] <<' ';
            r++;
        }
        //cerr<< l <<' '<< r <<'\n';
        l++; r++;
    }

    return 0;
}
/*
10
11 4 11 7 13 4 12 11 10 14
15
11 4 11 7 3 7 10 13 4 8 12 11 10 14 12
*/
