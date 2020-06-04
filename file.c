#include <stdio.h> 
void main()
{
    float n1, n2, n3, n4, n5; 
    float total, average, percentage;
    printf("Enter marks of five subjects: \n");
    scanf("%f%f%f%f%f", &n1, &n2, &n3, &n4, &n5);
    total = n1 + n2 + n3 + n4 + n5;
    average = total / 5.0;
    percentage = (total/500.0) * 100;
    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);
    printf("Percentage = %.2f", percentage);
} 
