#include<stdio.h> // header function
int main(){ //main function
	int n, r, c, sum=0, temp; //variable declaration and intialization 
	printf("Enter n value:"); // printf calling function
	scanf("%d",&n); // taking input from user
	temp = n; //assigning value of n to temp variable
	while(n>0) //while loop, condition
	{
		r = n%10; 
		c = r*r*r; //Armstrong's ormulla
		sum = sum + c;
		n = n/10;
	}
		n = temp;
	if(n==sum)//true if n equal to equal to sum
		printf("%d is an Armstrong number\n",te