#include <stdio.h>
int main()
{
	int Num, reverseNum = 0, originalNum, remainder;
	
	// reading a five digit number
	printf("Enter a Five digit number: ");
	scanf("%d", &Num);
	
	originalNum= Num;
	
	//Reverse the number
	while(Num!=0)
	{remainder=Num%10;
	reverseNum=reverseNum*10+remainder;
	Num /=10;
	}
	//output of reverse number.
	
	printf("reversed number is : %d\n",reverseNum);
	
	return 0;
	
}
