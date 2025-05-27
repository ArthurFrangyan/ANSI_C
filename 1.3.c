#include <stdio.h>
/* печать таблицы температур по Фаренгейту и Цельсию для
   fahr = 0, 20, ..., 300; */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* нижняя граница таблицы температур */
    upper = 300; /* верхняя граница */
    step = 20;   /* шаг */

    fahr = lower;

    printf("Fahr\tCels\n------------\n"); /* Заголовок */

    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %8.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}