/*@配列の反転（逆順）：   
1、2、3、4、5 を 5、4、3、2、1 に反転する。
*/
#include <stdio.h>

int main(void){
	int a[5]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	int temp;
	for(int i=0,j=n-1; i<j; i++,j--){//2つのポインタでループ：iは前方から、jは後方から
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
  printf("\n");
	return 0;
}
