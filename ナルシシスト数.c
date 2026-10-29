/*@すべての3桁のナルシシスト数（水仙花数）を求める：
  各桁の数字の立方和（3乗の和）がその数自身と等しい数
*/

//%-2d 少なくとも2文字分の幅を確保する

#include <stdio.h>

int main(void){
  int n;
  for(int n=100;n<=999;n++){
    int a=n/100;   //百の位
    int b=n/10%10; //十の位
    int c=n%10;    //一の位
    if(a*a*a+b*b*b+c*c*c==n){
      printf("%d ",n);
    }
  }
  printf("\n");
  return 0;
}
