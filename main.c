#include <stdio.h>
#define STACK_SIZE 10

typedef struct t {
	int stack[STACK_SIZE];	//stack
	int number;		//���������Ă��邩
}stack;


//�X�^�b�N�ɒǉ�
void push(stack *s, int number)
{
	if (s->number >= STACK_SIZE) return;	//�X�^�b�N����ɒB���Ă���Ƃ��͒ǉ����Ȃ�

	s->stack[s->number] = number;
	s->number++;
}


//�X�^�b�N����̎�o��
void pop(stack *s)
{
	if (s->number < 1)						//�X�^�b�N�ɉ����Ȃ��Ƃ��͉��s�݂̂���
	{
		printf("\n");
	}
	else
	{
		printf("%d\n", s->stack[s->number - 1]);
	}

	s->number--;
}

//�X�^�b�N�����̃f�[�^��S������
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