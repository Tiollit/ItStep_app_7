// Дані два масиви: А[M] і B[N] (M і N вводяться з клавіатури). Необхідно створити третій масив мінімально можливого розміру, у якому потрібно зібрати
// елементи масиву A, які не включаються до масиву B, без повторень
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));      
    int M, N, k = 0;    
    cout << "Incert size of arrays" << endl;
    cin >> M >> N;
    int* A = new int[M], * B = new int[N]; 
    int P = M;    
    for (size_t i = 0; i < M; i++)
    {
        A[i] = rand() % 100;       
    }
    for (size_t i = 0; i < N; i++)
    {
        B[i] = rand() % 100;
    }
    cout << "First Array:" << endl;
    for (size_t i = 0; i < M; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "Second Array:" << endl;
    for (size_t i = 0; i < N; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;
    for (size_t i = 0; i < M; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            if (A[i] == B[j] && A[i] != 101) A[i] = 101; P -= 1;
        }
    }
    for (size_t i = 0; i < M / 2; i++)
    {
        for (size_t j = 0; j < M; j++)
        {
            if (A[i] == A[j] && A[i] != 101) A[i] = 101; P -= 1;
        }
    }
    int* C = new int[P];
    cout << "Generating new array: ";
    cout << endl;
    for (size_t i = 0; i < M; i++)
        if (A[i] != 101)
        {
            C[k] = A[i]; k += 1;
            cout << C[k] << " ";
        }

    
    return 0;
}