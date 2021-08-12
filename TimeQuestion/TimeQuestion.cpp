#include<stdio.h> //stdio.h
#include<conio.h> //conio.h

int main()
{
	int timenow;
	char str1[5] = "Good";
	char str2[] = "morning";
	char str3[] = "afternoon";
	char str4[] = "evening";
	char str5[] = "night";

	printf("지금 시간은?\n");
	scanf("%d", &timenow);

	if ((timenow >= 7) && (timenow <= 11))
	{
		printf("%s %s \n",str1,str2);
	}
	else if ((timenow >= 12) && (timenow <= 17))
	{
		printf("%s %s \n", str1, str3);
	}
	else if ((timenow >= 18) && (timenow <= 24))
	{
		printf("%s %s \n", str1, str4);
	}
	else ((timenow >= 1) && (timenow <= 16));
	{
		printf("%s %s \n", str1, str5);
	}
}