#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double a, b, c, p = 0, atr = 0;

    cout << fixed << setprecision(1);

    cin >> a >> b >> c;

    if((a > abs(b - c) && a < (b + c)) && (b > abs(a - c) && b < (a + c)) && (c > abs(b - a) && c < (b + a)) )
    {
        p = a + b + c;
        cout << "Perimetro = " << p << endl;
    }
    else {
        atr = ((a + b) * c) / 2;
        cout << "Area = " << atr << endl;
    }


    return 0;
}
