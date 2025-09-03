#include <stdio.h>

int main(void) {

    int motors;
    long long int packageWeight;
    int total;

    printf("How many motors are carrying the packages");
    scanf("%d", &motors);
    printf("How many kg of packages do we expect?");
    scanf("%lld", &packageWeight);

    total = (packageWeight/motors);

    if (total <= 5.6) {
        printf("Yes! The conveyor belt can carry the packages.");
    } else {
        printf("No. The conveyor belt cannot carry the packages.");
    }

    return 0;
}