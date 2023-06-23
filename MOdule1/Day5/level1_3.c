#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time calculateTimeDifference(struct Time t1, struct Time t2) {
    struct Time difference;

    
    int t1Seconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int t2Seconds = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    
    int diffSeconds = t1Seconds - t2Seconds;
    if (diffSeconds < 0) {
        diffSeconds = -diffSeconds;
    }

    
    difference.hours = diffSeconds / 3600;
    difference.minutes = (diffSeconds % 3600) / 60;
    difference.seconds = (diffSeconds % 3600) % 60;

    return difference;
}

int main() {
    struct Time t1, t2, difference;

    printf("Enter the first time period : ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    printf("Enter the second time period : ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    difference = calculateTimeDifference(t1, t2);

    printf("\nDifference between the two time periods: %d hours %d minutes %d seconds\n",
           difference.hours, difference.minutes, difference.seconds);

    return 0;
}