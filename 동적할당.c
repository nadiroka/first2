#include<stdio.h>
#include<malloc.h>

int main(void)
{
	int iNum;
	int i;
	int j = 0;
	char** ppStr;
	int strLen;
	char ch;

	/* ���ڿ� �����Ҵ� ���� �Է� �ޱ� */
	fputs("���� �Է�: ", stdout);
	scanf("%d", &iNum);
	ppStr = (char**)malloc(sizeof(char**)*iNum);

	/* �Է¹��� ���� iNum ��ŭ ���ڿ� �����Ҵ� */
	for (i = 0; i<iNum; i++)
	{
		printf("%d ��° ���ڿ� �ִ� ���� �Է� : ", i + 1);
		scanf("%d", &strLen);
		fflush(stdin);

		ppStr[i] = (char*)malloc(sizeof(char)*strLen);
		printf("%d ��° ���ڿ� �Է� : ", i + 1);
		scanf("%d", strLen);


		j = 0;
		while (1)
		{
			ch = getchar();
			if (ch == '\n')  
			{
				ppStr[i][j] = NULL; 
				break;
			}
			else if (j == strLen - 1)
			{
				puts("�Ҵ�� �޸𸮰��� �ʰ�!");
				puts("�޸𸮰����ʰ�����!");
				return -1;
			}
			ppStr[i][j] = ch;
			j++;
		}
		puts("");
	}
	return 0;
}