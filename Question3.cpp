/******************************************************************************
Conhecimentos de Programação e Suporte
Description: Questão 3 Resposta
Author: Anderson Foggiatto

*******************************************************************************/
#include <stdio.h>
int main()
{
   for(int iNumber=1 ; iNumber<=100 ; iNumber++)
   {
        if (iNumber%3==0 && iNumber%5==0)
        {
 	        printf("FooBaa\n");
        }
        else
        {
        	if (iNumber%3==0 )
        	{
         	    printf("Foo\n");
            }
            else
    	    {  
        	    if (iNumber%5==0 )
        	    {
                    printf("Baa\n");
        	    }
                else
                {
         	        printf("%d\n", iNumber);
                }
    	    }
        }
    }
   return 0;
}