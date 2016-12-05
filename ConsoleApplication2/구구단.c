# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# define _danSize_ 1
# define _numSize_ 9

typedef struct _gugudan {
	int dan[_danSize_];
	int num[_numSize_];
}gugudan;

// function prototype
void INI(gugudan** stu);
void INPUT(gugudan** stu);
void PRI(gugudan** stu);
void FREE(gugudan** stu);

int main(void) {
	gugudan* stu = NULL;
	INI(&stu);
	INPUT(&stu);
	PRI(&stu);
	FREE(&stu);
	printf(" addr (stu) ==> %p \n ", stu);
	return 0;
}
void INI(gugudan** stu) {
	(*stu) = (gugudan*)malloc(sizeof(gugudan));
	memset((*stu), 0, sizeof(gugudan));
} // end of [INI] function

void INPUT(gugudan** stu) {
	int i, j; // index

			 
	i = 3;
	
	for (j = 0; j < _numSize_; j++) {
		(** stu).num[j] = j + 1;
	}
} // end of [INPUT] function

void PRI(gugudan** stu) {
	
	int i, j;
	i = 3; 
		for (j = 1; j < 10; j++) {
			printf("%d x %d = %d  ", (**stu).dan[j], (**stu).num[0i], (**stu).dan[j] * (**stu).num[i]);
		
		printf("\n");
	}
	printf("\n");

	//i = 3;{
	//for (j = 0; j < _danSize_; j++) {
	//	printf("%2d x %2d = %2d  ", (**stu).dan[j], (**stu).num[i], (**stu).dan[j] * (**stu).num[i]);
	//	}
	//	printf("\n");
	//}
	printf("\n");
} // end of [PRI] function

void FREE(gugudan** stu) {
	gugudan* remo = (*stu);
	(*stu) = NULL;
	free(remo);
} // end of [FREE] function
