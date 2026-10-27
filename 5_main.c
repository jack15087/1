//202610211332
//张裕晟
#include<stdio.h>
int main()
    {
        float a=0;
        float b=0;
        char op;
        scanf("%f %c %f",&a,&op,&b);
        if(op=='/'&&b==0)
        {
            printf("„1¤7„1¤7„1¤7Ô8ò9„1¤7„1¤7„1¤7„1¤7„1¤7„1¤7„1¤70Ë2 0");
        }
        else if(op=='+')
        {
            float c=a+b;
            printf("%.2f",c);
        }
        else if(op=='-')
        {
            float c=a-b;
            printf("%.2f",c);
        }
        else if(op=='*')
        {
            float c=a*b;
            printf("%.2f",c);
        }
        else if(op=='/')
        {
            float c=a/b;
            printf("%.2f",c);
        }
        else
        {
            printf("„1¤7„1¤7„1¤7Ô8ò8„1¤70õ1„1¤70ö5„1¤7„1¤7„1¤7„1¤7„1¤7„1¤7");
        }
    }
