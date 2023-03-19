#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
	int x,i=2;
	printf("");
	scanf("%d",&x);
	for(i=2;i<=x-1;i++){
		if(x%i==0){
			printf("NO\n",x);
			break;
		}
	}
	if(i==x)
	printf("YES\n",x);
	return 0;
}
