#include <stdio.h>

int ack(int m, int n){
	if (m == 0){
		return n+1;
	} else if (n == 0){
		return ack(m-1, 1);
	} else{
		return ack(m-1, ack(m, n-1));
	}
}

int main(){
	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 6; j++){
			printf("ack(%d, %d): %d\n", i, j, ack(i, j));
			fflush(stdout);
		}
	}
	return 0;
}
