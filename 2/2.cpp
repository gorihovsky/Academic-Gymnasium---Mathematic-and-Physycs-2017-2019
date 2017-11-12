/*
Напишите программу проверяющую является ли число составным. В программе гарантируется, что число - натуральное.

Пример входных данных - 1:
17

Пример выходных данных - 1:
17: Prime

Пример входных данных - 2:
21

Пример выходных данных - 2:
21: Composite

Пример входных данных - 3:
1

Пример выходных данных - 3:
1: Unit
*/

#include <iostream>                     // В данной программе, кроме базового языка, будем использовать только потоковый ввод/вывод

using namespace std;                    // Мы используем базоыве функции стандартным образом, поэтому можно сразу определить пространство имен, как стандартное

                                        // Мы не используем никаких глобально-определенных функций и переменных, поэтому сразу переходим к основной части программы

int main()                              // Общая идея алгоритма: для начала проверим несколько частных случаев(1,2), затем, проверим есть ли делитель не превышающий корня
{
    int N;                              // Объявляем переменную, в которой будет лежать проверяемое значение
    cin>>N;                             // Считываем значение с консоли

    if (N==1)                           // Проверим, является л введенное значение единицей
    {
        cout<<N<<": Unit";
        return 0;
    }

    if (N==2)                           // Проверим, является л введенное значение двойкой
    {
        cout<<N<<": Prime";
        return 0;
    }

    if ((N%2==0)&&(N!=2))               // Проверим значение на четность, таким образом отсечем сразу половину составных чисел
    {
        cout<<N<<": Composite";
        return 0;
    }

    for(int i=3;i*i<=N;i+=2)            // Проверим, есть ли у числа нечетные делители.  
    {
        if(N%i==0)
        {
            cout<<N<<": Composite";
            return 0;
        }
    }
    cout<<N<<": Prime";                 // Если делителя не нашлось, получается, что значение было простым.
    return 0;
}