#include <iostream>
#include <ctime>
#include <string>
using namespace std;
void IncTab(char *new_string, int i = 0)
{    
    do
    {    
        if (new_string[i] == ' ')
            {
                new_string[i] = '\t';
                IncTab(new_string);
                break;               
            }  
        i++;
    } while (new_string[i] != 0);
    }
int main()
{
    srand(time(0));    
    char new_string[500];
    cout << "Incert symbols: " << endl;
    gets_s(new_string); 
    IncTab(new_string);
    cout << new_string << endl;
    return 0;
}

