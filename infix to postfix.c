//infix to postfix
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int top=0;
int k=0;
int priority(char x)
{
    if(x=='^')
        return 3;
    else if(x=='/'||x=='*')
        return 2;
    else if(x=='+'||x=='-')
        return 1;
    else
        return -1;
}
void infix_to_postfix(char exp[])
{
    char stack[10];
    char output_exp[10];
    int len= strlen(exp);
    //printf("%d\n%s\n",len,exp);
    int i=0;
    int num_v;
    while(i<len)
    {
        num_v= (int)exp[i];
        //printf("%d,%c--",num_v,exp[i]);
        if(num_v>=48&&num_v<=57||num_v>=65&&num_v<=90||num_v>=97&&num_v<=122)
        {
            //printf("im a operand\n");
            output_exp[k]=exp[i];
            k++;
        }
        else if(num_v==40)
        {
          stack[top]=exp[i];
          top++;
        }
        else if(num_v==41)
        {
            int j=top-1;
            while(stack[j]!='(')
            {
                output_exp[k]=stack[j];
                stack[j]='\0';
                k++;
                j--;
            }
            stack[j]='\0';
        }
        else if(exp[i]=='*'||exp[i]=='+'||exp[i]=='-'||exp[i]=='/'||exp[i]=='^')
        {
            //printf("im a operator\n");
            if(stack[top-1]!='(')
            {
                if(priority(exp[i])>priority(stack[top-1]))
                {
                    stack[top]=exp[i];
                    top++;
                }
                else
                {
                    output_exp[k]=stack[top-1];
                    stack[top-1]=exp[i];
                    k++;
                }
            }
            else
            {
                stack[top]=exp[i];
                top++;
            }
        }
        else
        {
            printf("enter a valid expression!!");
            exit(-1);
        }
        i++;
    }
    while(top!=0)
    {
       output_exp[k]=stack[top-1];
       k++;
       top--;
    }
    printf("postfix exp: ");
    for(i=0;i<k;i++)
        printf("%c",output_exp[i]);
}

int main()
{
    char exp[100];
    printf("enter a exp: ");
    scanf("%s",&exp);
    infix_to_postfix(exp);
}
