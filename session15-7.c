#include <stdio.h>
#include <string.h>

int main(){
    char string[1000]="6 nghin ty nam va 1 dem";
    int countLetters=0,countNum=0,i=0;
    while(i<strlen(string)){
        if((string[i]>='A'&&string[i]<='Z')||(string[i]>='a'&&string[i]<='z')){
            countLetters++;
        }else if(string[i]>='0'&&string[i]<='9'){
        	countNum++;
		}
        i++;
    }
    printf("Chuoi ban dau: [%s]\n",string);
    printf("So ky tu la chu cai: %d\nSo ly tu la chu so: %d\nSo ky tu dac biet: %d",countLetters,countNum,strlen(string)-countLetters-countNum);

    return 0;
}

