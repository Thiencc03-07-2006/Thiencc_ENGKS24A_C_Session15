#include <stdio.h>
#include <string.h>

int main(){
    char string[1000]="6 nghin ty nam va 1 dem",text;
    int i=0,j=0;
    printf("Chuoi ban dau: 		[%s]\n",string);
    printf("moi nhap ki tu muon xoa: ");
    text=getchar();
    while(i<strlen(string)){
        if(string[i]==text){
            j=i;
            while(j<strlen(string)-1){
            	string[j]=string[j+1];
            	j++;
			}
			string[strlen(string)-1]='\0';
        }
        i++;
    }
    i=0;
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

