#include<stdio.h>
#include<math.h>

int Multi(int num)
{
	int  sum = 1, num1[100];

	for (int i = 0; i < num; i++)
	{
		num1[i] = i + 1;
		//printf("%d", num1[i]);
		sum = sum * num1[i];
		//printf("%d ", sum);
	}
	return sum;
}

int Sum(int num)
{
	int i, sum = 0, num1;
	/*printf("Enter number : ");
	scanf_s("%d", &num);*/
	num1 = num;
		do
		{
			Multi(num);
			//printf("%d ", Multi(num));
			sum += Multi(num);
			num--;

		} while (num > 0);

		printf("1! + ");

		for (int i = 2; i < num1; i++)
		{
			printf("%d! + ", i);
		}
		printf("%d!", num1);
		printf(" = %d", sum);
		return sum;
}

int main()
{
	int num , num1;
	printf("Enter number : ");
	scanf_s("%d", &num);
	num1 = num;
	if (num > 0 || num == 0) 
	{
		Sum(num);
	}
	else
	{
		do {
			printf("Try again : ");
			scanf_s("%d", &num);
		} while (num < 0);


			if (num > 0 || num == 0)
			{
				Sum(num);

			}
		
		

	}

}