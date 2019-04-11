#include<stdio.h> 
#include<stdlib.h> 

int main(void)
{
	int a,b;
	printf("請選擇性別並輸入年齡，(1)男生 (2)女生");
	scanf("%d %d", &a,&b);
	if (a == 1)
	{
		if (b - 8 < 18)
			printf("你不能結婚");
		else if (b - 8 >= 18)
			printf("你可以結婚");
		else
			printf("輸入錯誤");
	}
	else if (a == 2)
	{
		if (b - 8 < 16)
		printf("你不能結婚");
		else if (b - 8 >= 16)
		printf("你可以結婚");
		else
		printf("輸入錯誤");
	}
	else
		printf("輸入錯誤");

	system("pause");
	return 0;
}
