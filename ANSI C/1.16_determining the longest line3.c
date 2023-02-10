 #include <stdio.h>
#define MAXLINE 1000 /* максимальная длина строки в потоке */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* вывод самой длинной строки в потоке */
main()
{
	int len; /* длина текущей строки */
	int max; /* текущая максимальная длина */
	char line[MAXLINE]; /* текущая введенная строка */
	char longest[MAXLINE]; /* самая длинная строка из введенных */
	int c;


	max = 0;
	while ((len = getline(line, MAXLINE)) > 0) {

		/* если строка больше MAXLINE, продолжаем считаем количество символов */
		if (line[len-1] != '\n'){
			while ((c = getchar()) != EOF && c != '\n')
				++len;
			++len;
		}
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	/* функция getline добавляет '\0', который нам считать не нужно */
		--max;
	if (max > 0) { /* была непустая строка */

		if (max > MAXLINE-2)
			printf("The longest line is:%s ...\n", longest);
		else printf("The longest line is: %s\n", longest);

		printf("This line consists of %d characters\n", max);

	}

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

/* copy: копирует строку 'from' в 'to'; длина to считается достаточно точной */
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}