#include <stdio.h>
int main() 
{
	long long int testInteger=3000000000;
	printf("Number is %lld",testInteger);
}

/* The value of testInteger exceeds the maximum limit of an int data type.
The maximum value that can be stored in an int is 2147483647.
 When you assign a value larger than this to an int, it causes an overflow.
To fix this issue, you can use a larger data type, such as long long int, which can store larger set of values.
*/