#include<stdio.h>
int main(){
    int i;
    char a[] = {"iamabhaykushwah"};
    static char b[26];
    for (i = 0;a[i];i++){
        b[a[i]-97]++;
    }
    for(i=0;i<26;i++){
        if(b[i] !=0){
            printf("%c=%d\n",i+97,b[i]);
        }
    }
}
