#include <stdio.h>

int main() {
    char trafficLight;

    // Input the traffic light signal
    printf("Enter the traffic light signal (R for Red, G for Green, Y for Yellow): ");
    scanf("%c", &trafficLight);

    // Check the input and output the corresponding action
    if (trafficLight == 'R' || trafficLight == 'r') {
        printf("Stop\n");
    } else if (trafficLight == 'G' || trafficLight == 'g') {
        printf("Go\n");
    } else if (trafficLight == 'Y' || trafficLight == 'y') {
        printf("Slow Down\n");
    } else {
        printf("Invalid input! Please enter 'R', 'G', or 'Y'.\n");
    }

    return 0;
}
