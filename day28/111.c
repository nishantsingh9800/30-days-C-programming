#include <stdio.h>

struct Ticket
{
    int ticketNo;
    char passengerName[50];
    char destination[50];
    int seats;
    float farePerSeat;
    float totalFare;
};

int main()
{
    struct Ticket t;

    printf("===== Ticket Booking System =====\n");

    printf("Enter Ticket Number: ");
    scanf("%d", &t.ticketNo);

    printf("Enter Passenger Name: ");
    scanf("%s", t.passengerName);

    printf("Enter Destination: ");
    scanf("%s", t.destination);

    printf("Enter Number of Seats: ");
    scanf("%d", &t.seats);

    printf("Enter Fare Per Seat: ");
    scanf("%f", &t.farePerSeat);

    // Calculate total fare
    t.totalFare = t.seats * t.farePerSeat;

    printf("\n===== Ticket Details =====\n");
    printf("Ticket Number  : %d\n", t.ticketNo);
    printf("Passenger Name : %s\n", t.passengerName);
    printf("Destination    : %s\n", t.destination);
    printf("Seats Booked   : %d\n", t.seats);
    printf("Fare/Seat      : %.2f\n", t.farePerSeat);
    printf("Total Fare     : %.2f\n", t.totalFare);

    return 0;
}