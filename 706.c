#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 99999999

typedef struct digits{
	int a[7];
}digits;

int main(){
	digits numbers[10];

	char *input;
	input = (char *)malloc(MAXSIZE*sizeof(char));

	int size;
	int length;
	int q;
	for(q = 0; q < MAXSIZE; ++q)
		input[q] = '\0';

	/* 0 */
	numbers[0].a[0] = 1;
	numbers[0].a[1] = 1;
	numbers[0].a[2] = 1;
	numbers[0].a[3] = 1;
	numbers[0].a[4] = 1;
	numbers[0].a[5] = 1;
	numbers[0].a[6] = 0;

	/* 1 */
	numbers[1].a[0] = 0;
	numbers[1].a[1] = 1;
	numbers[1].a[2] = 1;
	numbers[1].a[3] = 0;
	numbers[1].a[4] = 0;
	numbers[1].a[5] = 0;
	numbers[1].a[6] = 0;

	/* 2 */
	numbers[2].a[0] = 1;
	numbers[2].a[1] = 1;
	numbers[2].a[2] = 0;
	numbers[2].a[3] = 1;
	numbers[2].a[4] = 1;
	numbers[2].a[5] = 0;
	numbers[2].a[6] = 1;

	/* 3 */
	numbers[3].a[0] = 1;
	numbers[3].a[1] = 1;
	numbers[3].a[2] = 1;
	numbers[3].a[3] = 1;
	numbers[3].a[4] = 0;
	numbers[3].a[5] = 0;
	numbers[3].a[6] = 1;
	
	/* 4 */
	numbers[4].a[0] = 0;
	numbers[4].a[1] = 1;
	numbers[4].a[2] = 1;
	numbers[4].a[3] = 0;
	numbers[4].a[4] = 0;
	numbers[4].a[5] = 1;
	numbers[4].a[6] = 1;

	/* 5 */
	numbers[5].a[0] = 1;
	numbers[5].a[1] = 0;
	numbers[5].a[2] = 1;
	numbers[5].a[3] = 1;
	numbers[5].a[4] = 0;
	numbers[5].a[5] = 1;
	numbers[5].a[6] = 1;

	/* 6 */
	numbers[6].a[0] = 1;
	numbers[6].a[1] = 0;
	numbers[6].a[2] = 1;
	numbers[6].a[3] = 1;
	numbers[6].a[4] = 1;
	numbers[6].a[5] = 1;
	numbers[6].a[6] = 1;

	/* 7 */
	numbers[7].a[0] = 1;
	numbers[7].a[1] = 1;
	numbers[7].a[2] = 1;
	numbers[7].a[3] = 0;
	numbers[7].a[4] = 0;
	numbers[7].a[5] = 0;
	numbers[7].a[6] = 0;

	/* 8 */
	numbers[8].a[0] = 1;
	numbers[8].a[1] = 1;
	numbers[8].a[2] = 1;
	numbers[8].a[3] = 1;
	numbers[8].a[4] = 1;
	numbers[8].a[5] = 1;
	numbers[8].a[6] = 1;

	/* 9 */
	numbers[9].a[0] = 1;
	numbers[9].a[1] = 1;
	numbers[9].a[2] = 1;
	numbers[9].a[3] = 1;
	numbers[9].a[4] = 0;
	numbers[9].a[5] = 1;
	numbers[9].a[6] = 1;


	while(scanf("%d %s", &size, input)!=EOF){
		length = 0;
		for(q = 0; input[q]!='\0'; ++q)
			length += 1;
		if(size==0)
			return 0;
		else
		{

	int i, j, k, l;
	j = 0;
	for(i = 0; i < 2 * size + 3; ++i){
		if(i==0){
			for(k = 0; k < length; ++k){
				printf(" ");
				if(numbers[(input[k]-48)].a[0]==1){
					for(l = 0; l < size; ++l)
						printf("-");
				}
				printf(" ");
				if(numbers[(input[k]-48)].a[0]==0)
					for(l = 0; l < size; ++l)
						printf(" ");
				if(k<length-1)
					printf(" ");
			}
		}
		if(i>0 && i<size + 1){
			for(k = 0; k < length; ++k){
				if(numbers[(input[k]-48)].a[5]==1 && numbers[(input[k]-48)].a[1]==1){
					printf("|");
					for(l = 0; l < size; ++l)
						printf(" ");
					printf("|");
				}
				else if(numbers[(input[k]-48)].a[5]==0 && numbers[(input[k]-48)].a[1]==1){
					for(l = 0; l < size + 1; ++l)
						printf(" ");
					printf("|");
				}
				else if(numbers[(input[k]-48)].a[5]==1 && numbers[(input[k]-48)].a[1]==0){
					printf("|");
					for(l = 0; l < size + 1; ++l)
						printf(" ");
				}
				else if(numbers[(input[k]-48)].a[5]==0 && numbers[(input[k]-48)].a[1]==0)
					for(l = 0; l < size + 2; ++l)
						printf(" ");
				if(k<length-1)
					printf(" ");
			}
			
		}
		if(i==size + 1){
			for(k = 0; k < length; ++k){
				printf(" ");
				if(numbers[(input[k]-48)].a[6]==1){
					for(l = 0; l < size; ++l)
						printf("-");
				}
				printf(" ");
				if(numbers[(input[k]-48)].a[6]==0)
					for(l = 0; l < size; ++l)
						printf(" ");
				if(k<length-1)
					printf(" ");
			}
		}
		if(i>size+1 && i<2 * size + 2){
			for(k = 0; k < length; ++k){
				if(numbers[(input[k]-48)].a[4]==1 && numbers[(input[k]-48)].a[2]==1){
					printf("|");
					for(l = 0; l < size; ++l)
						printf(" ");
					printf("|");
				}
				else if(numbers[(input[k]-48)].a[4]==0 && numbers[(input[k]-48)].a[2]==1){
					for(l = 0; l < size + 1; ++l)
						printf(" ");
					printf("|");
				}
				else if(numbers[(input[k]-48)].a[4]==1 && numbers[(input[k]-48)].a[2]==0){
					printf("|");
					for(l = 0; l < size + 1; ++l)
						printf(" ");
				}
				else if(numbers[(input[k]-48)].a[4]==0 && numbers[(input[k]-48)].a[2]==0)
					for(l = 0; l < size + 2; ++l)
						printf(" ");
				if(k<length-1)
					printf(" ");
			}
			
		}
		if(i==2 * size + 2){
			for(k = 0; k < length; ++k){
				printf(" ");
				if(numbers[(input[k]-48)].a[3]==1){
					for(l = 0; l < size; ++l)
						printf("-");
				}
				printf(" ");
				if(numbers[(input[k]-48)].a[3]==0)
					for(l = 0; l < size; ++l)
						printf(" ");
				if(k<length-1)
					printf(" ");
			}
		}
		printf("\n");
	}
		}
		printf("\n");
	}

	free(input);
	return 0;
}

