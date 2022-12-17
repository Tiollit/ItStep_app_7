// Дані два масиви: А[M] і B[N] (M і N вводяться з клавіатури). Необхідно створити третій масив мінімально можливого розміру, у якому потрібно зібрати
// елементи масиву A, які не включаються до масиву B, без повторень
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int M, N;
    cout << "Insert the sizes of arrays A and B: " << endl;
    cin >> M >> N;    
    int* A = new int[M];
    int* B = new int[N];
    int* res_first = new int[M];
    bool trigger = false;
    int k = 0;
    for (size_t i = 0; i < M; i++)
    {
        cout << res_first[i] << "\t";
    }cout << endl;
    for (size_t i = 0; i < M; i++)
    {
        trigger = false;
        for (size_t j = 0; j < M; j++)
        {
            if (A[i] == res_first[j])
            {
                trigger = true;
            }
        }
        if (trigger != true)
        {
            res_first[k] = A[i];
            k++;
        }
    }
    for (size_t i = 0; i < M; i++)
    {
        cout << res_first[i] << "\t";
    }cout << endl;
    int* C = new int[k];
    for (size_t i = 0; i < k; i++)
    {
        C[i] = res_first[i];
        cout << C[i] << "\t";
    }cout << endl;
    delete[]res_first;
    return 0;