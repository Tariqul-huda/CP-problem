#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<int> d(M);
        
        for (int i = 0; i < M; i++) {
            cin >> d[i];
        }
        
        int count = 0;
        int sum = 0;
        
        for (int i = 0; i < M; i++) {
            sum += d[i];
            if (sum % 7 == 0 && d[i] >= 13) {
                count++;
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}
