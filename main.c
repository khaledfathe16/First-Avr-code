#include<avr/io.h>
#include<avr/delay.h>
#include "BIT_MATH.h"
#include "STD_TYPES.h"


int main(void){
s8 x;
for(x=0;x<8;x++){
	SET_BIT(DDRA,x);
}

while(1){


	for(x=0;x<8;x++){
	SET_BIT(PORTA,x);
	_delay_ms(100);
	}


	for(x=7;x>-1;x--){
	CLR_BIT(PORTA,x);
	_delay_ms(100);

	}




}




}
