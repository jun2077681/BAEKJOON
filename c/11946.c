#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int m, n, q;
	int teamnum;
	int timet, quest;
	char answert;
	typedef struct infomation {
		int time;
		int ques;
		char answer;
	}infomation;

	scanf("%d %d %d", &n, &m, &q);
	int* score;
	score = (int*)malloc(sizeof(int*)*n);

	infomation* info;
	info = (infomation*)malloc(sizeof(infomation*)*n);

	for (int i = 1; i <= q; i++)
	{
		scanf("%d %d %d %s", timet, teamnum, quest, answert);
		switch()
	}
}