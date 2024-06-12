#include<stdio.h>



int get_sum(int x,int y)
{
scanf("%d%d",&x,&y);

printf("Enter the value of x,y:\n");

int sum=x+y;

return sum;
}


int get_sub(int x,int y){

scanf("%d%d",&x,&y);

printf("Enter the value of x,y:\n");

int sub=x-y;

return sub;
}


int get_mul(int x,int y){

scanf("%d%d",&x,&y);

printf("Enter the value of x,y:\n");

int mul=x*y;

return mul;

}

int get_div(int x,int y){

scanf("%d%d",&x,&y);

printf("Enter the value of x,y:\n");

int div=x/y;

return div;

}


int main(){
int n;
while(1){
        int choice;
printf("Menu\n 1. Sum\n 2. Sub\n 3.Multiply\n 4. Division\n Enter your choice\n");
scanf("%d", choice);

if(n==1){
        int x,y;
scanf("%d%d",&x,&y);
     int result =get_sum(x,y);
     printf("sum is%d:\n",result);
}

else if(n==2){
        int x,y;
scanf("%d%d",&x,&y);

 int result =get_sub(x,y);
     printf("sum is%d:\n",result);

}

else if(n==3){
    int x,y;
scanf("%d%d",&x,&y);

 int result =get_mul(x,y);
     printf("sum is%d:\n",result);

}else if(n==4){
    int x,y;
scanf("%d%d",&x,&y);

 int result =get_div(x,y);
     printf("sum is%d:\n",result);

}


else break;

}

}
