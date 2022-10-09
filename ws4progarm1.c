#include<stdio.h>
#include<math.h> 
int main (){
	int c, number, number2;
		do{
			printf ("===== main menu =====\n");
			printf ("1- process primes:\n");
			printf ("2-Print min, max, digit in an integer\n");
			printf ("3-Quit\n");
			printf ("Please select options: ");
			scanf ("%d", &c);
		switch (c){
			case 1 :
				do {
				printf ("Nhap so:");
				scanf ("%d", &number);
				}while (number < 0);
				int i =1, c= 0;
				for (i = 1; i <= number; i++) {
      				if (number % i == 0) {
        					 c++;}}
 					 if (c == 2) {
       					 printf("%d is a Prime number\n", number);
  							}else {
         				printf("%d is not a Prime number\n", number);
 								 }
			break;
			case 2:
				do{
					printf ("Nhap so: ");
					scanf("%d", &number2);
				} while (number2 < 0);
				int max = number2%10;
				int min = number2%10;
				int remind;
				while(number2>0){
					remind = number2%10;
					if(max < remind){
						max = remind;}
					if(min > remind){min = remind;}
					number2 = number2 / 10;
				} printf ("max: %d min %d\n", max, min);
			break;	
			}
	} while (c >= 1 && c <= 3);
		
	return 0;
}
