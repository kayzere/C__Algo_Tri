#include <stdio.h>
#include <stdlib.h>
    
    int rand_a_b(int a, int b){
        return rand()%(b-a) +a;
    }
void main()
{
    int encours, petit, i, j, tmp;
    int tab[10];
    
    srand(time(0)); 
    for(int index = 0; index < 10; index++){
        tab[index]=rand_a_b(0,40);
    }
    printf("Le tableau non triée: \n");

    for(int index = 0; index < 10; index++){
        printf("%3d ", tab[index]);
    }
    
    for (i=0 ; i < 10 ; i++)
    {
        encours = tab[i];
        petit = encours;
        for(j=i+1 ; j<10 ; j++)
        {
            if(tab[j]<petit)
            {
                tmp = petit;
                petit=tab[j];
                tab[j]=tmp;
            }
            tab[i]=petit;
        }
    }
    printf("\n Le tableau triée: \n");
    for(int index = 0; index < 10 ; index++){
        printf("%3d ", tab[index]);
    }


}