#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int a = 0;
    if(0 < n && n <= 1000){
        for(; n > 0; n--) {
            if(n % 2 != 0) {continue;} 
            else {a += n;}
        }
        
        return a;
    }
}