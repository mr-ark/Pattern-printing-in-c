#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit=10,n,i,j;
    printf("Enter a Number under 10:\n");
    scanf("%d",&n);

    for(i = 1; i <= n; i++){
        for ( j = 0; j < i; j++){
            printf("* ");
        }
        printf("\n");
    }
	return EXIT_SUCCESS;
}
