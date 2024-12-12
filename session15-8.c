#include <stdio.h>
#include <string.h>

int main(){
    char string[1000]="6 nghin ty nam va 1 dem";
    printf("Chuoi ban dau: 		[%s]\n",string);
    int i=1;
    if(string[0]>='a'&&string[0]<='z'){
	    string[0]-=32;
    }
    while(i<strlen(string)){
        if(string[i]==' '){
        	if(string[i+1]>='a'&&string[i+1]<='z'){
	        	string[i+1]-=32;
	        }
        }
        i++;
    }
    printf("Chuoi ban sau thay doi: [%s]\n",string);
    return 0;
}

