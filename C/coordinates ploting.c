#include<stdio.h>
int main(){
    float x,y;
    printf("Enter the coordinates of x-axis : ");
    scanf("%f",&x);
    printf("Enter the coordinates of y-axis : ");
    scanf ("%f",&y);
    if(x == 0 && y == 0){
        printf("The points lies on origin\n");
    }
        else if(x>0 && y>0){
            printf("The points lies on 1st Quadrant\n");
        }
        else if(x<0 &&y>0){
            printf("The points lies on 2nd Quadrant\n");
        }
        else if(x<0 &&y<0){
            printf("The points lies on 3rd Quadrant\n");
        }
        else if(x>0 &&y<0){
            printf("The points lies on 4th Quadrant\n");
        }
        else{
            printf("Points lies somewhere on axis\n");
        }
    
}
