#include<stdio.h> 
#include<stdlib.h> 

int main(void)
{
	int a,b;
	printf("�п�ܩʧO�ÿ�J�~�֡A(1)�k�� (2)�k��");
	scanf("%d %d", &a,&b);
	if (a == 1)
	{
		if (b - 8 < 18)
			printf("�A���൲�B");
		else if (b - 8 >= 18)
			printf("�A�i�H���B");
		else
			printf("��J���~");
	}
	else if (a == 2)
	{
		if (b - 8 < 16)
		printf("�A���൲�B");
		else if (b - 8 >= 16)
		printf("�A�i�H���B");
		else
		printf("��J���~");
	}
	else
		printf("��J���~");

	system("pause");
	return 0;
}
