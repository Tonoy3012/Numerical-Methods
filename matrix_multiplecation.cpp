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
  cout << "Enter the number of row : ";
  int row , col;
  cin >> row ;

  cout << "Enter the number of column : ";
  cin >> col;

  
  int first[row][col] , second[row][col];
  
  cout << "Enter 1st matrix : " << nl;
  for(int i = 0; i < row;i++)
  {
    for(int j = 0;j < col;j++)
    {
      cin >> first[i][j];
    }
  }
  cout << "Enter 2nd matrix : " << nl;
  for(int i = 0; i < row;i++)
  {
    for(int j = 0;j < col;j++)
    {
      cin >> second[i][j];
    }
  }
  
  int res[row][col];
  
  for(int i = 0; i < row;i++)
  {
    for(int j = 0;j < col;j++)
    {
      res[i][j] = 0;
      for(int k = 0; k < col;k++)
      {
        res[i][j]+= first[i][k]*second[k][j]; 
      }
    }
  }
  
  cout << "Multiplication result : " << nl;
  for(int i = 0; i < row;i++)
  {
    for(int j = 0;j < col;j++)
    {
      cout << res[i][j] << " ";
    }
    cout << nl;
  }
  cout << nl; 

}

int main()
{
    solve();

    return 0;
}