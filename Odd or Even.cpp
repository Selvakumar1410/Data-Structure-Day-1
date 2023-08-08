#include <stdio.h>

int main(){
	int n;
	printf("Enter the Number:");
	scanf ("%d",&n);
	
	if (n%2==0){
		printf("Even");
	}
	else {
		printf("odd");
	}
}