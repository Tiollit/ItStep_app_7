// Дані два масиви: А[M] і B[N] (M і N вводяться з клавіатури). Необхідно створити третій масив мінімально можливого розміру, у якому потрібно зібрати
// елементи масиву A, які не включаються до масиву B, без повторень
#include <iostream>
using namespace std;
//char* change_word_in_text(char * text, const char * old_word, const char* new_word)
//{
//  string result
//  for (size_t i = 0; i < strlen(text); i++)
//  {
//
//  }
//}
int main()
{
    int size1 = 5, size2 = 6;
    int* arr_1 = new int[size1] {1, 2, 1, 1, 3};
    int* arr_2 = new int[size2] {2, 3, 6, 5, 6, 7};
    int* res_first = new int[size1];
    bool trigger = false;
    int k = 0;
    for (size_t i = 0; i < size1; i++)
    {
        cout << res_first[i] << "\t";
    }cout << endl;
    for (size_t i = 0; i < size1; i++)
    {
        trigger = false;
        for (size_t j = 0; j < size1; j++)
        {
            if (arr_1[i] == res_first[j])
            {
                trigger = true;
            }
        }
        if (trigger != true)
        {
            res_first[k] = arr_1[i];
            k++;
        }
    }
    for (size_t i = 0; i < size1; i++)
    {
        cout << res_first[i] << "\t";
    }cout << endl;
    int* A = new int[k];
    for (size_t i = 0; i < k; i++)
    {
        A[i] = res_first[i];
        cout << A[i] << "\t";
    }cout << endl;
    delete[]res_first;
    return 0;