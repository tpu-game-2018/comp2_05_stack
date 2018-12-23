#include <stdio.h>
#define STACK_SIZE 10

typedef struct t {
	int stack[STACK_SIZE];	//stack
	int number;		//いくつ入っているか
}stack;


//スタックに追加
void push(stack *s, int number)
{
	if (s->number >= STACK_SIZE) return;	//スタック上限に達しているときは追加しない

	s->stack[s->number] = number;
	s->number++;
}


//スタックからの取出し
void pop(stack *s)
{
	if (s->number < 1)						//スタックに何もないときは改行のみする
	{
		printf("\n");
	}
	else
	{
		printf("%d\n", s->stack[s->number - 1]);
	}

	s->number--;
}

//スタック内部のデータを全部だす
void show(stack *s)
{
	if (s->number < 1)
	{
		printf("\n");
		return;
	}
	for (int i = s->number; i > 0; i--)
	{
		if (i == s->number)
		{
			printf("%d", s->stack[i - 1]);
		}
		else
		{
			printf(",%d", s->stack[i - 1]);
		}
	}
	printf("\n");
}


int main(int argc, char *argv[])
{
	char str[7];
	stack *sp = (stack *)malloc(sizeof(stack));
	sp->number = 0;


	while (fgets(str, sizeof(str), stdin)) {
		int number = atoi(str);

		//pop
		if (number == -1)
		{
			pop(sp);
		}

		//show
		else if (number == 0)
		{
			show(sp);
		}

		//push
		else
		{
			push(sp, number);
		}
	}


	free(sp);
	return 0;
}