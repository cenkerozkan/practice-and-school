/*
 * Question:
 *  Salespeople in a company earn commisions based on theri sales.
 *  The commission rates are:
 *
 *      Commission       Sales
 *      __________       _____
 *      Below 5000        4%
 *      Above 5000        6%
 *
 *  In addition, any salesperson who sells above the average of all the
 *  salespeople recieve a 50$ bonus. Write a program to read the names
 *  and amounts sold by each of the 50 salespeople into an array of
 *  structures, and output the salesperson's name, amount sold, and
 *  total commission earned.
 * */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SALARY 100

// Global array size.
int i_size=0;

typedef struct Salesperson{
    double d_salary;
    double d_sale;
    char s_name[50];
} sales_db;


void avg_sales(double *avg, sales_db arr[i_size]);
int main(void){
    int i;
    // Total average sales.
    double d_avg=0;
    printf("Enter the number of salespeople: ");
    scanf("%d", &i_size);

    // Array of structures
    sales_db db1[i_size];

    // User input
    for(i=0; i<i_size; i++){
        // Salesperson name
        printf("Enter the name of salesperson: ");
        getchar();
        fgets(db1[i].s_name,50,stdin);

        // Default salary will be 100$ dollars
        db1[i].d_salary = SALARY;

        // Sales made by each person
        printf("Enter the sales made by %s: ", db1[i].s_name);
        scanf("%lf", &db1[i].d_sale);
    }

    // Average sales calculation
    avg_sales(&d_avg, db1);

    // Output
    printf("Name Sales Salary\n");
    for(i=0; i<i_size; i++){
        // 1. Above 5000
        if(db1[i].d_sale > 5000){
            // Above average
            if(db1[i].d_sale > d_avg){
                db1[i].d_salary = db1[i].d_salary + (db1[i].d_salary*0.6) + 50;
                printf("%s: %lf %lf\n",db1[i].s_name, db1[i].d_sale, db1[i].d_salary);
            }
                // Below average
            else{
                db1[i].d_salary = db1[i].d_salary + (db1[i].d_salary*0.6);
                printf("%s: %lf %lf\n",db1[i].s_name, db1[i].d_sale, db1[i].d_salary);
            }
        }

            // 2. Below 5000
        else{
            // Above average
            if(db1[i].d_salary > d_avg){
                db1[i].d_salary = db1[i].d_salary + (db1[i].d_salary*0.4) + 50;
                printf("%s: %lf %lf\n",db1[i].s_name, db1[i].d_sale, db1[i].d_salary);
            }
                // Below average
            else{
                db1[i].d_salary = db1[i].d_salary + (db1[i].d_salary*0.4);
                printf("%s: %lf %lf\n",db1[i].s_name, db1[i].d_sale, db1[i].d_salary);
            }
        }
    }
    return 0;
}


void avg_sales(double *avg, sales_db arr[i_size]){
    int i=0;
    for(i=0; i<i_size; i++){
        *avg += arr[i].d_sale;
    }
    *avg = *avg/i_size;
    return;
}