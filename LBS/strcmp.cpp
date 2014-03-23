int strcmp(char *lStr,char *rStr)
{
	while(*lStr!='\0' && *rStr!='\0')
	{
		if(*lStr>*rStr)
		return 1;
		else if(*lStr<*rStr)
		return -1;
		else
		{
			++rStr;
			++lStr;
		}
	}
	if(*lStr=='\0'&& *rStr=='\0')
	return 0;
	else if(*lStr=='\0')
	return -1;
	else if(*rStr=='\0')
	return 1;
}
