/* greatest among n numbers */
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    static int empt;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("enter the %dth element: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                empt=a[i];
                a[i]=a[j];
                a[j]=empt;
            }
        }
    }
    printf("greatest number: %d",a[n-1]);
}
*/
// fibonacci series
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    static int a,b=1,c,n,i=0;
    printf("enter the number: ");
    scanf("%d",&n);
    do
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    while(i<n);
}
*/
//leap year for given range
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    printf("enter the limits: ");
    scanf("%d%d",&a,&b);
    for(int i=0;i<4;i++)
    {
       if(a%4==0)
        {
            c=a;
            while(c<b)
            {
                printf("%d\n",c);
                c=c+4;
            }
            break;
        }
        else
        {
            a++;
        }
    }
}
*/
//armstrong number
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int d1,d2,d3,num,eqn;
    printf("enter the number: ");
    scanf("%d",&num);
    d1=num/100;
    d2=(num%100)/10;
    d3=num%10;
    eqn= (d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);
    if(eqn==num)
    {
        printf("%d is a amstrong number",num);
    }
    else
    {
        printf("%d is not a amstrong number",num);
    }
}
*/
//factorial
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("enter the number: ");
    scanf("%d",&n);
    static int f;
    f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("%d!=%d",n,f);
}
*/
//pallindrome
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int len, c=0;
    printf("enter the word: ");
    scanf("%s",&a);
    len=strlen(a);
    for(int i = 0; i<len/2; i++)
    {
        if(a[i]==a[len-i-1])
        {
            c++;
        }
    }
    if(c==len/2)
        printf("Palindrome");
    else
        printf("Not a Palindrome");
}
*/
//check for prime numbers!!
/*
#include<stdio.h>
int n,x;
int primer(n);
int main()
{
    printf("enter the value: ");
    scanf("%d",&n);
    if(n==2)
    {
        printf("its a prime number");
    }
    else
    {
         primer(n);
    }
    getch();
}
int primer()
{
    for(int i=2;i<n;i++)
    {
        x=n%i;
        if(x==0)
        {
            printf("the number given is a composite number");
            break;
        }
        else if(i==(n-1)&&x!=0)
        {
            printf("its a prime number");
        }
        else
        {
            continue;
        }
    }
}
*/
//swapping
/*
#include<stdio.h>

int main()
{
    int a,b;
    printf("enter the 2numbers: ");
    scanf("%d %d",&a,&b);
    printf("\na=%d\nb=%d\n",a,b);
    swapper(&a,%b);
    printf("a=%d\nb=%d",a,b);

}
int swapper(int *a,int *b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

*/
//to find the no of duplicate elements in an array
/*
#include<stdio.h>
int main()
{
    int n,i,j,count=0;
    static int empt=0;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) //getting the array value
    {
        printf("enter the %d th element: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                empt=a[i];
                a[i]=a[j];
                a[j]=empt;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<i+2;j++)
        {
          if(a[i]==a[j])
          count++;
        }
    }
    printf("%d\n",count);
}
*/
//fibonacci and a prime
/*
#include<stdio.h>
#include<stdlib.h>
int n;
int main()
{

    int a=0,b=1,c;
    printf("enter the range: ");
    scanf("%d",&n);
    do
    {

        primer(a);
        c=a+b;
        a=b;
        b=c;

    }
    while(a<n);
}
int primer(int a)
{
    int c=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
            c++;
        if(c==3)
        {
            break;
        }
    }
    if(c==2)
        printf("%d\n",a);

}
*/
//check for diagonal matrix
/*
#include<stdio.h>
#include<string.h>
char sen[100],del[100];
int main()
{
    printf("enter the phrase:- ");
    scanf("%s",&sen);
    printf("enter the word u want the delete:- ");
    scanf("%s",&del);
    int len_sen=strlen(sen);
    int len_del=strlen(del);

}
*/
/*
#include<stdio.h>
#include<string.h>
char num1[9],num2[9];
int i,j,empt,len1,len2,def;
int main()
{
    printf("enter the 2 numbers: ");
    scanf("%s%s",&num1,&num2);
    len1= strlen(num1);
    len2= strlen(num2);
    for(i=0;i<len1;i++) //loop for rearrangement
    {
        for(j=i+1;j<len1;j++)
        {
            if(num1[i]>num1[j])
            {
                empt=num1[i];
                num1[i]=num1[j];
                num1[j]=empt;
            }
        }
    }
    for(j=0;j<len2;j++)
    {
        if(num2[j]>=num2[j+1])
        {
            sig_dig(j);
            printer();
        }
        else
        {
            sig_dig(j);
            printer();
            sig_dig(j+1);
            printer();
        }
    }

}
int sig_dig(int j)
{
    for(i=j;i<len1;i++)
        {
            if(num1[i]>=num2[j])
            {
                printf("%c",num1[i]);
                def=i;
                break;
            }
        }
}
int printer()
{
    for(i=0;i<len1;i++)
    {
        if(i!=def)
            printf("%c",num1[i]);
    }
    printf("\n");
}
*/
//FAILURE CODE-2;
/*
#include<stdio.h>
#include<string.h>
char num1[9],num2[9];
int i,j,empt,len1,len2,def;
int main()
{
    printf("enter the 2 numbers: ");
    scanf("%s%s",&num1,&num2);
    len1= strlen(num1);
    len2= strlen(num2);
    for(i=0;i<len1;i++) //loop for rearrangement
    {
        for(j=i+1;j<len1;j++)
        {
            if(num1[i]>num1[j])
            {
                empt=num1[i];
                num1[i]=num1[j];
                num1[j]=empt;
            }
        }
    }
    definer(0);
    for(j=1;j<len2;j++)
        for(int k=0;k<len1;k++)
            if(num2[j]>num1[k]&&k!=def)
            {
              definer(j);
            }
    for(i=0;i<len1;i++)
    {
        if(i!=def)
            printf("%c",num1[i]);
    }
}
int definer(int k)
{
    for(i=0;i<len1;i++)
    {
        if(num1[i]>=num2[k])
        {
            printf("%c",num1[i]);
            def=i;
            break;
        }
    }
}
*/
//CODEVITA PROB-1:COMPUTE NEAREST LARGER NUMBER BY INTERCHANGING DIGITS UPDATES,GIVEN 2 NUMBERS A AND B FIND THE SMALLEST NUMBER GREATER THAN B BY INTERCHANGING THE DIGITS OF A AND IF NOT POSSIBLE PRINT -1
/*
#include <stdio.h>
#include <string.h>
int k=0;
int i,j,n,flag;
char empt[10],a[10],b[10];
struct compartment
{
    char num[10];
}com_arr[1000];
void swap(char *x,char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int permutation(char *a,int l,int r)
{
   int i;
   if(l==r)
   {
    strcpy(com_arr[k].num,a);
    k++;
   }
   if(1!=r)
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l),(a+i));
          permutation(a,l+1,r);
          swap((a+l),(a+i));
       }
   }
}
int main()
{
    char num1[20],num2[20];
    printf("enter the 2 numbers: ");
    scanf("%s%s",&num1,&num2);
    n = strlen(num1);
    permutation(num1,0,n-1);
    for(i=0;i<k;i++) //loop for rearrangement
    {
        for(j=i+1;j<k;j++)
        {
            if(strcmp(com_arr[i].num,com_arr[j].num)==1)
            {
                strcpy(empt,com_arr[i].num);
                strcpy(com_arr[i].num,"NULL");
                strcpy(com_arr[i].num,com_arr[j].num);
                strcpy(com_arr[j].num,"NULL");
                strcpy(com_arr[j].num,empt);
                strcpy(empt,"NULL");
            }
        }
    }
    for(i=0;i<k;i++)
    {
        strcpy(a,com_arr[i].num);
        for(j=0;j<n;j++)
        {
            if(a[j]<num2[j])
                break;
            else if(a[j]==num2[j])
                continue;
            else if(a[j]>num2[j])
            {
               flag=1;
               printf("%s\n",com_arr[i].num);
               break;
            }
        }
        strcpy(a,"NULL");
        if(flag==1)
            break;
        else if(i==(k-1))
            printf("-1");
    }
    return 0;
}
*/
//codevita prob 2
/*
//*****************************************INCOMPLETE*********************************************
#include<stdio.h>
#include<string.h>
char temp,empt;
int len,n,i;
struct number
{
    char num[9];
};
int replace(struct number rep_var)
{
    len= strlen(rep_var.num);
    //temp=rep_var.num[len-1];
    strcpy(temp,rep_var.num[len-1]);
    //strcpy(rep_var.num[len-1],"NULL");
    for(int m=len-1;m>0;i--)
    {
        //rep_var.num[m]=rep_var.num[m-1];
        strcpy(rep_var.num[m],"NULL");
        strcpy(rep_var.num[m],rep_var.num[m-1]);
    }
    //rep_var.num[0]=temp;
    strcpy(rep_var.num[0],"NULL");
    strcpy(rep_var.num[0],temp);
}
int main()
{
    printf("enter the number of elements you want to enter: ");
    scanf("%d",&n);
    struct number element[n];
    for(i=0;i<n;i++)
    {
        scanf("%s",&element[i].num);
        printf("\n");
        replace(element[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",element[i].num);
    }
}
struct input_details one[N];
    struct merit_list_details two[N];
    struct seat_matrix three[C];
    float sorting_marks[N];
    for(i=0;i<C;i++)
    {
        scanf("%d",&three[i].seat);
        three[i].clg= i+1;
        seat_num=seat_num+three[i].seat;
    }
    printf("enter the student details:-\n");
    for(i=0;i<N;i++)
    {
        scanf("%*c%*c%*c%*c%*c%*c%*c%*c%d%*c%f%*c%*c%*c%d%*c%*c%*c%d%*c%*c%*c%d",&one[i].id,&one[i].percentage,&one[i].choice1,&one[i].choice2,&one[i].choice3);
        sorting_marks[i]=one[i].percentage;
    }
    sort(one,N);
    //for(i=0;i<N;i++)
        //printf("Student-%d,%f,C-%d,C-%d,C-%d\n",one[i].id,one[i].percentage,one[i].choice1,one[i].choice2,one[i].choice3);
    for(i=0;i<seat_num;i++)
    {
        ptr1=one[i].choice1;
        ptr2=one[i].choice2;
        ptr3=one[i].choice3;
        if(three[ptr1-1].seat!=0)
        {
          two[i].id=one[i].id;
          two[i].placement=one[i].choice1;
          three[ptr1-1].seat--;
        }
        else if(three[ptr2-1].seat!=0)
        {
          two[i].id=one[i].id;
          two[i].placement=one[i].choice2;
          three[ptr2-1].seat--;
        }
        else if(three[ptr3-1].seat!=0)
        {
            two[i].id=one[i].id;
            two[i].placement=one[i].choice3;
            three[ptr3-1].seat--;
        }
    }
    for(i=0;i<seat_num;i++)
    {
        printf("Student-%d\tC-%d\n",two[i].id,two[i].placement);
    }struct input_details one[N];
    struct merit_list_details two[N];
    struct seat_matrix three[C];
    float sorting_marks[N];
    for(i=0;i<C;i++)
    {
        scanf("%d",&three[i].seat);
        three[i].clg= i+1;
        seat_num=seat_num+three[i].seat;
    }
    printf("enter the student details:-\n");
    for(i=0;i<N;i++)
    {
        scanf("%*c%*c%*c%*c%*c%*c%*c%*c%d%*c%f%*c%*c%*c%d%*c%*c%*c%d%*c%*c%*c%d",&one[i].id,&one[i].percentage,&one[i].choice1,&one[i].choice2,&one[i].choice3);
        sorting_marks[i]=one[i].percentage;
    }
    sort(one,N);
    //for(i=0;i<N;i++)
        //printf("Student-%d,%f,C-%d,C-%d,C-%d\n",one[i].id,one[i].percentage,one[i].choice1,one[i].choice2,one[i].choice3);
    for(i=0;i<seat_num;i++)
    {
        ptr1=one[i].choice1;
        ptr2=one[i].choice2;
        ptr3=one[i].choice3;
        if(three[ptr1-1].seat!=0)
        {
          two[i].id=one[i].id;
          two[i].placement=one[i].choice1;
          three[ptr1-1].seat--;
        }
        else if(three[ptr2-1].seat!=0)
        {
          two[i].id=one[i].id;
          two[i].placement=one[i].choice2;
          three[ptr2-1].seat--;
        }
        else if(three[ptr3-1].seat!=0)
        {
            two[i].id=one[i].id;
            two[i].placement=one[i].choice3;
            three[ptr3-1].seat--;
        }
    }
    for(i=0;i<seat_num;i++)
    {
        printf("Student-%d\tC-%d\n",two[i].id,two[i].placement);
    }
*/
//codevita prob A:-
/*
#include<stdio.h>
int n,i,j,ptr1,ptr2,ptr3;
struct input_details
{
    unsigned int id;
    float percentage;
    unsigned int choice1;
    unsigned int choice2;
    unsigned int choice3;
};
struct merit_list_details
{
    int id;
    int placement;
};
int sort(struct input_details four[],int n)
{
    int i,j;
    four[n];
    static int empt;
    static float emptf;
    for(i=0;i<n;i++) //loop for rearrangement
    {
        for(j=i+1;j<n;j++)
        {
            if(four[i].percentage<four[j].percentage)
            {
                empt=four[i].id;
                four[i].id=four[j].id;
                four[j].id=empt;
                emptf=four[i].percentage;
                four[i].percentage=four[j].percentage;
                four[j].percentage=emptf;
                empt=four[i].choice1;
                four[i].choice1=four[j].choice1;
                four[j].choice1=empt;
                empt=four[i].choice2;
                four[i].choice2=four[j].choice2;
                four[j].choice2=empt;
                empt=four[i].choice3;
                four[i].choice3=four[j].choice3;
                four[j].choice3=empt;
            }
        }
    }
}
struct seat_matrix
{
    int clg;
    int seat;
};
void main()
{
    int C,N,seat_num=0;
    scanf("%d %d",&C,&N);
    if(C>=3&&C<=25&&N>=1&&N<=10000)
    {
        struct input_details one[N];
        struct merit_list_details two[N];
        struct seat_matrix three[C];
        for(i=0;i<C;i++)
        {
            scanf("%d",&three[i].seat);
            three[i].clg= i+1;
            seat_num=seat_num+three[i].seat;
        }
        printf("enter the student details:-\n");
        for(i=0;i<N;i++)
        {
           scanf("%d%f%d%d%d",&one[i].id,&one[i].percentage,&one[i].choice1,&one[i].choice2,&one[i].choice3);
        }
        sort(one,N);
        for(i=0;i<seat_num;i++)
        {
            ptr1=one[i].choice1;
            ptr2=one[i].choice2;
            ptr3=one[i].choice3;
            if(three[ptr1-1].seat!=0)
            {
              two[i].id=one[i].id;
              two[i].placement=one[i].choice1;
              three[ptr1-1].seat--;
            }
            else if(three[ptr2-1].seat!=0)
            {
              two[i].id=one[i].id;
              two[i].placement=one[i].choice2;
              three[ptr2-1].seat--;
            }
            else if(three[ptr3-1].seat!=0)
            {
                two[i].id=one[i].id;
                two[i].placement=one[i].choice3;
                three[ptr3-1].seat--;
            }
        }
        for(i=0;i<seat_num&&i<N;i++)
        {
            printf("Student-%d\tC-%d\n",two[i].id,two[i].placement);
        }
    }
    else
        printf("enter valid constraints!!");
}
*/
//for printing triangles
/*
#include<stdio.h>
int main()
{
    int rows,i,j,k=1;
    printf("enter: ");
    scanf("%d",&rows);
    for(i=rows;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(j=0;j<k;j++)
        {
            printf("* ");
        }
        k++;
        printf("\n");
    }
}
*/
//printing diamond using recursive fuctions
/*
#include<stdio.h>
int upper_triangle(int n);
int lower_triangle(int n);
int spacer(int s);
int printer(int b);
int i=0,j=0;
int main()
{  
    int rows;
    printf("enter a number: ");
    scanf("%d",&rows);
    upper_triangle(rows);
    i=rows;
    lower_triangle(rows);
    return 0;
}
int upper_triangle(int n)
{
    if(n>0)
    {
        i++;
        spacer(n-1);
        printer(i);
        printf("\n");
        upper_triangle(n-1);
    }
}
int lower_triangle(int n) 
{
    if(n>0)
    {
        i--;
        j++;
        spacer(j);
        printer(i);
        printf("\n");
        lower_triangle(n-1);
    }
}
int spacer(int s)
{
    if(s>0)
    {
        printf(" ");
        spacer(s-1);
    }
}
int printer(int b)
{
    if(b>0)
    {
        printf("* ");
        printer(b-1);
    }
}
*/
//for printing triangles
/*
#include<stdio.h>
int main()
{
    int rows,i,j,k=1;
    printf("enter: ");
    scanf("%d",&rows);
    for(i=rows;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(j=0;j<k;j++)
        {
            printf("* ");
        }
        k++;
        printf("\n");
    }
}
*/
//printing hollow diamond 
/*
#include<stdio.h>
int main()
{
    int rows;
    int i,j,k=0,s;
    printf("enter a number: ");
    scanf("%d",&rows);
    int half;
    half=rows/2;
    for(i=rows;i>(rows/2);i--)
    {
        s=(2*k);
        for(j=0;j<half;j++)
            printf("**");
        for(j=0;j<s;j++)
            printf("  ");
        for(j=0;j<half;j++)
            printf("**");
        printf("\n");
        k++;
        half--;
    }
    half=1;
    k--;
    for(i=rows;i>(rows/2);i--)
    {
        s=(2*k);
        for(j=0;j<half;j++)
            printf("**");
        for(j=0;j<s;j++)
            printf(" ")9+
            
        for(j=0;j<s;j++)
            printf(" ");
        for(j=0;j<half;j++)
            printf("**");
        printf("\n");
        k--;
        half++;
    }
    return 0;
}
*/
//number pattern triangle
/*
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
            printf("%d\t",j+1);
        printf("\n");
    }
    return 0;
}
*/
//cyclic numbers(codevita)
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int i,j,s,m,k=0,min=999,num_len,flag=0;
char empt,c[10],d[10];
struct list
{
    char num[10];
};
int swap(char num[]);
int timer(char a[],char b[]);
int main()
{
    int n;
    scanf("%d",&n);
    struct list num[n];
    for(i=0;i<n;i++)
        scanf("%s",&num[i].num);
    num_len=strlen(num[0].num);
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<n;j++)
            timer(num[i].num,num[j].num);
        if(k<min)
            min=k;
        //printf("min for %d=%d\n",i,min);
    }
    printf("%d",min);
}
int swap(char num[])
{
    for(s=0;s<num_len-1;s++)
    {
        empt=num[s];
        num[s]=num[s+1];
        num[s+1]=empt;
    }
    //printf("%s\t",num);
}
int timer(char a[],char b[])
{
    strcpy(c,a);
    strcpy(d,b);
    flag=0;
    //printf("i=%d/j=%d/min=%d\n",i,j,min);
    for(m=0;m<num_len&&flag==0;m++)
    {
        //printf("values of k:%d\n",k);
        if(strcmp(c,d)==0)
        {
            flag=1;
            break;
        }
        else if(strcmp(c,d)!=0)
        {
            if(m!=num_len-1)
            {
                k++;
                swap(d);
            }
            else
            {
                printf("-1");
                exit(0);
            }
        }
        
    }
    strcpy(c,"NULL");
    strcpy(d,"NULL");
} 
*/
//swapping array without temp variable!!
/*
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the no of elements: ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter the elements of the first array: \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the elements of the second array: \n");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
        a[i]=a[i]+b[i];
        b[i]=a[i]-(2*b[i]);
        b[i]=(a[i]+b[i])/2;
        a[i]=a[i]-b[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t%d\n",a[i],b[i]);
    }
    return 0;
}
*/
//printing the second largest number without sorting
/*
#include<stdio.h>
int main()
{
    int n,max=0,nxt_max=0,i;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements:-\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
            max=a[i];
    }
    for(i=0;i<n;i++)
        if(a[i]<max&&a[i]>nxt_max)
            nxt_max=a[i];
    printf("largest num=%d\nsecond largest num=%d",max,nxt_max);
    return 0;
}
*/
//theft problem
/*
#include <stdio.h>
int comb(int arr[], int data[], int start, int end,int index, int r,int *add);
int k=0;
int list[1000][1000];
int print(int arr[], int n, int r,int *add)
{
	int data[r+1];
	comb(arr, data, 0, n-1, 0, r,add);
}
int comb(int arr[], int data[], int start, int end,int index, int r,int *add)
{
	if (index == r)
	{
        int breaker=0,j,q;
        for(j=0;j<r;j++)
        {
            for(q=j+1;q<r;q++){
                if(data[j]+1==data[q]||data[j]-1==data[q])
                {
                    breaker=1;
                    break;
                }
                if(breaker==1)
                    break;
            }
        }
        if(breaker==0)
        {
            for (j=0; j<r; j++)
                *((add+(k*1000))+j)= data[j];
            *((add+(k*1000))+r)= -1;
            k++;
        }
		return 0;
	}
	for (int i=start; i<=end && end-i+1 >= r-index; i++)
	{
		data[index] = arr[i];
		comb(arr, data, i+1, end, index+1, r,add);
	}
}
int main()
{
    int n,a,b,temp,max=0,point;
    printf("enter the number of houses: ");
    scanf("%d",&n);
    printf("enter the values in each house:-\n");
    int value[n];
    int arr[n];
    for( a=0;a<n;a++)
    {
        scanf("%d",&value[a]);
        arr[a]=a;
    }
	int r = (n/2)+(n%2);
    int *ptr= &list[0][0];
	print(arr, n, r,ptr);
    print(arr,n,r-1,ptr);
    
    printf("all possible ways of theft\n");
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(list[i][j]!=-1)  
                printf("%d\t",list[i][j]);
        }
        printf("\n");
    }
    
    for(a=0;a<k;a++)
    {
        temp=0;
        for(b=0;b<((n/2)+(n%2));b++)
        {
            if(list[a][b]!=-1)
                temp+=value[list[a][b]];
            else
                break;
        }
        if(temp>max)
        {
            max=temp;
            point= a;
        }
    }
    printf("max=%d\nplan of robbery:-\n",max);
    for(a=0;a<r;a++)
    {
        if(list[point][a]!=-1)
            printf("%d\t",list[point][a]);
    }
}
*/



