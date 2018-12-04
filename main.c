#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	int table[3][3];
	int flag = 0;
	int x, y,cpu_x,cpu_y;

	srand((int)time(NULL));
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			table[i][j] = 0;
		}
	}
	printf("０ １ ２\n");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			if (table[i][j] == 1){
				printf("○");
			}
			else if (table[i][j] == 2){
				printf("×");
			}
			else if (table[i][j] == 0){
				printf("  ");
			}

			if (j < 2){
				printf("|");
			}
		}
		printf("%d\n",i);
		if (i < 2){
			printf("--------");
		}
		printf("\n");

	}

	while (flag != 1){
		scanf("%d %d", &x, &y);
		table[x][y] = 1;
		do {
			cpu_x = rand() % 3 + 1;
			cpu_y = rand() % 3 + 1;
		} while (table[cpu_x][cpu_y] != 0);
		
		table[cpu_x][cpu_y] = 2;

		printf("\n");

		printf("０ １ ２\n");
		for (int i = 0; i < 3; i++){
			for (int j = 0; j < 3; j++){
				if (table[i][j] == 1){
					printf("○");
				}
				else if (table[i][j] == 2){
					printf("×");
				}
				else if (table[i][j] == 0){
					printf("  ");
				}

				if (j < 2){
					printf("|");
				}
			}
			printf("%d\n", i);
			if (i < 2){
				printf("--------");
			}
			printf("\n");
			
		}

		printf("\n");

		
	}

	return 0;
}

