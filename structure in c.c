#include<stdio.h>
struct student
{
    char name[20];
    int DOB;
    int regno;
    int phno;
    float tmark;
    float emark;
    float mmark;
    char add[20];
};
void main()
{
    int n,i;
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++)
    {
        scanf("%s%d%d%d%f%f%f%s",&s[i].name,&s[i].DOB,&s[i].regno,&s[i].phno,&s[i].tmark,&s[i].emark,&s[i].mmark,&s[i].add);
    }
     for(i=0;i<n;i++)
    {
        printf("\n NAME:%s DOB:%d REGNO:%d PHNO:%d TMARK:%f EMARK:%f MMARK:%f ADDRESS:%s ",s[i].name,s[i].DOB,s[i].regno,s[i].phno,s[i].tmark,s[i].emark,s[i].mmark,s[i].add);
    }
}
