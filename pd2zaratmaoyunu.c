#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	srand(time(0));
	
    int z1,z2,toplam,oyuncupuan;
    char devam;
    
    do{
    	z1=rand() % 6 + 1;
    	z2=rand() % 6 + 1;
    	
    	toplam = z1+z2;
    	
    	printf("atilan zarlar: %d - %d\n",z1,z2);
    	
    	if(toplam==7 || toplam==11)
    	{
    		printf("kazandiniz\n");
		}
		else if(toplam==2||toplam==3||toplam==12)
		{
			printf("kaybettiniz\n");
		}
		else
		{
			oyuncupuan=toplam;
			printf("oyuncu puani: %d\n",oyuncupuan);
		
		while(1){
			z1= rand()%6 + 1;
			z2= rand()%6 + 1;
			
			toplam=z1+z2;
			
			printf("atilan zarlar : %d ve %d\n",z1,z2);
			
			if(toplam==oyuncupuan)
			{
			    printf("kazandiniz\n");
				break;	
			}
			else if(toplam==7)
			{
				printf("kaybettiniz\n");
				break;
		  	}
		  }
		}
    	
    	
    	printf("tekrar oynamak icin 'e bas\n'");
    	scanf(" %c",&devam);
    	
	}while(devam =='e'|| devam== 'E');
	
	
	return 0;
}
