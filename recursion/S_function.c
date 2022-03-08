// assignment 3
// Name : Anshal Chopra
// Student ID : 301384760

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<time.h>

int S1(int n, int a, int b)
{
	//Function starts here 

	assert(n>0); // precondition.
	if(n == 1)   // base condition.
		return a;
	return S1(n-1, a, b) + b;

	//Function ends here

}
int S2(int n, int a, int b)
{
	//Function starts here

	assert(n>0);
	int result = 0;

	for(int i=1;i<=n;i++)
	{
		if(i==1)
			result = result + a;
		else
			result = result + b;
	}

	return result;

	//Function ends here
}
int S3(int n, int a, int b)
{
	//Function starts here

	assert(n>0);
	int result;
	result = a + (n-1) * b;
	return result;

	//Function ends here
}
int S_test()
{
	//Function starts here

	int n, a, b;
	srand(time(0)); // so that the test cases are always different, each time we run the programme.
	int count = 0;

	for(int i=1;i<=100;i++) // 100 random test cases
	{
		a = rand();
		b = rand();
		int fun_1 = (S1(i, a, b)); // return value of S1
		int fun_2 = (S2(i, a, b)); // return value of S2
		int fun_3 = (S3(i, a, b)); // return value of S3

		if(fun_1 == fun_2 && fun_2 == fun_3)
			count++;
	}
	
	if(count == 100)
		return 1;
	return 0;

	//Function ends here

}
int main()
{
	if(S_test() == 1)
	{
		printf("All three functions works perfectly\n");
	}
}