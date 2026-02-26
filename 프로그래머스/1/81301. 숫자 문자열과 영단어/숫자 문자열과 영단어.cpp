#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    string words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string result = "";
    string tmp = "";

    for (char c : s) {
        if (isdigit(c)) {
            result += c;
        } else {
            tmp += c;
            for (int i = 0; i < 10; i++) {
                if (tmp == words[i]) {
                    result += to_string(i);
                    tmp = "";
                    break;
                }
            }
        }
    }
    return stoi(result);
}