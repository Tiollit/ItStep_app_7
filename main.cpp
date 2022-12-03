#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int b = 0;
    char new_string[500];
    cout << "Incert symbols: " << endl;
    gets_s(new_string);
    int a = strlen(new_string);
    for (int i = 0; i < a; i++)
        if (new_string[i] == ' ' && new_string[i + 1] != ' ') b += 1;
    cout << "Number of words is: " << b + 1;
    return 0;
}