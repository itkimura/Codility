#include <stdio.h>

int solution(int A[], int N) {
	// Implement your solution here
	int highest_index = 0;
	int lowest_index = 0;
	int max = 0;

	for (int i = 0; i < N; i++) {
		int current = A[i];
		int highest = A[highest_index];
		int lowest = A[lowest_index];
		if (current > highest)
		{
			if (highest - lowest > max)
			max = highest - lowest;
			highest_index = i;
			lowest_index = highest_index;
		}
		else if (current > lowest && current - lowest > max)
			max = current - lowest;
		else if (current < lowest)
		lowest_index = i;
	}
	return max;
}

int main(void){
	int A[11] = {1, 3, 2, 1, 2, 1, 5, 3, 3, 4, 2};
	printf("res: %d\n", solution(A, 11));
	return (0);
}
