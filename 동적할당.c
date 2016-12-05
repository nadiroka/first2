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

	/* 문자열 동적할당 갯수 입력 받기 */
	fputs("정수 입력: ", stdout);
	scanf("%d", &iNum);
	ppStr = (char**)malloc(sizeof(char**)*iNum);

	/* 입력받은 갯수 iNum 만큼 문자열 동적할당 */
	for (i = 0; i<iNum; i++)
	{
		printf("%d 번째 문자열 최대 길이 입력 : ", i + 1);
		scanf("%d", &strLen);
		fflush(stdin);

		ppStr[i] = (char*)malloc(sizeof(char)*strLen);
		printf("%d 번째 문자열 입력 : ", i + 1);
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
				puts("할당된 메모리공간 초과!");
				puts("메모리공간초과종료!");
				return -1;
			}
			ppStr[i][j] = ch;
			j++;
		}
		puts("");
	}
	return 0;
}