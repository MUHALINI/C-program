#include <stdio.h>
 int myfunction(int num1,int num2) {
 return num1-num2;
}
int main() {
printf("the total number value is %d",myfunction(20,20));

    return 0;
}

            
#include <stdio.h>
 int myfunction(int num1,int num2) {
 return num1-num2;
}
int main() {
    int value = myfunction(20,20);
printf("the total number value is %d",value);

    return 0;
}

                  #scope#

#include <stdio.h>
 //global scope
 int eneya = 50;
 //user defined function
 int myfunction(int x,int y){
     //local scope
     int newar = 30;
     printf("%d \n",newar);
     return x+y;
 }
 //main function
 int main(){
     int value = myfunction(5,5);
     printf("%d \n",eneya);
     printf("total value is %d",value);
    return 0;
}
       ceil&floor

#include <stdio.h>
#include <math.h>

int main() {
    printf("%f \n",ceil(1.1));
    printf("%f \n",floor(1.1));

    return 0;
}
     square root & power

printf("%f \n",sqrt(16));
    printf("%f \n", pow(4,4));


      workout problems


#include <stdio.h>
#include <math.h>
int main() {
    float area;
    printf("Enter the area:",area);
    scanf("%f",&area);
    printf("%f \n", sqrt(area));
    

    return 0;
}

     Recursion


#include <stdio.h>
int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fib(n-1)+ fib(n-2);
    }
}
 int main(){
     int n;
     printf("Enter the number:");
     scanf("%d", &n);
     printf("The position of %d is %d \n",n, fib(n));
     
 return 0;
}