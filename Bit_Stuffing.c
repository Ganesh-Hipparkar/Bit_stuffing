#include <stdio.h>
void main()
{
	char str[100],ptrn[7]="011111",dest[100];
    int i,j=0,k=0,c=0;
    printf ("Flag is 0111110.");

    printf ("\nEnter The Data : \t");
    scanf ("%s",str);
    
	while (ptrn[j]!='\0')
  {
    dest[k]=ptrn[j];
    j++;
    k++;
  }
   dest[k]='1';
   k++;
   dest[k]='0';
   k++;
   j=0;
   
    for(i=0;str[i]!='\0';i++)
    {
    	if (str[i]==ptrn[j])
      {
        dest[k]=str[i];
        k++;
        c++;
        j++;

     if (c==6)
     {
       dest[k]='0';
         c=0;
          j=0;
         k++;
     }
     }
     else
      {
        dest[k]=str[i];
         j=0;c=0;
         k++;
      
	  if (str[i]==ptrn[j])
      {
        j++;
		c++;
      }
      }
    }
       j=0;
     while (j<=5)
      {
        dest[k]=ptrn[j];
        j++;
        k++;
      }
        dest[k]='1';
        k++;
		dest[k]='0';
		dest[k+1]='\0';

		printf ("sending Data .... %s",dest);
}
