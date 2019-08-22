#include <stdio.h>

/* This function has a minimal complexity of O(1).
 * for example, in the case of (0, x) it always returns 1.
 *
 * The maxmimum complexity of this function is actually unknown.
 * 
 * (4, 2) returns a number that is 19,000+ digits long, and cannot be computed within the lifespan of the universe.
 * (C ints don't support that size, even if we had the computing power.)
 * The reason this is of an unknown maximum complexity is in the last return statement,
 * 	ackerman's function is called simply to compute an arugmnet to ackerman's function/
 *
 * ack(4, 1) and all previous iterations will run no problem on most systems. You man not even notice the time it takes, as it can be so fast that it seems instant.
 * ack(4, 2) will never finish.
 *
 * Wierd function, and mathimatically fascinating!
 *
 * */
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
			// This is needed to be sure we see the output befoe it finishes.
			// Compilers will optimize out buffer flushing when it doesn't seem necessary.
			// explicitly using it will force them to compile with the buffer flush in mine :)
			fflush(stdout);
		}
	}
	return 0;
}
