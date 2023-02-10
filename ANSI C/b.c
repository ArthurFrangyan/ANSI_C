/* программа вывода всех строк входного потока, имеющих длину более 80 символов */

#include "stdio.h"
#define MAXLINE 1000 /* максимальная длина строки в потоке */

int getline(char line[], int maxline);

main()
{
	int len; /* длина текущей строки */
	char line[MAXLINE]; /* текущая введенная строка */


	while ((len = getline(line, MAXLINE)) > 0)
	/* если количество символов в строке больше 80, выводим эту строку */
	if (len - 1 > 80) /* "len - 1" не считаем нулевой символ '\0' */
		printf("This string is longer than 80 characters: %s", line);

	return 0;
}

/* getline: считывает строку в s, возвращает ее длину */
int getline (char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;

}