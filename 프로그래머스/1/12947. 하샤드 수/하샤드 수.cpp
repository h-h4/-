#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int original_x = x;
    int sum = 0;
    
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    if (original_x % sum == 0) {
        return true;
    } else {
        return false;
    }
}