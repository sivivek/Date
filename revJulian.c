void revJulian(int j,int y,int *d,int *m)
{
	int i;
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(isLeap(y))
		month[2]=29;
	for(i=1;i<=12;i++)
	{	
		if(j<=month[i])
			break;
		j=j-month[i];
	}
	*d=j;
	*m=i;
}
