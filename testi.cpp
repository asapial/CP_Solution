#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[5];
        scanf("%s",s);
        if(((s[0]-'0')*10+(s[1]-'0'))>12) printf("%d:%c%c PM\n",((s[0]-'0')*10+(s[1]-'0'))-12,s[3],s[4]);
        else if(s[0]=='0' && s[1]=='0') printf("12:%c%c AM\n",s[3],s[4]);
        else printf("%s AM\n",s);
    }
    return 0;
}