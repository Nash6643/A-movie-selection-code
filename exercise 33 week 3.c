#include <stdio.h>

int main(){

float costindollars;
int rating;


printf("Enter the cost in dollars\n");
scanf("%f",&costindollars);

printf("Enter the rating of the movie\n");
scanf("%d",&rating);

if(costindollars<5){
    printf("Very interested");
}else if(costindollars>=12.00 && rating==5){
    printf("Sort of interested");
}else if(5.00<=costindollars<=11.99 && 2<=rating<=4){
    printf("Sort of interested");
}


    return 0;
}