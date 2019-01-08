#include <bits/stdc++.h>
using namespace std;

int get_fibonacci_last_digit_naive(int n) {
    long num1, num2, num;
    int count;
    num2 = 0; //F0
    num1 = 1; //F1
    num = num1 + num2; //F2

    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
  
    for(int i = 3; i<=n; i++)
    {
        num2 = num1;
        num1 = num;
        num = (num1+num2)%10;
    }
    return num;
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    std::cout << c << '\n';
    }
