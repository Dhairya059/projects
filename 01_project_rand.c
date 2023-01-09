// project
//game to guess the no generated
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
int main(){
    int num , guess ,nguesses =1;
    srand ( time(0));
    num = rand () % 100+1; // to generate a no. btw 1 to 100
   // printf("The number  is  %d  \n",num);

   do{ printf("guess the number btw 1 to 100 \n");
   scanf("%d",&guess);
       if( guess>num){
           printf("lower number please \n");

       }
       else if(num>guess){
           printf("higher  number please \n");
           
       }
       else{
           printf(" u guessed in it %d attempts \n",nguesses);

       }
       nguesses++;
   }while(guess!=num);


    
    return 0 ;
}