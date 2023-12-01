#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define nl '\n' 
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define mod 1000000007
#define pi 3.1415926535897932384626433832795
#define lpz(i, a, b) for (int i=a; i<b; i++)
#define lp(i, a, b) for (int i=a; i<=b; i++)
#define test() int t; cin>>t; while(t--)
#define ull unsigned long long



void solve()
{
    int r, c;

    cout << "Enter number of rows : ";
    cin >> r;
    cout << nl;
    cout << "Enter number of columns : ";
    cin >> c;
    cout << nl;

    int first[r][c], second[r][c], sum[r][c];

    cout << nl << "Enter elements of 1st matrix: " << nl;

    for(int i = 0; i < r; ++i)
       for(int j = 0; j < c; ++j)
       {
           cin >> first[i][j];
       }

    cout << nl << "Enter elements of 2nd matrix: " << nl;
    for(int i = 0; i < r; ++i)
       for(int j = 0; j < c; ++j)
       {
           cin >> second[i][j];
       }


    for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
            sum[i][j] = first[i][j] + second[i][j];

    cout << nl << "Result of two matrix is: " << nl;
    for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << nl;
        }


}

int main()
{
    solve();

    return 0;
}