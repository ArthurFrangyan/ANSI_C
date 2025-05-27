  #include <stdio.h>

  int lim = 10;

  int main()
  {
      int i, c;
      char s[lim];

      i = 0;
      while (i < lim-1) {
          c = getchar();
          if (c == EOF)
              break;
          if (c == '\n')
              break;
          s[i++] = c;
      }
      s[i] = '\0';

      printf("%s", s);

      return 0;
  }