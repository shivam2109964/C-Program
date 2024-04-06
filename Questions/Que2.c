/* If ages of Ram, Shyam and Ajay are inpute thrrough the keyboard,
    write a program to determine the youngest of the three.
*/

#include<stdio.h>
int main(){
    int Ram, Shyam, Ajay;

    printf("Enter the age of Ram \n");
    scanf("%d",&Ram);
    printf("Enter the age of Shyam \n");
    scanf("%d",&Shyam);
    printf("Enter the age of Ajay");
    scanf("%d",&Ajay);

    if(Ram < Shyam && Ram < Ajay){
        printf("Ram is Yougest");
    }else if(Shyam < Ram && Shyam < Ajay){
        printf("Shaym is Youngest");
    }else if(Ajay < Ram && Ajay < Shyam){
        printf("Ajay is Youngest \n");
    }else{
        printf("EveryOne has a same age");
    }
}