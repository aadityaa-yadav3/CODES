#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int josephus(int n, int k){
    if (n == 1){
        return 1;
    }
    else{
        return (josephus(n - 1, k) + k - 1) % n + 1;
    }
}

long long int find(long long int n, long long int k)
{
    long long int sum = 0, i;
 
    // For finding out the removed
    // chairs in each iteration
    for (i = 2; i <= n; i++)
        sum = (sum + k) % i;
 
    return sum + 1;
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << find(n, k);
    return 0;
}