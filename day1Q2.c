#include <stdio.h>
int main(){
int angle1, angle2, angle3, sum;
// reading the three angles of triangle
printf("Enter the three angles of triangles:");
scanf("%d %d %d", &angle1, &angle2, &angle3);
//calculate the sum of triangle
sum=angle1+angle2+angle3;
//check if sum is equal to 180 
if (sum==180){
printf("the triangle is valid");
}else{
      printf("the triangle is not valid");
}
return 0;
}