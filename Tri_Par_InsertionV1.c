#include <stdio.h>
#include <stdlib.h>
    
void main()
{
    int i, j;
    int encours;
    int tab[10];
    
    srand(time(0)); 
    for(int index = 0; index < 10; index++){
        tab[index]=rand() % 40 ;
    }
    printf("Le tableau non triée: \n");

    for(int index = 0; index < 10; index++){
        printf("%3d ", tab[index]);
    }
    for (i=0 ; i < 10 ; i++)
    {
        encours = tab[i];  
        for(j = i; j > 0 ; j--){
            while(tab[j-1]>tab[j])
            {
                tab[j] = tab[j-1];
                tab[j-1] = encours;
            }
        }
    }
    printf("\n Le tableau triée: \n");
    for(int index = 0; index < 10 ; index++){
        printf("%3d ", tab[index]);
    }
}
