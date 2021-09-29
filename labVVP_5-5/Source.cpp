#include <stdio.h>
#include <math.h>
void main()
{
	float x1, x2, x3, y1, y2, y3, S, P, A, B, C, AB, BC, AC;
	printf("Vvedite coordinati vershini A ");
	scanf("%f %f", &x1, &y1);
	printf("Vvedite coordinati vershini B ");
	scanf("%f %f", &x2, &y2);
	printf("Vvedite coordinati vershini C ");
	scanf("%f %f", &x3, &y3);
	AB = (sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))));
	printf("AB = ");
	printf("%f\n", AB);
	BC = (sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2))));
	printf("BC = ");
	printf("%f\n", BC);
	AC = (sqrt(((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1))));
	printf("AC = ");
	printf("%f\n", AC);
	P = AB + BC + AC;
	printf("P = ");
	printf("%f\n", P);
	S = (sqrt(P * (P - AC) * (P - BC) * (P - AC)));
	printf("S = ");
	printf("%f\n", S);

}