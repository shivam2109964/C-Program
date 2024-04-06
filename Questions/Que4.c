#include<stdio.h>
int main(){
   char gender;
   int yos;
   char qualification;

   printf("Enter you gender: \n");
   scanf(" %c",&gender);

   printf("How much years of Expreience you have? \n");
   scanf("%d",&yos);

   printf("Enter your qualification \n");
   scanf(" %c",&qualification);

   if(gender == 'm' && yos >= 10 && qualification == 'p'){
    printf("Your Salary is Rs.11000\n");
   }else if(gender == 'm' && yos >= 10 && qualification == 'u'){
    printf("Your Salary is Rs.10000\n");
   }else if(gender == 'm' && yos < 10 && qualification == 'p'){
    printf("Your Salary is Rs.10000 \n");
   }else if(gender == 'm' && yos < 10 && qualification == 'u'){
    printf("Your Salary is Rs.7000\n");
   }else if(gender == 'f' && yos >= 10 && qualification == 'p'){
    printf("Your Salary is Rs.12000\n");
   }else if(gender == 'f' && yos >= 10 && qualification == 'u'){
    printf("Your Salary is Rs. 9000\n");
   }else if(gender == 'f' && yos < 10 && qualification == 'p'){
    printf("Your Salary is 10000\n");
   }else if(gender == 'f' && yos < 10 && qualification == 'u'){
    printf("Your Salary is 6000\n");
   }else{
    printf("You are not eleigible \n");
   }
   

return 0;
    
}