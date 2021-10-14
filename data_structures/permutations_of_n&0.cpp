#include <queue>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;
#define fast                                                                                                                                                   \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(0);                                                                                                                                                \
    cout.tie(0);

void formnumbers(int n, int x) {
    queue<string> Q;
    string num = to_string(x);
    Q.push(num);
    while (Q.empty() == false) {
        string s = Q.front();
        if (Q.size() == pow(2, n - 1)) {
            while (Q.empty() == false) {
                cout << Q.front() << endl;
                Q.pop();
            }
            return;
        }
        Q.pop();
        Q.push(s + "0");  // left child
        Q.push(s + num);  // right child
    }
}
int main() {
    fast;
    int n;
    int x;
    printf("Enter the digit:\n");
    scanf("%d", &x);
    printf("Enter the number of digits to be printed in the combinations\n");
    scanf("%d", &n);
    formnumbers(n, x);
    return 0;
}