#include <iostream>
#include <string>
using namespace std;

int solution(int n){
    int answer = 0;
    string S = to_string(n);
        
    for (char c : S) {
    answer += (c - '0');
    }
    
    return answer;
}