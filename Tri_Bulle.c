#include <stdio.h>
#include <stdlib.h>
    
int rand_a_b(int a, int b){
    return rand()%(b-a) +a;
}

void main()
{
    int encours, tmp, i, j, k;
    int tab[10];
    
    srand(time(0)); 
    for(int index = 0; index < 10; index++){
        tab[index]=rand_a_b(0,40);
    }
    printf("Le tableau non triée: \n");

    for(int index = 0; index < 10; index++){
        printf("%3d ", tab[index]);
    }
    
    k=10;
    while(k!=0)
    {
        for(i=0 ; i < k ; i++)
        {
            encours=tab[i];
            if(encours>tab[i+1])
            {
                tmp=tab[i+1];
                tab[i+1]=tab[i];
                tab[i]=tmp;
            }    
        }
        k--;
    }

    printf("\n Le tableau triée: \n");
    for(int index = 0; index < 10 ; index++){
        printf("%3d ", tab[index]);
    }
    
}