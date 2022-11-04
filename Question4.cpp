/******************************************************************************
Conhecimentos de Programação e Suporte
Description: Questão 4 Resposta
Author: Anderson Foggiatto

*******************************************************************************/
#include <stdio.h>
#include <string.h>

//char function ConcatERemove(char s,char t, int k);
int ConcatERemove(char *s,char *t, int k)
{
    int iResult = 0;
    
    int iSizeString1=0;
    int iSizeString2=0;
    int iEqualEnd = 0;
    int iDiference = 0;
    
    iSizeString1 = (unsigned)strlen(s);
    iSizeString2 = (unsigned)strlen(t);
    
    //when the strigs have the same size
    if (iSizeString1 == iSizeString2)
    {
        int i;
        for (i = 0;i<iSizeString1;i++)
        {
            if (s[i] == t[i])
            {
                iEqualEnd = (i+1);
            }
            else
            {
                break;
            }
        } 
        printf("%d %d",((iSizeString1-iEqualEnd)*2),k);
        if (iEqualEnd == (iSizeString1) || (((iSizeString1-iEqualEnd)*2) <= (k)))
        {
          iResult = 1;  
        }
    }
    
    //when size of strigs T < S 
    if (iSizeString1 > iSizeString2)
    {
        
        iDiference = iSizeString1 - iSizeString2;
        
        int i;
        for (i = 0;i<iSizeString2;i++)
        {
            if (s[i] == t[i])
            {
                iEqualEnd = (i+1);
            }
            else
            {
                break;
            }
        } 

        printf("%d %d",iSizeString1-iEqualEnd,iDiference);
        if (((iSizeString1-iEqualEnd ==iDiference )&&(iEqualEnd !=iDiference) ) ||   ((((iSizeString1-iEqualEnd)*2)+iDiference) <= k)|| (((iSizeString1-iEqualEnd)*2)-1)==k)
        {
            iResult = 1;  
        }
    }
    
    //when size of strigs T > S 
    if (iSizeString1 < iSizeString2)
    {
        iDiference = iSizeString2 - iSizeString1;
        
        int i;
        for (i = 0;i<iSizeString1;i++)
        {
            if (s[i] == t[i])
            {
                iEqualEnd = (i+1);
            }
            else
            {
                break;
            }
        } 
        if (((iSizeString2-iEqualEnd == iDiference &&(iEqualEnd !=iDiference)) || ((((iSizeString2-iEqualEnd)*2)+iDiference) <= k) || (((iSizeString2-iEqualEnd)*2)-1)==k))
        {
            iResult = 1;  
        }

        
    }
    return iResult; 
}

int main()
{

    char strString1[100];
    char strString2[100];
    int iInteractions = 0;
	//Need to be improved (include a ckeck)
    printf("Enter the string 1: ");
    scanf("%s",strString1);
    
	//Need to be improved (include a ckeck)
    printf("Enter the string 2: ");
    scanf("%s",strString2);
    
    printf("Enter the iterations number: ");
    scanf("%d",&iInteractions);
    
    if( iInteractions> 1 && iInteractions <100)
    {
        if (ConcatERemove(strString1,strString2,iInteractions) == 1)
            printf("sim");
        else
            printf("não");
    }
    else
    {
       printf("Wrong number of interactions %d. Prease, restart and try again. ",100);
    }
    
    //printf("%s %s %d",strString1,strString2,iInteractions);

   return 0;
}