//link: https://neps.academy/br/exercise/85

#include <iostream>
#include <iomanip>      // std::setprecision

using namespace std;
 
int main() {

    float a, b, s;
    
    cin >> a; cin >> b;
    
    s = a / b;
    	
    cout << fixed << setprecision(2)  << s << endl;
 
    return 0;
}