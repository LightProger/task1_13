#include <stdio.h>

#define LENGTH 100

/*Упражнение 1.13. Напишите программу, печатающую гистограммы длин вводимых слов. Гистограмму легко рисовать
 * горизонтальными полосами. Рисование вертикальными полосами - более трудная задача. */
int main()
{
    int word[LENGTH]; // массив слов
    int c; // вводимые символы
    int flag = 1, i; // счетчики

    printf("Enter word or Enter \"~\" for EXIT:");
    printf("\n");

    while(flag == 1) // начало заполнения массива
    {
        for(i = 0; i < LENGTH; i++)
        {
            word[i] = 0;
        }

        c = getchar();

        if(c == ' ' || c == '\n' || c == '\t')
        {
            word[i]++;
            printf("\n");
        }
        else if(word[i] > 0) { printf("#"); }

        if(c == '~') { flag = 0; } // Выход из программы
    }
    printf("\n");
    return flag;
}