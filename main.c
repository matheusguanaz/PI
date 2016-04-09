#include <stdio.h>

double pi(void);

int main(void){
	printf("Valor de PI: %.5f\n", pi() );
}

double pi(void){
	int i;
	 double valor_pi = 3, variavel, a=2.0, b=3.0, c=4.0;

	for(i=1; i<100000; i++){

		if ( i % 2 != 0 ) {
			variavel = (4.0/((a)*(b)*(c)));	
		} else if ( i % 2 == 0)
			variavel = (-4.0/((a)*(b)*(c)));
	
	valor_pi = valor_pi + variavel;
	
	a = a + 2;
	
	b = b + 2;
	
	c = c + 2;

	}
	
	return valor_pi;
}
