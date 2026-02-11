#include <numeric>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    int g = gcd(n, m);
    return {g, (int)((long long)n * m / g)};
}