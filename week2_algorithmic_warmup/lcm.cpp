#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
  if (b == 0) 
        return a; 
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
	return (a*b)/gcd(a, b);
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << lcm(a, b)<<endl;
  return 0;
}