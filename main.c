#include <stdio.h>
int main(void) {
  int i, sum_1, sum_2, sum_3, sum_4 , check;
  for(i = 0 ; i <= 9999 ;i++){
    sum_1 = i % 10;
    sum_2 = (i/10) % 10;
    sum_3 = (i/100) % 10;
    sum_4 = (i/1000) % 10;
    check = (sum_1*sum_1*sum_1*sum_1) + (sum_2*sum_2*sum_2*sum_2) + (sum_3*sum_3*sum_3*sum_3) + (sum_4*sum_4*sum_4*sum_4);
    if(check == i){
    	printf("4 Number Split Square 4 Equal itself : %d \n",i);
	}
}
  return 0;
}