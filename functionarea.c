#include<stdio.h>

//declaration section

int area_of_square(float a);
int area_of_rectangle(float b,float h);
int area_of_circle(float r);
int area_of_triangle(float l,float b);

//main function

int main (){
float a=4;
float b=2,h=5,l=4;
float r=3;

float square=area_of_square(a);
float rectangle=area_of_rectangle(b,h);
float circle=area_of_circle(r);
float traingle= area_of_triangle(l,b);

printf("area of square is = %f\n",square);
printf("area of rectangle is = %f\n",rectangle);
printf("area of circle is = %f\n",circle);
printf("area of traingle is = %f\n",traingle);


}

//user defained functions

int area_of_square(float a){
    return a*a;
}
int area_of_rectangle(float b,float h){
    return (b*h)/2;
}
int area_of_circle(float r){
    return 3.14*r*r;
}
int area_of_triangle(float l,float b){
    return l*b;
}