#include <iostream>

using namespace std;

int solution(int num1, int num2) {
    if (num1 > 0 && num2 > 0 && num1 <= 100 && num2 <= 100) {
        return num1 / num2;
    }
    else return -1;
    cout << "값은 1 부터 100까지의 값을 입력해야 합니다!" << endl;
}