#include <string>
#include <vector>
#include <algorithm> // reverse 함수를 사용하기 위해 필요합니다.

using namespace std;

string solution(vector<int> food) {
    string left_seq = "";
    
    for (int i = 1; i < food.size(); i++) {
        int count = food[i] / 2;
        left_seq += string(count, '0' + i);
    }
    string right_seq = left_seq;
    reverse(right_seq.begin(), right_seq.end());
    
    return left_seq + "0" + right_seq;
}