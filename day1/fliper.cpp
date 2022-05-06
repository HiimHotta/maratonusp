//link: https://neps.academy/br/exercise/87

#include <iostream>
#include <iomanip>      // std::setprecision

using namespace std;
 
int main() {

    int p, r;
    
    cin >> p; cin >> r;

    if (p == 0)
        cout << "C" << endl;

    else {
        if (r == 0)
            cout << "B" << endl;
        
        else 
            cout << "A" << endl;
    }
    return 0;
}