//Mr. X walks 20ft and 8inch in a narrow road and covers it in 10 mins. From Mr.X ending point Mr. Y starts walking and cover a distance 32ft and 6inch in 15 mins. Write a C program that will calculate total distance covered and time taken by Mr.X and Mr.Y together using structures.
#include <stdio.h>
int main()
{
    struct dis_time
    {
        int feet;
        int inch;
        int time;
    }c1;
    struct dis_time sd[2]={20,8,10,32,6,15};
    c1.feet=sd[0].feet+sd[1].feet;
    c1.inch=sd[0].inch+sd[1].inch;
    c1.time=sd[0].time+sd[1].time;
    if(c1.inch>=12)
    {
        c1.inch=c1.inch-12;
        c1.feet++;
    }
    printf("Both Mr.X and Mr.Y totally traveled %d feet %d inches in %d minutes",c1.feet,c1.inch,c1.time);
}