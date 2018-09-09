/*Function to calculate the julian days*/
int julian(int d,int m,int y)
{
	int j=d;
	switch(m-1)
	{
	case 11:	j+=30;
	case 10:	j+=31;
	case 9:         j+=30;
	case 8:         j+=31;
	case 7:         j+=31;
	case 6:         j+=30;
	case 5:         j+=31;
	case 4:         j+=30;
	case 3:         j+=31;
	case 2:         j+=28;
	case 1:         j+=31;
	}	
	if(isLeap(y) && m>2)
		j=j+1;
	return j;
}/*End of Julian*/
