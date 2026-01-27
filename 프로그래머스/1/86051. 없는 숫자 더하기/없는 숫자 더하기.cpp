#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> numbers) {
    int total = 45;
    int current = 0;
    for (int num : numbers) {
        current += num;
    }
    return total - current;
}