#include <stdio.h>
#include <stdlib.h>

int main(void){
	int x;
	x=0;
	printf("enter choice (1-3)");
	scanf("%d", &x);
	if(x==1)
	printf("enter is 1");
	else if(x==2)
	printf("enter is 2");
	else if(x==3)
	printf("enter is 3");
	else
	printf("choice");
	return 0;
	}
