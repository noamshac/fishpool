#include<stdio.h>
#include<stdlib.h>

int bigest(int* arr, int size);

int main()
{
	int size;
	printf_s("enter size of arr\n");
	scanf_s("%d", &size);
	int* arr = (int*)malloc(sizeof(int) * size);
	if (arr == NULL) return 9;
	for (int i = 0; i < size; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < size; i++)
	{
		printf_s("%d", arr[i]);
	}
	printf_s("the biggest num is: %d", bigest(arr, size - 1));
	free(arr);
	return 0;
}

int bigest(int* arr, int size)
{
	
	if (size==0)		//(&arr[size]) - arr == 0
	{
		
		return arr[0];
	}
	int big = bigest(arr + 1, size - 1);
	if (big<=arr[0]) return arr[0];
	//if (big <= arr[size]) return arr[size];
	else return big;

}








 //targil 1
/*int Sum(int num);


int main()
{
	int num = 0;
	printf_s("enter a positive num\n");
	scanf_s("%d", &num);
	printf_s("the sum from zero to %d is: %d", num, Sum(num));
	return 0;
}
int Sum(int num)
{
	
	if (num <= 1) return 1;
	return num + Sum(num - 1);
}*/