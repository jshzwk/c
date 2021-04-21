#include<stdio.h>
int main()
{
    char arr[] = "abcdef";
    int i = 0;
    for(i=0; i<6; i++)//strlen(arr)=6
    {
    	printf("%c ",arr[i]);
	}
	return 0;
} 