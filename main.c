#include <stdio.h>

int main(void) {
    int motors;
    float packages_weight;
    const float capacity_per_motor = 5.6;

    // Ask for the number of motors
    printf("How many motors are carrying the packages? ");
    scanf("%d", &motors);

    // Ask for the package weight
    printf("How many kg of packages do we expect? ");
    scanf("%f", &packages_weight);

    // Check capacity
    if (packages_weight / motors <= capacity_per_motor) {
        printf("Yes! The conveyor belt can carry the packages.\n");
    } else {
        printf("No. The conveyor belt cannot carry the packages.\n");
    }

    return 0;
}