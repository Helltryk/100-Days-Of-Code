#include <stdio.h>
#include <string.h>

union AddressDetails {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {

    union AddressDetails details;

    strcpy(details.hostel_address, "123 Hostel Lane, Block B, Room 456");

    printf("Present Address:\n");
    printf("%s\n", details.hostel_address);

    strcpy(details.city, "Anytown");
    printf("\nCity:\n");
    printf("%s\n", details.city);

    return 0;
}