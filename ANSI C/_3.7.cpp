int trim(char s[])
{
	int n;

	for(n = strlen(s)-1; n >= 0; n--)
		if(s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
			break;
	s[n+1] = '\0';
	return 0;
}



for (i = 0; i<n; i++)
{
	if(a[i] < 0)
		continue;
}