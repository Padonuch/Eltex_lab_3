#include <stdio.h>
#include <stdlib.h>
#define MAX_L 1024

struct stud
{
char Srnm[MAX_L];
char Grp[MAX_L];
int Numb;
int Cash;
};

struct stud** read(struct stud** Tab, int size_Tab)
{
Tab=(struct stud**) malloc(sizeof(struct stud*)*size_Tab);
	for(int i=0; i<size_Tab;i++)
	{
	Tab[i]=(struct stud *) malloc(sizeof(struct stud *)) ;
	printf("Введите фамилию студента\n");	
	scanf("%s", Tab[i]->Srnm);
	printf("Введите группу студента\n");
	scanf("%s", Tab[i]->Grp);
	printf("Введите номер студента по списку\n");
	scanf("%d", &Tab[i]->Numb);
	printf("Введите размер стипендии студента\n\n");	
	scanf("%d", &Tab[i]->Cash);	
	}
return Tab;
}

struct stud** sort(struct stud** Tab, int size_Tab)
{
for (int i=0;i<size_Tab;i++)
	{
	struct stud* SW=Tab[i];
	int adr_min=i;	
	for(int j=i+1;j<size_Tab;j++)
		{
		if(Tab[j]->Numb < SW->Numb)
			{
			SW=Tab[j];
			adr_min=j;
			}
		}
	Tab[adr_min]=Tab[i];
	Tab[i]=SW;	
	}
return Tab;
}

void print(struct stud** Tab, int size_Tab)
{
for(int i=0;i<size_Tab;i++)
	{
	printf("\n%s",Tab[i]->Srnm);
	printf("\n%s",Tab[i]->Grp);
	printf("\n%d",Tab[i]->Numb);
	printf("\n%d\n",Tab[i]->Cash);
	}
}

void freeT (struct stud ** Tab)
{
free(Tab);
} 

void main()
{
struct stud** Tab;
Tab=read (Tab, 4);
printf("\nStart Tab");
print (Tab, 4);
Tab=sort (Tab, 4);
printf("\nSort Tab");
print (Tab, 4);
freeT (Tab);
}
