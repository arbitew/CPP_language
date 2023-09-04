
#include <iostream>

using namespace std;

int main()
{
    
    const int mass_len = 20; // количество чисел
    int nums[mass_len]; // массив чисел
    for (int i = 1; i < mass_len; i++) { // заполнение массива
        nums[i] = i + 1;
    }
    nums[0] = 0; // еденица не является простым числом
    for (int i = 0; i < mass_len; i++) { // цикл
        if (nums[i] != 0) { // если число не равно нулю (простое)
            printf("%d\n", nums[i]); // выводим простое число
            for (int j = nums[i]; j <= mass_len; j++) { // просматриваем, делятся ли числа на данное простое число
                if ((j % nums[i] == 0) and (nums[i]!=j)) { // если данное число делится на простое и оно не равно ему, ...
                    nums[j-1] = 0; // ... то мы обнуляем его
                }
            }
        }
    }
    return 0;
}

