#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    if (arr.empty()) return 0;
    
    double sum = 0; 
    
    for (int num : arr) {
        sum += num;
    }
    
    return sum / arr.size();
}