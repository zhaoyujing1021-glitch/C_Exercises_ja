/*@隣り合う要素を比較し、
  配列を小さい順（昇順）に並べ替える
*/

#include <stdio.h>

int main(void){
	int a[5]={7,6,3,8,9};
	int n=sizeof(a)/sizeof(a[0]);
	int temp;
	for(int i=0;i<n-1;i++){ //n-1が重要！！！(最後の要素は比較対象外)
    for(int j=0;j<n-i-1;j++){ //n-i-1が重要！！
      if(a[j]>a[j+1]){//jを使って比較！！
        temp=a[j]; 
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");

	return 0;
}
