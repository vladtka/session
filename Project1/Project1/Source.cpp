#include <iostream>
using namespace std;

int Rec(int i, int n, int step, int current) {
    return i < n ? Rec(i + 1, n, step, current + step) : current;
}

int main()
{
    int step = 4;
    int n;
    cout << "write n --> ";
    cin >> n;
    cout << Rec(1, n, step, 0) << "\n";
    return(0);
}