/*
W15664768 Lupe Valle
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
/*
[gvalle3@hills fibonacci]$ ls
fibonacci.cpp
[gvalle3@hills fibonacci]$ g++ fibonacci.cpp
[gvalle3@hills fibonacci]$ ./a.out
Input furthest nth term: 5
Fibonacci: 5
0 1 1 2 3 5
[gvalle3@hills fibonacci]$ ./a.out
Input furthest nth term: 7
Fibonacci: 13
0 1 1 2 3 5 8 13
[gvalle3@hills fibonacci]$ ./a.out
Input furthest nth term: 9
Fibonacci: 34
0 1 1 2 3 5 8 13 21 34
[gvalle3@hills fibonacci]$
*/