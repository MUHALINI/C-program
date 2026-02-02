#include <stdio.h>

struct Address {
    char city[50];
    int pincode;
};

struct Student {
    int id;
    char name[50];
    struct Address addr;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;

    printf("Enter Student ID: ");
    scanf("%d", &ptr->id);

    printf("Enter Student Name: ");
    scanf("%s", ptr->name);

    printf("Enter City: ");
    scanf("%s", ptr->addr.city);
