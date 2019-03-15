#include<iostream>
#include<vector>
using namespace std;

typedef long long ll;

void sherlock(vector<ll>dayso, ll sum)
{

    if ( sum - dayso[dayso.size()-1] == 0 )
    {
        cout << "YES";
        return;
    }
    else
    {


        for ( ll i = 0; i < dayso.size() - 1 ; i++ )
        {
            ll tong = 0;
            for ( ll j = i + 1; j < dayso.size(); j++ )
            {
                tong = tong + dayso[j];
            }
            if (tong == sum - tong - dayso[i])
            {
                cout << "YES";
                return ;
            }
        }
    }
    cout << "NO";
    return ;
}
int main()
{
    ll test, tong, so;
    cin >> test;
    for (ll i = 0; i < test; i++ )
    {
        cin >> tong;
        vector<ll>dayso;
        long sum = 0;
        for ( int i = 0; i < tong; i++ )
        {
            cin >> so;
            sum = sum + so;
            dayso.push_back(so);
        }
        sherlock(dayso, sum);
        cout << endl;
    }

}
