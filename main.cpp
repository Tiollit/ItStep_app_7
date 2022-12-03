#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int d=0, b=0, c=0;
    srand(time(0));      
    char new_string[500];
    cout << "Incert symbols: " << endl;
    gets_s(new_string);
    int a = strlen(new_string);
    for (int i = 0; i < a; i++)
    {
        if (isdigit(new_string[i])) d += 1;
        else if (isalpha(new_string[i])) b += 1;
        else c += 1;

    }
    cout << "In string there is " << d << " numbers, " << b << " letters and " << c << " other symbols" << endl;
    return 0;
}