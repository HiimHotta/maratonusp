//link: https://neps.academy/br/exercise/323

#include <iostream>
#include <iomanip>      // std::setprecision

using namespace std;
 
int main() {

    int n = -1, maior = 0;
    
    while (n != 0) {
        cin >> n;

        if (n > maior)
            maior = n;
    }
    	
    cout << maior << endl;
 
    return 0;
}