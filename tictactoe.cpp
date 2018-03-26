#include<stdio.h>
#include<stdlib.h>
static int arr[3][3];
int count=0;
int row,col;
int p;
void user1();
 void user2();
void display();
int main()
{

  printf("tic tac toe\n");
while(count<10)
{
	user1();
	display();
	user2();
display();
}
return 0;
}
void user1()
{
	int i,j,t=-1,c=-1,d=-1;
	count++;
	printf("enter the position where you want to insert 1 ");
	scanf("%d",&p);
	row=(p-1)/3;
	col=(p-1)%3;

	arr[row][col]=1;
	for(i=0;i<=2;i++)
{
		for(j=0;j<=2;j++)
		{

			if(arr[i][j]!=1 )
				break;
			else
		{

			t++;
			if(t==2)
			{
				printf("user1 is the winner\n");
                display();
			exit(0);
			}
			continue;
		}
	}
}
	for(j=0;j<=2;j++)
{
		for(i=0;i<=2;i++)
	{
		if(arr[i][j]!=1)
			break;
		else
		{
			c++;
			if(c==2)
			{
				printf("user1 is the winner\n");
				display();
			exit(0);
			}
			continue;
		}
	}

	if(arr[j][j]!=1)
		continue;
	else
	{
		d++;
		if(d==2)
		{
			printf("user 1 is the winner\n");
			display();
			exit(0);
		}
		continue;
	}

}


}

void user2()
{
	int i,j,t=-1,c=-1,d=-1;
	count++;
	printf("enter the position where you want to insert 2 ");
	scanf("%d",&p);
	row=(p-1)/3;
	col=(p-1)%3;

	arr[row][col]=2;
	for(i=0;i<=2;i++)
{
		for(j=0;j<=2;j++)
		{

			if(arr[i][j]!=2 )
				break;
			else
		{
			t++;
			if(t==2)
			{
				printf("user2 is the winner\n");
				display();
			exit(0);
			}
			continue;
		}
	}
}
	for(j=0;j<=2;j++)
{
		for(i=0;i<=2;i++)
	{
		if(arr[i][j]!=2)
			break;
		else
		{
			c++;
			if(c==2)
			{
				printf("user2 is the winner\n");
				display();
			exit(0);
			}
			continue;
		}
	}

	if(arr[j][j]!=2)
		continue;
	else
	{
		d++;
		if(d==2)
		{
			printf("user 2 is the winner\n");
			display();
			exit(0);
		}
		continue;
	}

}

}
void display()
{
    for(row=0;row<=2;row++)
    {
        for(col=0;col<=2;col++)
        {
            printf("%d",arr[row][col]);
        }
    printf("\n");
    }
}




