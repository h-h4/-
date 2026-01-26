#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    int len = phone_number.length();
    return string(len - 4, '*') + phone_number.substr(len - 4);
}
