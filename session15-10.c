#include <stdio.h>
#include <string.h>

int main(){
    char string[1000]="6 nghin ty nam va 1 dem";
    printf("Chuoi ban dau: [%s]\n",string);
    int i=0,character[2][25],col=-1,check=-1,j=0;
    while(i<20){
    	character[0][i]=-1;
    	i++;
	}
	i=0;
    while(i<strlen(string)){
    	j=0;
    	check=-1;
    	while(j<=col){
    		if(string[i]==character[0][j]){
    			character[1][j]++;
    			check=0;
    			break;
			}
			j++;
		}
		if(check){
			col++;
			character[0][col]=string[i];
			character[1][col]=1;
		}
    	i++;
    }
    i=0;
    while(i<=col){
    	printf("[%c]: %d\n",character[0][i],character[1][i]);
    	i++;
	}
    return 0;
}

