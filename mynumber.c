#include <stdio.h>
int main(){
	int i,j;
	for(i=1;i<=100;++i){
		if(i%2!=0) printf("%d ",i);
	}
	printf("\n");
	for(i=1;i<=100;++i){
		if(i%2==0) printf("%d ",i);
	}
	printf("\n");
	for(i=2;i<=100;++i){
		bool is_prime=true;
		for(j=2;j*j<=i;++j){
			if(i%j==0){
				is_prime=fasle;
				break;
			}
		}
		if(is_prime) printf("%d " , i);
	}
		
	return 0;
}
