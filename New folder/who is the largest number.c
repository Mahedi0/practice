#include <stdio.h>

int main()
{
	int A, B, C;

	printf("Enter the numbers A, B and C:\n");
	scanf("%d %d %d", &A, &B, &C);
	if (A==B && B==C)
        printf("they are equal");
    else if(A==B)
        printf("Both A and B are equal and");
    else if(B==C)
        printf("Both B and C are equal and ");
    else if(A==C)
        printf("Both A and C are equal and ");
    if (A > B && A > C)
		printf("%d is the largest number.", A);

	if (B > A && B > C)
		printf("%d is the largest number.", B);

	if (C > A && C > B)
		printf("%d is the largest number.", C);




	return 0;
}
