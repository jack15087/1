//202610211332
//��ԣ��
#include<stdio.h>
int main()
    {
        float a=0;
        float b=0;
        char op;
        scanf("%f %c %f",&a,&op,&b);
        if(op=='/'&&b==0)
        {
            printf("���󣺳�������Ϊ 0");
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
            printf("���󣺲�֧�ֵ������");
        }
    }
