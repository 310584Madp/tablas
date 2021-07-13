// Tablas de multiplicar
#include <stdio.h>
#include <conio.h>
int i,t,r;
int main() {
	printf("¿que tabla desea?");
	scanf("%d",&t);
	for(i=1;i<=10;i++)
	{
		r=t*i;
		printf("%d x %d = %d\n",t,i,r);
	}
	getch();
}