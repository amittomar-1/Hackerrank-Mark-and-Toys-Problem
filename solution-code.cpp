#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
int main() 
{
    long long n, k,sum=0; cin >> n >> k;
    vector<int> prices;
    for(int i = 0; i < n; i++)
    {
        int p; cin >> p;
        prices.push_back(p);
    }
     
    int answer = 0;
     
    // Write the code for computing the final answer using n,k,prices
    sort(prices.begin(), prices.end());
    int i=0;
    while(sum+prices[i] <= k) {
        sum += prices[i];
        answer++;
        i++;
    }
    cout << answer << endl;
     
    return 0;
}
