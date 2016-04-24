#include <iostream>

using namespace std;

int main(){
    int n1, n2, n3;

    cin >> n1 >> n2 >> n3;

    // 1 2 3
    if(n1 < n2 && n2 < n3) cout << n1 << endl << n2 << endl << n3 << endl;

    // 1 3 2
    else if(n1 < n3 && n3 < n2) cout << n1 << endl << n3 << endl << n2 << endl;


    // 2 1 3
    else if(n2 < n3 && n1 < n3) cout << n2 << endl << n1 << endl << n3 << endl;

    // 2 3 1
    else if(n2 < n3 && n3 < n1) cout << n2 << endl << n3 << endl << n1 << endl;


    // 3 1 2
    else if(n3 < n1 && n1 < n2) cout << n3 << endl << n1 << endl << n2 << endl;

    // 3 2 1
    else if(n3 < n2 && n2 < n1) cout << n3 << endl << n2 << endl << n1 << endl;

    cout << endl;

    cout << n1 << endl << n2 << endl << n3 << endl;




    return 0;
}


