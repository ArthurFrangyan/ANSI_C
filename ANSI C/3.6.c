#include <stdio.h>
#include <limits.h>

#define MAXLINE 100

void itoa ( int n, char s[], int b);
void reverse (char s[]);
int main()
{
    char s[MAXLINE];
    int n, w;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Enter the field width: ");
    scanf("%d", &w);
    itoa(n, s, w);
    printf("%s", s);
    printf("\n");
    return 0;
}
void itoa ( int n, char s[], int w)
{
    int i, sign;

    sign = n;
    i = 0;
    do {
        s[i++] = abs(n % 10) + '0';
    } while ((n /= 10) != 0);
    if (sign < 0)
        s[i++] = '-';
    while(i<w)
        s[i++] = ' ';
    s[i] = '\0';
    reverse(s);
}

void reverse (char s[])
{
    int i = 0;
    int j = 0;
    char k;

    for (i = 0; s[i] != '\0'; i++);
    i--;

    for (j = 0; j < i; j++,i--){
        k = s[j];
        s[j] = s[i];
        s[i] = k;
    }
}