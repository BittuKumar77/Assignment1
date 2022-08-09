/*10. WAP to take date as an input in below given format and convert the date format and display the result as given below*/

#include<stdio.h>

int main()
{
    int days,month,year;
    printf("Enter date in DD/MM/YYYY: ");
    scanf("%d/%d/%d",&days,&month,&year);
    printf("Days-%d,Month-%d,Year-%d",days,month,year);
    return 0;
}