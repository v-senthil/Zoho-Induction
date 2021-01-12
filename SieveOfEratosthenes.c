#include <stdio.h>
#include <stdlib.h>

int main()
{
	int limit = 100;
    int prime[limit+1],indx,num;
	for(indx=0;indx<=limit;indx++)
    {
        prime[indx] = 1;
    }

	for (num=2; num*num <= limit; num++)
	{
		if (prime[num] == 1)
		{
			for (indx = num*num; indx<=limit; indx += num)
            {
                prime[indx] = 0;
            }
		}
	}

	for (indx=2; indx<=limit; indx++)
	if (prime[indx])
	{
		printf("%d ",indx);
	}
	return 0;
}
