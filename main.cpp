#include <iostream>
#include <ctime>
using namespace std;

void na(int *Arr_1, int *Arr_2, int *Arr_3, int k)
{
    for (size_t i = 0; i < k; i++)
    {
        Arr_3[i] = Arr_1[i] + Arr_2[i];
        cout << Arr_3[i] << " ";
    }
}

int main()
{
    srand(time(0)); 
    int k;    
    cout << "Incert size of array" << endl;
    cin >> k;
    int* Arr_1 = new int[k], * Arr_2 = new int[k], * Arr_3 = new int[k];
    for (size_t i = 0; i < k; i++)
    {
        Arr_1[i] = rand() % 100;
        Arr_2[i] = rand() % 100;        
    }
    cout << "First Array:" << endl;
    for (size_t i = 0; i < k; i++)
    {
        cout << Arr_1[i] << " ";
    }
    cout << endl;
    cout << "Second Array:" << endl;
    for (size_t i = 0; i < k; i++)
    {
        cout << Arr_2[i] << " ";
    }
    cout << endl;
    cout << "Sum Array:" << endl;
    na(Arr_1, Arr_2, Arr_3, k);

    return 0;
}