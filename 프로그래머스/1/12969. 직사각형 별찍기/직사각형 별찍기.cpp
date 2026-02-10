#include <iostream>

using namespace std;

int main(void) {
    int n;
    int m; 

    cin >> n >> m;
    
    for (int i = 0; i < m; i++) {
    cout << string(n, '*') << endl;
    }
    
    return 0;
}