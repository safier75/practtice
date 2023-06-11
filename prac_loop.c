//

#include <stdio.h>
// function decleration.
float addition(float a, float b);
float subtraction(float c, float d);
float multiplication(float e, float f);
float division(float g, float h);

//main function.
int main(){
    char oper;
    printf("Type + for addition. \n");
    printf("Type - for subtraction. \n");
    printf("Type * for multiplication. \n");
    printf("Type / for division. \n" );
    scanf("%c",& oper);

    if (oper == '+'){
        float a,b;
        printf("Enter first number: ");
        scanf("%f",&a);
        printf("Enter second number: ");
        scanf("%f",&b);
        float x= addition(a,b);

        printf("The sum of %f and %f is %f",a,b,x);
        
    }
    else if(oper == '-'){
        float c,d;
        printf("Enter first number: ");
        scanf("%f",&c);
        printf("Enter second number: ");
        scanf("%f",&d);
        float y= subtraction(c,d);
        
        printf("The difference of %f and %f is %f",c,d,y);

    }
    else if(oper =='*'){
        float e,m;
        printf("Enter first number: ");
        scanf("%f",&e);
        printf("Enter second number: ");
        scanf("%f",&m);
        float z= multiplication(e,m);

        printf("The product of %f and %f is %f",e,m,z);

    } 
    else if(oper =='/'){
        float g,h;
        printf("Enter first number: ");
        scanf("%f",&g);
        printf("Enter second numbaer: ");
        scanf("%f",&h);
        float m= division(g,h);

        printf("The division of %f and %f is %f",g,h,m);

    }
    else{
        printf("Enter a valid operator.");

    }
}

    //Function statements.
    float addition(float a, float b){
        float p;
        p=a+b;
        return p;

    }
    float subtraction(float c, float d){
        float q;
        q=c-d;
        return q;

    }
    float multiplication(float e, float f){
        float r;
        r=e*f;
        return r;

    }
    float division(float g, float h){
        float s;
        s=g/h;
        return s;

    }

    
