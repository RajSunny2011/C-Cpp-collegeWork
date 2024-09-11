#include <stdio.h>
struct date {
    int day;
    int month;
    int year;
};
struct student_record {
    char name[50];
    int sap_id;
    int enrollment_number;
    struct date registration_date;
    struct date date_of_birth;
};
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student_record students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("SAP ID: ");
        scanf("%d", &students[i].sap_id);
        printf("Enrollment Number: ");
        scanf("%d", &students[i].enrollment_number);
        printf("Registration Date (day month year): ");
        scanf("%d %d %d", &students[i].registration_date.day, &students[i].registration_date.month, &students[i].registration_date.year);
        printf("Date of Birth (day month year): ");
        scanf("%d %d %d", &students[i].date_of_birth.day, &students[i].date_of_birth.month, &students[i].date_of_birth.year);
    }
    printf("Entered student details:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("SAP ID: %d\n", students[i].sap_id);
        printf("Enrollment Number: %d\n", students[i].enrollment_number);
        printf("Registration Date: %d-%02d-%02d\n", students[i].registration_date.year, students[i].registration_date.month, students[i].registration_date.day);
        printf("Date of Birth: %d-%02d-%02d\n", students[i].date_of_birth.year, students[i].date_of_birth.month, students[i].date_of_birth.day);
        printf("\n");
    }

    return 0;
}