//main.c

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int num1, int num2)
{
	int answer = num1 * num2;
	return answer;
}

int main(void)
{
	printf(("출력 값은 %d입니다.\n"), solution(3, 9));

	return 0;
}
