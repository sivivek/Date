void addYears(char *date,int iyear,char *newDate)
{
	int d,m,y;
	splitDate(date,&y,&m,&d);
	y=y+iyear;
	if(d==29 && m==2 && !isLeap(y))
		d=28;
	formDate(newDate,y,m,d);
}
