int countNum (int num,int key)
{
	if(key<0 || key>9)
	return -1;
	int a[100];
	int i=0;
	while(num/10!=0)
	{
		a[i]=num%10;
		num=num/10;
		++i;
	}
	a[i]=num;
	int count=0;
	for(int j=0;j<=i;++j)
	{
		if(num[j]=key)
		count++;
	}
	return count;
}
