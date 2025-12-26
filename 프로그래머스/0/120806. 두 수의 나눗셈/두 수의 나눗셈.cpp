#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    if ((num1 > 0 && num1 <= 100) && (num2 > 0 && num2 <= 100)) {
        return  (double)num1 / num2 * 1000;
    }
    return -1;
}