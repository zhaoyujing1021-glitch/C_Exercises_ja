/*@階乗の計算：
  入力された整数 n に対し、1 から n までの積（n!）を計算して出力する
  （※元のコメント：最初の5行を出力：両端は 1、内部は上の隣り合う2つの数の和に等しい）
*/

#include <stdio.h>

int main(void){
	int n;
	int a=1;
  scanf("%d",&n);
	for(int i=1;i<=n;i++){
		a *=i;
	}
	printf("%d ",a);
	return 0;
}
