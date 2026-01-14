#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    if (n < 0) return -1;

    double s = sqrt(n);
    long long a = (long long)s;

    if (a * a == n) {
        return (a + 1) * (a + 1);
    } else {
        return -1;
    }
}