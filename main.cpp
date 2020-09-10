#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{

    int x = 0;
    cout << "Input desired floor" << endl;
    cin >> x;

    if (x<13) {cout << "Floor " << x << endl;}
    if (x>13) {x = x - 1; cout << "Floor " << x << endl;}

    return 0;
}