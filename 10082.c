#include<stdio.h>

const char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";  
  
int main(){
	char c;
	int i;
	while (~(c = getchar())){
		for (i = 1; s[i] && s[i] != c; ++i)
			;
		putchar(s[i] ? s[i - 1] : c);
	}
	
	return 0;  
}  
