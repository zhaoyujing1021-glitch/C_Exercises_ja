#include <stdio.h>

int check(int guess,int answer){
	if(guess<answer) return -1;
	if(guess>answer) return 1;
	return 0;

}
int main(void){
	int guesses[]={7,8,5,6};
	char* a[]={"小さい","大きい","正解"};//ポインタ記号は【型】名に寄せる
	int n=sizeof(guesses)/sizeof(guesses[0]);
	for(int i=0;i<n;i++){
		int r=check(guesses[i],6);
		printf("%s\n",a[r+1]);//-1 -> 0("小さい")
	}

	return 0;
}
