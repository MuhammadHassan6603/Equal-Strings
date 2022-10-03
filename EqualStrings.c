#include<stdio.h> 
int equalstring(char *s1,char *s2)
{
	
	int i,count=0,count1=0,count2=0;
	for(;*s1!='\0';)
	{
		count1++;
		s1++;
	}
	for(;*s2!='\0';)
	{
		count2++;
		s2++;
	}
	if(count1==count2)
    {
    	for(i=0;s2[i];i++)  
        {
        	if(s1[i]==s2[i])
        	 count++;
 	    }
 	    if(count==i)
          return 1;
    }
    return 0;
}
int main()
{
    char arr1[1000],arr2[1000],arr3;  
    printf("Enter 1st String : ");
    gets(arr1);
    printf("Enter 2nd String : ");
    gets(arr2);
    arr3=equalstring(arr1,arr2);
    if(arr3==1)
        printf("Strings are equal");
    else
        printf("Strings are not equal");
}
