#include<bits/stdc++.h>


long long MaxPairwiseProduct(const std::vector<long int>& numbers) {
    long long max_product;
    max_product = 0;
    long int max1 = INT_MIN, max2 = INT_MIN;
    long int n = numbers.size();

    long int i, index;

    for(i = 0; i<n; i++)
    {
        if(numbers[i]>=max1)
        {
            max1 = numbers[i];
            index = i;
        }
    }

    for(i = 0; i<n; i++)
    {
        if(numbers[i]>=max2)
        {
            if(i == index)
                continue;
             max2 = numbers[i];
        }
    }
    max_product = max1*max2;

    return max_product;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<long int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    long long result = MaxPairwiseProduct(numbers);
    std::cout << result << "\n";
    return 0;
}
