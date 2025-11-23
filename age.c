#include <stdio.h>

int curryear = 2025;
int currmonth = 11;
int currday = 23;

int main(){
    int birthyear;
    int birthmonth;
    int birthday;

    printf("Enter your birth year: ");
    scanf("%d", &birthyear);
    printf("Enter your birth moth: ");
    scanf("%d", &birthmonth);
    printf("Enter your birth day: ");
    scanf("%d", &birthday);

    int years_age;
    int month_age;
    int day_age;
    int hours_age;
    int minutes_age;
    int second_age;

    if (birthyear > curryear){
        printf("you enter invalid values!\n");
    } else if (currmonth < birthmonth || (currmonth == birthmonth && currday < birthday)){
        years_age = (curryear - birthyear) - 1;
        month_age = (years_age * 12) + (12 - (birthmonth - currmonth));
        day_age = month_age * 30;
        hours_age = day_age *24;
        minutes_age = hours_age *60;
        second_age = minutes_age* 60;
    }else {
        years_age  = curryear - birthyear;
        month_age = (years_age * 12) + ((12 - birthmonth) + currmonth);
        day_age = month_age * 30;
        hours_age = day_age *24;
        minutes_age = hours_age *60;
        second_age = minutes_age* 60;
    }
    

    return 0;
}

