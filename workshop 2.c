	#include<stdio.h>
	int getchar(void);
	int toupper (int c); 
int main() {
/*	int num1;
	int num2;
	char b;
	printf ( "Nhap phep tinh: ");
	scanf ("%d %c %d", &num1, &b, &num2);
	switch (b) {
		case '+':
		printf ("a + b = %d", num1 + num2);
		break;
		case '-':
		printf ("a - b = %d", num1 - num2);
		break;
		case '*':
		printf ("a * b = %d", num1 * num2);
		break;
		case '/':
		printf (" a / b = %d", num1 / num2);
		break; 
		default: print out “Op is not
supported”
	} */
	// prg2
/*	int ic , n, tf, ti, ict;
	printf ("Your income of this year: \n");
	scanf ("%d", &ic);	
	printf ("Number of dependent: ");
	scanf ("%d", &n);
	tf = 12*(9000000 + n*3600000);
	printf ("Tax-free income: %d\n", tf);
	ti = ic - tf;
	if(ti <= 0) {
	printf ("Taxable income: 0\n");
	printf ("Income tax: 0");
}else{
		printf ("Taxable income: %d\n", ti);
}
	if (ti - 5000000 >= 0 ) {
	ict = ict + (ti * 0.5);
	printf ("Income tax: %d", ict);
	} else if ( ti - 10000000 >= 0) {
	ict = ict + ((ti - 5000000) * 0.1);
	printf ("Income tax: %d", ict);
	} else if ( ti - 18000000 >= 0) {
	ict = ict + ((ti - 10000000) * 0.15); 
	printf ("Income tax: %d", ict);
	} else if ( ti > 18000000 ) {
	ict=ict+((ti-18000000)* 0.2); 
	printf ("Income tax: %d", ict);
	} 
	*/
	// prg3
/*	int x, sum =  0;
	do {
		printf ("Nhap so: ");
		scanf ("%d", &x);
			sum = sum + x;
	} while (x != 0);
	printf ("tong cac so: %d", sum);
*/
 
 	// prg4
/* 	int x, y;
 	do {
 		printf ("Nhap so : ");
 		scanf ("%d %d", &x, &y);
 		int c = x;
 			x = y;
 			y = c;
 			
 		printf ("x = %d y = %d", x,y);
	 } while (x != 0 && y != 0);
*/
	// prg5
/*	 int V = 0, C = 0, o = 0;
	 char ch;
	 printf ("Nhap chu cai: ");
	 do {
	 	ch = getchar();
	 	ch = toupper(ch);
	 	if (ch > 'A' && ch < 'Z') {
	 		switch (ch) {
	 			case 'A' :
	 			case 'E' :
	 			case 'I' :
	 			case  'O':
	 			case 'U' :
	 				V++;
	 			break;
	 			default : C++;
			 } 
		 } else {
		 	o++;
		 }
	 } while (ch != '\n');
	 printf ("Nguyen am: %d\n", V);
	 printf ("Phu am: %d\n", C);
	 printf ("khac: %d", o);
	 */
	// prg6
/*	char ch;
	for(int i = 0; i < 256; i++) {
		printf ("%c : %d, %o, %X\n", i, i, i, i);
		if (i != 0 && i % 20 == 0) getchar();
	}
*/
	
	 return 0; 
}
