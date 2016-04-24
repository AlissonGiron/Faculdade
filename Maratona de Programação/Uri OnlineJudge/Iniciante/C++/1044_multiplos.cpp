#include <iostream>

using namespace std;

int main(){
    int a,b;

    int n1, n2;

    cin >> a >> b;

    if (a < b){
        n1 = a;
        n2 = b;
    }
    else{
        n1 = b;
        n2 = a;
    }

    if (n2 % n1 == 0) cout << "Sao Multiplos" << endl;
    else cout << "Nao sao Multiplos" << endl;

    return 0;
}

