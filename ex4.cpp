//overflow check. What happens??

#include <iostream>

int main(){
	unsigned short int small, overflow;
	   small = 65535; //alowed 0 range 65535
	   overflow = small+100;
	std::cout << overflow;
	//gives the overflow counts in bits
}
