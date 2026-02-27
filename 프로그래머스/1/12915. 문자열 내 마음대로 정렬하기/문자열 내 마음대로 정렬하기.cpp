#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int target_n;

bool compare(string a, string b) {
    if (a[target_n] != b[target_n]) {
        return a[target_n] < b[target_n];
    }
    return a < b;
}

vector<string> solution(vector<string> strings, int n) {
    target_n = n;
    
    sort(strings.begin(), strings.end(), compare);
    
    return strings;
}