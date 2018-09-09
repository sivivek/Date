void formdata(char *date, int y,int m,int d);
void splitDate(char *date,int *y,int *m,int *d);
int isValid(char *date);
int isLeap(int y);
void addDays(char *date,int days,char *newDate);
void addMonths(char *date,int imonth,char *newDate);
void addYears(char *date,int iyear,char *newDate);
int cmpDate(char *date1,char *date2);
int diffDays(char *date1,char *date2);
void diffYMD(char *date1,char *date2,int *y,int *m, int *d);
void subDays(char *date,int days,char *newDate);
void subMonths(char *date,int dmonth,char *newDate);
void subYears(char *date,int dyear,char *newDate);
void weekdays(char *date,char *dayWeek);
void revJulian(int j,int y,int *d,int *m);
int Julian(int a,int m,int y);

