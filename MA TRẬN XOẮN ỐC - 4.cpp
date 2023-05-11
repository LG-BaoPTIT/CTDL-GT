#include<bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
int main() 
{
    int n,x,index=0;
    cin >> n;
    int a[n][n], b[n * n + 1];
    vector<int> v;
    for (int i=1; i<=n*n; i++)
    {
      cin >> x;
      v.push_back(x);
    }
    sort(v.begin(),v.end());
    int size=n-1, h = n * n, d = 0, l1 = 0;
    while (d <= n / 2) 
    {
      for (int i = d; i <= size; i++) a[d][i]=v[index++];
      if (index == h) break;
      for (int i = d + 1; i <= size; i++) a[i][size]=v[index++];
      if (index == h) break;
      for (int i = size - 1; i >= d; i--) a[size][i]=v[index++];
      if (index == h) break;
      for (int i = size - 1; i > d; i--) a[i][d]=v[index++];
      if (index == h) break;
      d++, size--;
    }
    for (int i = 0; i < n; i++)
    {
      for (int j=0; j<n; j++)
        cout << a[i][j] << " ";
      cout << "\n";
    }
    return 0;
}