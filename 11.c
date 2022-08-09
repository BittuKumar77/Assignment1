/*11. WAP to take time as an input in below given format and convert the time format and display the result as given below.*/

#include<stdio.h>

int main()
{
    int hour,minute;
    printf("Enter time in Hour:Minute: ");
    scanf("%d:%d",&hour,&minute);
    printf("%d Hour & %d Minute",hour,minute);
    return 0;
}