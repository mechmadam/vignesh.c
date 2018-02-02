#include<stdio.h>
#include<conio.h>
int main()
{
char a[5]={'a','e','i','o','u'};
char b;
printf("ENTER YOUR LETTER");
scanf("%s",&b);
if(a==b)
printf("ITS VOWEL");
else 
printf("NO..NO...ITS NOT A VOWEL....");
getch();
return 0;
}
