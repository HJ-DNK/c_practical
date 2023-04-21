 #include<stdio.h>
 struct st
 {
int rollno;
char name[11];
float marks;
 };
 void main()
 {
struct st a1={.rollno=10,.marks=3.9,.name="hiren"};
printf("%d %f %s\n",a1.rollno,a1.marks,a1.name);

 }
 