#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_L 1024

struct stud
{
char Srnm[MAX_L];
char Grp[MAX_L];
int Numb;
int Cash;
};

void Read(struct stud* Tab, int size_Tab)
{
	for(int i=0; i<size_Tab;i++)
	{
	printf("Введите фамилию студента\n");
	scanf("%s", Tab[i].Srnm);
	printf("Введите группу студента\n");
	scanf("%s", Tab[i].Grp);
	printf("Введите номер студента по списку\n");
	scanf("%d", &Tab[i].Numb);
	printf("Введите размер стипендии студента\n");	
	scanf("%d", &Tab[i].Cash);	
	}
}

struct stud Sort(struct stud* Tab, int size_tab)
{

}

void main()
{
struct stud Tab [4];
Read(Tab,4);
	for(int i=0;i<4;i++)
	{
	printf("\n%s",Tab[i].Srnm);
	printf("\n%s",Tab[i].Grp);
	printf("\n%d",Tab[i].Numb);
	printf("\n%d",Tab[i].Cash);
	};
Sort(Tab,4);
}
