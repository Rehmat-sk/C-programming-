//NAME: SHAIKH RAHMAT BANO
//ROLL NO: 38
//UIN:241A046
//DIV:A
//COURSE:AIDS

#include<stdio.h>
#include<string.h>

struct student_record
{
    char name[50];
    int roll_no;
    float total_marks;
};

void input_student_data(struct student_record students[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("enter details for student %d:\n ", i+1);
        printf("Name:  ");
        scanf("%s", &students[i].name);
        printf("Roll Number: ");
        scanf("%d",&students[i].name);
        printf("total marks: ");
        scanf("%f", &students[i].total_marks);
    }
}

int find_topper(struct student_record students[], int n)
{
    int topper_index = 0;
    for(int i= 1; i<n ;i++)
    {
        if (students[i].total_marks > students[topper_index].total_marks)
        {
            topper_index = i;
        }
    }

 int main()
 {
     int n=5;
     struct student_record students[n];
     printf("\t\t***TOPPER FINDER***\n\n");
     input_student_data(students, n);
     int topper_index = find (students, n);
     printf("\n topper details:\n");
     printf("name:%s\n",students[topper_index].name);
     printf("roll number:%d\n",students[topper_index].roll_number);
     printf("total marks:%.2f\n",students[topper_index].total_marks );


     return 0;

 }

