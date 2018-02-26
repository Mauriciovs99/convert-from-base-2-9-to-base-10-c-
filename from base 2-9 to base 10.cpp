//This program converts a number from base 2-9 to base 10, specifying the base of the given number.
#include <stdio.h>

	int obtain_digits (int number){ //Returns the number of digits of the number
	int digits = 0;
	for (;number>=1;number /=10){
		digits=digits+1;
	}	
	return digits;
}

	int pow (int x, int i){ //Returns the number powered to the specificated number.
		int f=x;
		int m;
		double y;
		if (i==0){
			return 1;
		}
	for (m=1;m<i; m+=1){
		f=f*x;
	}
	return f;
}


main (){
	int base=0, number=0, digits=0, base10=0;
	printf ("Introduzca el numero y la base de 2 a 9 en la que esta\n");
	scanf ("%d", &number);
	scanf ("%d", &base);
	
	digits = obtain_digits(number);
	
	while (digits>0){
		
		//These ifs uses the digits of the number and the positional properties to convert it.
		if (number>=(9*pow(10,(digits-1)) )){
			base10 = base10 + (pow(base, (digits-1))*9);
			number = number - (9*pow(10,(digits-1)));
		}
		
		else if (number>=(8*pow(10,(digits-1)) )){
			base10 = base10 + (pow(base, (digits-1))*8);
			number = number - (8*pow(10,(digits-1)) );
		}
		
		else if (number>=(7*pow(10,(digits-1)) )){
			base10 = base10 + (pow(base, (digits-1))*7);
			number = number - (7*pow(10,(digits-1)) );
		}
		
		else if (number>=(6*pow(10,(digits-1)) )){
			base10 = base10 + (pow(base, (digits-1))*6);
			number = number - (6*pow(10,(digits-1)) );
		}
		
		else if (number>=(5*pow(10,(digits-1)) )){
			base10 = base10 + (pow(base, (digits-1))*5);
			number = number - (5*pow(10,(digits-1)) );
		}
		
		else if (number>=(4*pow(10,(digits-1)) )){
			base10 = base10 + (pow(base, (digits-1))*4);
			number = number - (4*pow(10,(digits-1)) );
		}
		
		else if (number>=(3*pow(10,(digits-1)) )){
			base10 = base10 + (pow(base, (digits-1))*3);
			number = number - (3*pow(10,(digits-1)) );
		}
		
		else if (number>=(2*pow(10,(digits-1)) )){
			base10 = base10 + (pow(base, (digits-1))*2);
			number = number - (2*pow(10,(digits-1)) );
		}
		else if (number>=(pow(10,(digits-1)) )){
			base10 = base10 + (pow(base, (digits-1)));
			number = number - (pow(10,(digits-1)));
		}
		//NOTE: THE 0 IS NOT INCLUDED BECAUSE WITH IT THERE ARE NO ADDITION OR SUSTRACTION.
		digits = digits -1;
		
	}
	//Print the number in base 10
	printf ("%d", base10);
}
