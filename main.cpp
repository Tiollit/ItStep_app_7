//Дани два масиви: А[M] і B[N] (M і N вводяться з клавіатури). Необхідно створити третій масив 
//мінімально можливого розміру, у якому потрібно зібрати
//елементи масивів A і B, які не є загальними для них, без
//повторень
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
    int* res_first = new int[M+N];
    bool trigger = false;
    int k = 0;
    cout << "Array A: " << endl;
    for (size_t i = 0; i < M; i++)
    {
        A[i] = rand() % 100;
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "Array B: " << endl;
    for (size_t i = 0; i < N; i++)
    {
        B[i] = rand() % 100;
        cout << B[i] << " ";
    }
    cout << endl;

    for (size_t i = 0; i < M; i++)
    {
        trigger = false;
        for (size_t j = 0; j < M; j++)
        {
            if (A[i] == B[j])
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

    for (size_t i = 0; i < N; i++)
    {
        trigger = false;
        for (size_t j = 0; j < N; j++)
        {
            if (B[i] == A[j])
            {
                trigger = true;
            }
        }
        if (trigger != true)
        {
            res_first[k] = B[i];
            k++;
        }
    }

    int* C = new int[k];
    cout << "New array: " << endl;
    for (size_t i = 0; i < k; i++)
    {
        C[i] = res_first[i];
        cout << C[i] << "\t";
    }cout << endl;
    delete[]res_first;
    return 0;
}