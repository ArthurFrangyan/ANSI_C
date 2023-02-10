#include <stdio.h>
/* Проверка выражения getchar() != EOF
   Для получения 0, необходимо нажать Ctrl+D в Linux-e
   или Ctrl+Z в Windows*/
main()
{
    int result;

    result = (getchar() != EOF);

    if(result == 0)
        printf("Равно 0\n");
    if(result == 1)
        printf("Равно 1\n");
}