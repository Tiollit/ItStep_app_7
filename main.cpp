#include <iostream>
using namespace std;

int pl(int a, int b)
{
    return (a + b);
}
int min(int a, int b)
{
    return (a - b);
}
int mn(int a, int b)
{
    return (a * b);
}
int dil(int a, int b)
{
    return (a / b);
}

int main()
{
    int a, b, c;
    cout << "Incert 2 numbers and the operation number: 1 for -, 2 for +, 3 for *, 4 for /" << endl;
    cin >> a >> b >> c;
    int (*result[4])(int, int) { pl, min, mn, dil };
    cout << result[c-1](a,b) << endl;

    return 0;
}