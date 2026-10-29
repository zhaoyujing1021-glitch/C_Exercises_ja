/*@3つの数のソート：   
9、3、6を小さい順（昇順）に出力する。
*/

#include <stdio.h>

int main(void){
	int x=9,y=3,z=6;
	int temp;
	if(x>y){
		temp=x;
		x=y;
		y=temp;
	}
	if(x>z){
		temp=x;
		x=z;
		z=temp;
	}
	if(y>z){
		temp=y;
		y=z;
		z=temp;
	}
	printf("%d %d %d\n",x,y,z);
	return 0;
}
