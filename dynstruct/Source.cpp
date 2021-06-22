#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct Lin_sp
{
	int d;
	struct Lin_sp* ptr;
};

struct Lin_sp* first(int);
void add(struct Lin_sp**, int);

int main()
{
	int n = 5;
	struct Lin_sp* p_beg=first(7); //указатель на начало
	struct Lin_sp* p_end=p_beg;
	printf("%d\n", p_beg->d);

	for (int i = 2; i <=n; i++)
		add(&p_end, i + 6); // добавлять в конец указатель на конец

	struct Lin_sp* pv = p_beg;
	for (int i = 0; i < n; i++)
	{
		printf("%d ", pv->d);
		pv = pv->ptr;
	}


	_getch();
	return 0;
}

struct Lin_sp * first(int d)  //функция создания первого элемента списка
{
	struct Lin_sp* pv = (struct Lin_sp*)malloc(sizeof(struct Lin_sp));

	pv->d = d;
	pv->ptr = NULL;
	return pv;
}

void add(struct Lin_sp **p_end, int d)
{
	struct Lin_sp* pv = (struct Lin_sp*)malloc(sizeof(struct Lin_sp));
	pv->d = d;
	pv->ptr = 0;
	(*p_end)->ptr = pv; // указатель на последний элемент 
	*p_end = pv;
}


