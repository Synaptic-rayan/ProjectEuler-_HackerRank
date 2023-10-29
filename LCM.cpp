#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
  if (b == 0)
  {
    return a;
  }
  return gcd(b, a % b);
}

int lcm(int a, int b)
{
  return (a * b) / gcd(a, b);
}

int findLCM(int n)
{
  if (n == 1)
  {
    return 1;
  }
  return lcm(n, findLCM(n - 1));
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int N;
    cin >> N;
    int result = findLCM(N);

    cout << result << endl;
  }
  return 0;
}
