/*
fibonacci Sequence hw w/ recursion:
input nth to caclulate to,
output sequence
W15664768
*/
# include <iostream>
# include <cmath>
using namespace std;

int fibo( int n)
{
  //base case 
  if (n == 0)
    return n;
  else if (n == 1)
    return n;
  else
  {
    int f = (fibo(n-1) + fibo(n-2));
    return f;
  }
}

int main()
{
  int n;
  cout << "Input furthest nth term: ";
  cin >> n;
  cout << "Fibonacci: " << fibo(n) << endl;
  int fa[n-1];
  for (int b = 0; b < n;b++)
  {
    fa[b] = fibo(b);
    cout << fa[b] << " ";
  }
  cout << fibo(n) << endl;
  return 0;
}