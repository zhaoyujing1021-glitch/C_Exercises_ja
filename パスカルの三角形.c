/*@最初の5行を出力：両端は 1、   
  内部は上の隣り合う2つの数の和に等しい（パスカルの三角形）
*/

#include <stdio.h>
int main(void){
	int a[5][5]={0};
	for(int i=0;i<5;i++){
		a[i][0]=1;//最初は1
		a[i][i]=1;//最後は1
		for(int j=1;j<i;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
      //1行前の左上＋1行前の真上
		}
		for(int j=0;j<=i;j++){//ここは「<=」（そうしないと最初の行に何も出力されない）
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
