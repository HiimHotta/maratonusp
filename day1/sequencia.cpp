//link: https://www.beecrowd.com.br/judge/en/problems/view/1145?origem=1

#include <iostream>
#include <iomanip>      // std::setprecision

using namespace std;
 
int main() {

    int x, y;
    
    cin >> x; cin >>y;

    for (int i = 1; i < y; i = i + x) {
        for (int j = 0; j < x; j++) {
            cout << i+ j;
            
            if (j < x - 1)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}