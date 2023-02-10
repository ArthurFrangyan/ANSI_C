#include <stdio.h>
#include <stdlib.h>
#define N 20
#define TAB 8
/*если табуляция больше 4-х пробелов введите нужное значение*/
int isSpace(char );
void myPrint(char *, int );
 
main()
{
    char str[BUFSIZ];
    int i = 0, j, k, m;
    puts("Enter text:");
    while((str[i] = getchar()) != '\n'){
        if(str[i] == '\t'){
            for(m = 0; m < TAB; m++, i++)/*заменяем \t на пробелы,т.к. таб считается одним символом*/
                str[i] = ' ';  /*а при печати занимает место как 4 символа и строка может вылезти сильно вправо*/
            i--;
            if(i > N)
                i = N;
        }
        if(i == N){
            if(isSpace(str[i])){/*//если N-позиция пробельный символ,*/
                myPrint(str, i);/* //то печатаем строку и делаем перенос*/
                str[0] = str[i]; /*//символ с N-позиции переносим в начало следущей строки*/
                i = 1; /*//и её начнем заполнять со второго элемента*/
            }
            else{ /*//если N-позиция внутри слова*/
                k = i - 1;
                while(k && !isSpace(str[k]))/*//то ищем ближайший пробельный символ слева*/
                    k--;
                if(!k){/*//если во всей строке не нашлось пробельных символов*/
                    myPrint(str, i);/*//печатаем ее "как есть"*/
                    str[0] = str[i];
                    i = 1;
                }
                else{                    /*//если пробельный символ есть,*/
                    myPrint(str, k + 1);/*//то печатаем строку до него включительно*/
                    for(j = 0, k++; k <= i; )/*//а оставшийся конец строки*/
                        str[j++] = str[k++]; /*//копируем в начало следующей*/
                    i = j;
                }
            }
        }
        else
            i++;
    }
    if(i) /*//допечатываем остаток буфера < N*/
        myPrint(str, i);
    return 0;
}
int isSpace(char c)
{
    if(c == ' ' || c == '\t' || c == '\n')
        return 1;
    return 0;
}
void myPrint(char *s, int size)
{
    int i;
    for(i = 0; i < size; i++)
        putchar(*(s + i));
    putchar('\n');
}