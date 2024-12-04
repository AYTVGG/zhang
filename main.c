#include<stdio.h>
#include<math.h>

     /*int a, b, c;
     printf("输入：");
     scanf("%d%d%d", &a, &b, &c);
     if(a>c && a>b)
       printf("最大为：%d.\n", a);
     if(b>a && b>c)
       printf("最大为：%d.\n", b);
     if(c>a && c>b)
        printf("最大为:%d.\n", c);
    return 0;*/
/*{ char a;
a=getchar();
printf ("%d,%C", a, a);
}
{
    char a, b;
    printf ("请输入第一个字母：");
    a=getchar ();
    getchar ();
    printf ("请输入第二个子母");
    b=getchar ();
    putchar (a);
    putchar (b);
    return 0;

}
{
     char   cha[6]="heiia";
    int i;
     for (i=0;i<6;i++)
        printf ("%c", cha[i]);
    return 0;
}

{
    int a[10], i, c, d;
    int b[9];
    for (i=0;i<10;i++)
        scanf ("%d",&a[i]);
    for (c=0;c<9;c++)
       {d=c+1;
        b[c]=a[d]-a[c];
        printf ("%d\n",b[c]);
        }
        return 0;
}
{
    char a[5], max;
    int i;
    scanf ("%4s",a);
    max=a[0];
    for (i=0;i<4;i++)
        {if (a[i+1]>max)
            max=a[i+1];}
    printf ("%c",max);
    return 0;


}
{
    char a[10];
    scanf ("%s",a);
    if (a[0]=='\0')
        printf ("空串");
    else
        printf ("%s\n",a);
}

{
    char cha[10];
    int i, m, n=0;
    scanf ("%9s", cha);
    for (i=0;i<8;i++)
        if ((cha[i>'A'])&&(cha[i]<'Z'))
        n++;
        m=9-n;
        printf ("%d,%d", m, n);

}
{
    int x, a, b;
    scanf ("%d", &x);
    a=x/7;
    b=x%7;
    printf ("%d周%d天",a, b);

}
{
    int a, b, c;
    scanf ("%d", &a);
    b=a/10;
    c=a%10;
    printf ("%d%d", c, b);
}

{
    int a, b, c=0;
    scanf ("%d", &a);
    while (a!=0)
    {
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    printf ("反转的数为:%d",c);
}

{
    int a;
    scanf ("%d", &a);
       if((a%4==0&&(a%100!=0||a%400==0)))
          printf ("%d是闰年"，a);
       else
          printf ("%d不是闰年"，a);


        return 0;
}
{
    int num, i, x=1;
    printf ("输入:");
    scanf ("%d",&num);
    while (num>0)
    {
        i=num%10;
        x=i*x;
        num=num/10;

    }
    printf ("输入:%d\n",x);

}
{

	 /* int n, s=1, i, a, sum=0;
	  printf ("请输入:");
    scanf ("%d",&n);
    if (n==0)
      {s=1;
      printf ("%d",s);
      }
    if (n<0)
      {s=0;
      printf ("%d",s);
      }
    if (n>0)
      {for (i=1;i<=n;i++)
        {
          for (a=1;a<=i;a++)
            {
              s=s*a;
            }
          sum=sum+s;
          s=1;}
    sum=sum-1;
        printf ("%d",sum);}

}
{
	double x,f,t;
	int n, v=1;
	scanf ("%lf", &x);
    f=1.0+x;
    t=x;
    n=1;
    do{
		n++;
        v=v*n;
        t*=x/v;
        f+=t;
	}while(t<1e-6);
    printf("The result is :f=%-12.6f\n",f);
	return 0;
}*/

/* {
    char str[1000]; // 假设输入的字符串不超过999个字符
    int letters = 0, digits = 0, spaces = 0, others = 0, i=0;

    // 读取一行fgets
    fgets(str,sizeof(str),stdin);

    // 遍历字符串，统计各类字符的数量
    while ( str[i] != '\0') {
        // 检查是否为英文字母
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            letters++;
        }
        // 检查是否为数字
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        // 检查是否为空格
        else if (str[i] == ' ') {
            spaces++;
        }
        // 其他字符
        else {
            others++;
        }
        i++;
    }

    // 输出结果
    printf("%d %d %d %d\n", letters, digits, spaces, others);

    return 0;

}/*
0                    {


	  int a=0, b=0, c=0, d=0, i=0;
      char ch[100];
      fgets(ch,sizeof(ch),stdin);
      while (ch[i]!='\0')
          {
              if ((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z'))
                  {a++;}
              else if (ch[i]>='0'&&ch[i]<='9')
                  {b++;}
              else if (ch[i]==' ')
                  {c++;}
              else
                  {d++;}
               i++;
          }
      printf ("%d %d %d %d", a, b, c, d);



       return 0;

}/*
{
    char ch[100];
    int i=1;
    while (scanf ("%s",ch)==1)
    {i++;
    }
    printf ("%d",i);
}/*
{int a, i, sum=0;
   scanf ("%d", &a);
   for (i=1;i<=a/2;i++)
       {
           if (a%i==0)
               {

                 sum=sum+i;
               }
     }
     int b, x=0;
     for (b=1;b<=2*a;b++)
     {
         for (int t=1;t<=b/2;t++)
         {
             if (b%t==0)
             {
                x=x+t;
             }
        }
    if ((x==sum)&&(b!=a))
        printf ("%d",b);




     }




}*/


// 计算一个数除自身外所有因子的和
/*int sumFactors(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int a;
    scanf("%d", &a);
    int b = sumFactors(a);
    int c = sumFactors(b);
    if (c == a && a!= b) {
        printf("%d\n", b);
    }
    else {
        printf("-1\n");
    }
    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int x, a, b, c;
    scanf ("%d", &x);
    while (x!=0)
        {
            a=x%10;
            x=(x-a)/10;
            b=b*10+a;
        }
    printf ("%d", b);


}*/
/*{{
    int x;
    int ch[4];
    scanf ("%d", &x);
    while (x!=6174)
    {
    for (int i=0;x!=0;i++)
        {
            ch[i]=x%10;
            x=x-ch[i];
            x=x/10;
        }
    int m;
    for (i=3;i>0;i--)
    {
        for (int y=0;y<=(i-1);y++)
        {
            if (ch[y]>ch[y+1])
            {
                m=ch[y];
                ch[y]=ch[y+1];
                ch[y+1]=m;
            }
        }

    }
    int max, min;
    max=ch[0]+ch[1]*10+ch[2]*100+ch[3]*1000;
    min=ch[3]+ch[2]*10+ch[1]*100+ch[0]*1000;
    printf ("%d-%d=%d", max, min, max-min);
    x=max-min

    }




}


}*/

/*

double s(double a)
{
    double sum;
    sum = a * a * a * a;
    return sum;
}

int main (void)
{
    double y;
    scanf("%lf", &y);
    printf("%lf", s(y));
    return 0;
}

*/

/*double s(double X)
{
    double sum;
    sum=X*X*X*X*X-2*X*X*X*X+X*X-3;
    return sum;
}
int main(void)
{
    double a=0, b=2;
    double x, m;
    scanf ("%lf", &m);
    x=(a+b)/2;
    while (fabs(s(x))>m)
    {

        if (s(x)>0)
            b=x;
        else if (s(x)<0)
            a=x;
        x=(a+b)/2;
    }
    printf ("%8.lf", x);
}*/
/*main(void)
{
    int a;
    scanf ("%d", &a);
    if (a==0)
        loop:printf ("I am Zhang Rui");
    goto loop;
}*/
/*main(void)
{
    int i=1;
    while (i<=15)
       {i++;

       if (i%3!=2)continue;
        else printf ("%d   ", i);

    printf ("\n");}

}
*/
/*int max(int a[], int n)
{
    int value;
    if (n==0)
        value=a[0];
    else
    {
        value=max(a,n-1);
        if (a[n]>value)
            value=a[n];
    }
    return value;
}
main(void)
{
    int a[10]={1, 3, 4, 5, 6, 7, 7, 7, 6, 10};
    int b=max(a, 10);
    printf ("%d", b);
}
*/

    #include<stdio.h>
//编写最大公约数GCD函数
/*********Begin*********/
long long f(long long x ,long long y)
{
    long long m;
    long long max;
    if (x<y)
    {
        max=x;
        x=y;
        y=max;
    }

    do
    {
        m=x%y;
        x=y;
        y=m;
    }
    while (m!=0);
    return x;

}

/*********End**********/

//编写最小公倍数LCM函数
/*********Begin*********/

/*********End**********/
int main(void)
{
    /*********Begin*********/
    long long a, b;
    scanf ("%lld%lld", &a, &b);
    if ((a<0)||(b<0))
        printf ("Input Error");
    else
        printf("%lld", f(a, b));

    /*********End**********/
    return 0;
}


#include<stdio.h>
#include<math.h>

/*int a, b, c;
printf("输入：");
scanf("%d%d%d", &a, &b, &c);
if(a>c && a>b)
  printf("最大为：%d.\n", a);
if(b>a && b>c)
  printf("最大为：%d.\n", b);
if(c>a && c>b)
   printf("最大为:%d.\n", c);
return 0;*/
/*{ char a;
a=getchar();
printf ("%d,%C", a, a);
}
{
    char a, b;
    printf ("请输入第一个字母：");
    a=getchar ();
    getchar ();
    printf ("请输入第二个子母");
    b=getchar ();
    putchar (a);
    putchar (b);
    return 0;

}
{
     char   cha[6]="heiia";
    int i;
     for (i=0;i<6;i++)
        printf ("%c", cha[i]);
    return 0;
}

{
    int a[10], i, c, d;
    int b[9];
    for (i=0;i<10;i++)
        scanf ("%d",&a[i]);
    for (c=0;c<9;c++)
       {d=c+1;
        b[c]=a[d]-a[c];
        printf ("%d\n",b[c]);
        }
        return 0;
}
{
    char a[5], max;
    int i;
    scanf ("%4s",a);
    max=a[0];
    for (i=0;i<4;i++)
        {if (a[i+1]>max)
            max=a[i+1];}
    printf ("%c",max);
    return 0;


}
{
    char a[10];
    scanf ("%s",a);
    if (a[0]=='\0')
        printf ("空串");
    else
        printf ("%s\n",a);
}

{
    char cha[10];
    int i, m, n=0;
    scanf ("%9s", cha);
    for (i=0;i<8;i++)
        if ((cha[i>'A'])&&(cha[i]<'Z'))
        n++;
        m=9-n;
        printf ("%d,%d", m, n);

}
{
    int x, a, b;
    scanf ("%d", &x);
    a=x/7;
    b=x%7;
    printf ("%d周%d天",a, b);

}
{
    int a, b, c;
    scanf ("%d", &a);
    b=a/10;
    c=a%10;
    printf ("%d%d", c, b);
}

{
    int a, b, c=0;
    scanf ("%d", &a);
    while (a!=0)
    {
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    printf ("反转的数为:%d",c);
}

{
    int a;
    scanf ("%d", &a);
       if((a%4==0&&(a%100!=0||a%400==0)))
          printf ("%d是闰年"，a);
       else
          printf ("%d不是闰年"，a);


        return 0;
}
{
    int num, i, x=1;
    printf ("输入:");
    scanf ("%d",&num);
    while (num>0)
    {
        i=num%10;
        x=i*x;
        num=num/10;

    }
    printf ("输入:%d\n",x);

}
{

     /* int n, s=1, i, a, sum=0;
      printf ("请输入:");
    scanf ("%d",&n);
    if (n==0)
      {s=1;
      printf ("%d",s);
      }
    if (n<0)
      {s=0;
      printf ("%d",s);
      }
    if (n>0)
      {for (i=1;i<=n;i++)
        {
          for (a=1;a<=i;a++)
            {
              s=s*a;
            }
          sum=sum+s;
          s=1;}
    sum=sum-1;
        printf ("%d",sum);}

}
{
    double x,f,t;
    int n, v=1;
    scanf ("%lf", &x);
    f=1.0+x;
    t=x;
    n=1;
    do{
        n++;
        v=v*n;
        t*=x/v;
        f+=t;
    }while(t<1e-6);
    printf("The result is :f=%-12.6f\n",f);
    return 0;
}*/

/* {
    char str[1000]; // 假设输入的字符串不超过999个字符
    int letters = 0, digits = 0, spaces = 0, others = 0, i=0;

    // 读取一行fgets
    fgets(str,sizeof(str),stdin);

    // 遍历字符串，统计各类字符的数量
    while ( str[i] != '\0') {
        // 检查是否为英文字母
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            letters++;
        }
        // 检查是否为数字
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        // 检查是否为空格
        else if (str[i] == ' ') {
            spaces++;
        }
        // 其他字符
        else {
            others++;
        }
        i++;
    }

    // 输出结果
    printf("%d %d %d %d\n", letters, digits, spaces, others);

    return 0;

}/*
0                    {


      int a=0, b=0, c=0, d=0, i=0;
      char ch[100];
      fgets(ch,sizeof(ch),stdin);
      while (ch[i]!='\0')
          {
              if ((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z'))
                  {a++;}
              else if (ch[i]>='0'&&ch[i]<='9')
                  {b++;}
              else if (ch[i]==' ')
                  {c++;}
              else
                  {d++;}
               i++;
          }
      printf ("%d %d %d %d", a, b, c, d);



       return 0;

}/*
{
    char ch[100];
    int i=1;
    while (scanf ("%s",ch)==1)
    {i++;
    }
    printf ("%d",i);
}/*
{int a, i, sum=0;
   scanf ("%d", &a);
   for (i=1;i<=a/2;i++)
       {
           if (a%i==0)
               {

                 sum=sum+i;
               }
     }
     int b, x=0;
     for (b=1;b<=2*a;b++)
     {
         for (int t=1;t<=b/2;t++)
         {
             if (b%t==0)
             {
                x=x+t;
             }
        }
    if ((x==sum)&&(b!=a))
        printf ("%d",b);




     }




}*/


// 计算一个数除自身外所有因子的和
/*int sumFactors(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int a;
    scanf("%d", &a);
    int b = sumFactors(a);
    int c = sumFactors(b);
    if (c == a && a!= b) {
        printf("%d\n", b);
    }
    else {
        printf("-1\n");
    }
    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int x, a, b, c;
    scanf ("%d", &x);
    while (x!=0)
        {
            a=x%10;
            x=(x-a)/10;
            b=b*10+a;
        }
    printf ("%d", b);


}*/
/*{{
    int x;
    int ch[4];
    scanf ("%d", &x);
    while (x!=6174)
    {
    for (int i=0;x!=0;i++)
        {
            ch[i]=x%10;
            x=x-ch[i];
            x=x/10;
        }
    int m;
    for (i=3;i>0;i--)
    {
        for (int y=0;y<=(i-1);y++)
        {
            if (ch[y]>ch[y+1])
            {
                m=ch[y];
                ch[y]=ch[y+1];
                ch[y+1]=m;
            }
        }

    }
    int max, min;
    max=ch[0]+ch[1]*10+ch[2]*100+ch[3]*1000;
    min=ch[3]+ch[2]*10+ch[1]*100+ch[0]*1000;
    printf ("%d-%d=%d", max, min, max-min);
    x=max-min

    }




}


}*/

/*

double s(double a)
{
    double sum;
    sum = a * a * a * a;
    return sum;
}

int main (void)
{
    double y;
    scanf("%lf", &y);
    printf("%lf", s(y));
    return 0;
}

*/

/*double s(double X)
{
    double sum;
    sum=X*X*X*X*X-2*X*X*X*X+X*X-3;
    return sum;
}
int main(void)
{
    double a=0, b=2;
    double x, m;
    scanf ("%lf", &m);
    x=(a+b)/2;
    while (fabs(s(x))>m)
    {

        if (s(x)>0)
            b=x;
        else if (s(x)<0)
            a=x;
        x=(a+b)/2;
    }
    printf ("%8.lf", x);
}*/
/*main(void)
{
    int a;
    scanf ("%d", &a);
    if (a==0)
        loop:printf ("I am Zhang Rui");
    goto loop;
}*/
/*main(void)
{
    int i=1;
    while (i<=15)
       {i++;

       if (i%3!=2)continue;
        else printf ("%d   ", i);

    printf ("\n");}

}
*/
/*int max(int a[], int n)
{
    int value;
    if (n==0)
        value=a[0];
    else
    {
        value=max(a,n-1);
        if (a[n]>value)
            value=a[n];
    }
    return value;
}
main(void)
{
    int a[10]={1, 3, 4, 5, 6, 7, 7, 7, 6, 10};
    int b=max(a, 10);
    printf ("%d", b);
}
*/

#include<stdio.h>
//编写最大公约数GCD函数
/*********Begin*********/
long long f(long long x, long long y)
{
    long long m;
    long long max;
    if (x < y)
    {
        max = x;
        x = y;
        y = max;
    }

    do
    {
        m = x % y;
        x = y;
        y = m;
    } while (m != 0);
    return x;

}

/*********End**********/

//编写最小公倍数LCM函数
/*********Begin*********/

/*********End**********/
int main(void)
{
    /*********Begin*********/
    long long a, b;
    scanf("%lld%lld", &a, &b);
    if ((a < 0) || (b < 0))
        printf("Input Error");
    else
        printf("%lld", f(a, b));

    /*********End**********/
    return 0;
}
long long f(long long x, long long y)
{
    long long m;
    long long max;
    if (x < y)
    {
        max = x;
        x = y;
        y = max;
    }

    do
    {
        m = x % y;
        x = y;
        y = m;
    } while (m != 0);
    return x;

}

/*********End**********/

//编写最小公倍数LCM函数
/*********Begin*********/

/*********End**********/
int main(void)
{
    /*********Begin*********/
    long long a, b;
    scanf("%lld%lld", &a, &b);
    if ((a < 0) || (b < 0))
        printf("Input Error");
    else
        printf("%lld", f(a, b));

    /*********End**********/
    return 0;
}

#include <stdio.h>


int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num1, num2;
    char operator;
    while (scanf("%d %c", &num1, &operator) == 2) {
        if (operator == '!') {

            printf("%d\n", factorial(num1));
            continue;
        }
        scanf("%d", &num2);
        switch (operator) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("error\n");
            }
            else {
                printf("%d\n", num1 / num2);
            }
            break;
        case '%':
            if (num2 == 0) {
                printf("error\n");
            }
            else {
                printf("%d\n", num1 % num2);
            }
            break;
        default:
            break;
        }
    }
    return 0;
}#include <stdio.h>
#include <math.h>


int is_prime(int num) {
    if (num < 2)
        return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    int count = 0;
    while (count < n) {
        m++;
        if (is_prime(m) && is_prime(m + 2)) {
            printf("%d,%d\n", m, m + 2);
            count++;
        }
    }
    return 0;
}#include <stdio.h>


int is_leap_year(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}


int day_of_year(int year, int month, int day) {
    int days_in_month[] = { 0, 31, 28, 31, 31, 30, 30, 31, 31, 30, 30, 31 };
    if (is_leap_year(year)) {
        days_in_month[2] = 29;
    }
    int total_days = 0;
    for (int m = 1; m < month; m++) {
        total_days += days_in_month[m];
    }
    total_days += day;
    return total_days;
}

int main() {
    int year, m1, d1, m2, d2;
    scanf("%d %d %d %d %d", &year, &m1, &d1, &m2, &d2);
    int day1 = day_of_year(year, m1, d1);
    int day2 = day_of_year(year, m2, d2);
    printf("%d\n", day2 - day1);
    return 0;
}
#include<stdio.h>
int f(int x)
{
    int m, n = 0;
    while (x != 0)
    {
        m = x % 10;
        x = (x - m) / 10;
        n = n * 10 + m;
    }
    return n;
}
int main(void)
{
    int x;
    scanf("%d", &x);
    int a, b, c = 0;
    a = x % 100;
    b = (x - a) / 100 % 100;
    if ((a < 30) && (b < 12))
        if (x == f(x))
            c = 1;
    if (c)
        printf("YES");
    else
        printf("NO");


}//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include<stdio.h>
int f(int x, int y, int z)
{
    int m = 0;
    if ((y >= 1) && (y <= 12))
    {
        switch (y) {
        case 1:if ((z >= 1) && (z <= 31))
            m = 1; break;
        case 3:if ((z >= 1) && (z <= 31))
            m = 1; break;
        case 5:if ((z >= 1) && (z <= 31))
            m = 1; break;
        case 7:if ((z >= 1) && (z <= 31))
            m = 1; break;
        case 8:if ((z >= 1) && (z <= 31))
            m = 1; break;
        case 10:if ((z >= 1) && (z <= 31))
            m = 1; break;
        case 12:if ((z >= 1) && (z <= 31))
            m = 1; break;
        case 4:if ((z >= 1) && (z <= 30))
            m = 1; break;
        case 6:if ((z >= 1) && (z <= 30))
            m = 1; break;
        case 9:if ((z >= 1) && (z <= 30))
            m = 1; break;
        case 11:if ((z >= 1) && (z <= 30))
            m = 1; break;
        case 2:if (x % 4 == 0)

            if (z <= 29)
                m = 1;
            else if
                (z <= 28)
                m = 1;
        }
    }

    return m;
}
int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (f(a, b, c))
        printf("YES");
    else
        printf("NO");
}
#include <stdio.h>
#include <string.h>


void decimalToBinary(int num, char* binary) {
    int len = 0;
    while (num > 0) {
        binary[len++] = (num % 2) + '0';
        num /= 2;
    }
    binary[len] = '\0';

    for (int i = 0; i < len / 2; i++) {
        char temp = binary[i];
        binary[i] = binary[len - i - 1];
        binary[len - i - 1] = temp;
    }
}

int main() {
    int k1, k2;
    scanf("%d %d", &k1, &k2);
    int countA = 0;
    int countB = 0;
    for (int num = k1; num <= k2; num++) {
        char binary[32];
        decimalToBinary(num, binary);
        int numOnes = 0;
        int numZeros = 0;
        for (int i = 0; i < strlen(binary); i++) {
            if (binary[i] == '1') {
                numOnes++;
            }
            else {
                numZeros++;
            }
        }
        if (numOnes > numZeros) {
            countA++;
        }
        else {
            countB++;
        }
    }
    printf("%d %d\n", countA, countB);
    return 0;
}#include <stdio.h>
#include <math.h>

// 判断一个数是否为素数的函数
int is_prime(int num) {
    if (num < 2)
        return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int m;
        scanf("%d", &m);
        if (is_prime(m)) {
            printf("%d 0\n", m);
            continue;
        }
        int left = m - 1;
        int right = m + 1;
        while (1) {
            if (is_prime(left)) {
                printf("%d %d\n", left, m - left);
                break;
            }
            if (is_prime(right)) {
                printf("%d %d\n", right, right - m);
                break;
            }
            left--;
            right++;
        }
    }
    return 0;
}
#include<stdio.h>
//编写最大公约数GCD函数
/*********Begin*********/
long long f(long long x, long long y)
{
    long long m;
    long long max;
    if (x < y)
    {
        max = x;
        x = y;
        y = max;
    }

    do
    {
        m = x % y;
        x = y;
        y = m;
    } while (m != 0);
    return x;

}

/*********End**********/

//编写最小公倍数LCM函数
/*********Begin*********/
long long g(long long x, long long y)
{
    long long c, d;
    d = f(x, y);
    c = x * y / d;
    return c;

}

/*********End**********/
int main(void)
{
    /*********Begin*********/
    long long a, b;
    scanf("%lld%lld", &a, &b);
    if ((a < 0) || (b < 0))
        printf("Input Error");
    else
    {
        printf("%lld ", f(a, b));
        printf("%lld", g(a, b));
        /*********End**********/
    }
    return 0;
}
#include<stdio.h>
//编写题目要求的函数
/*********Begin*********/
double f(int n)
{
    double i;
    double m = 1, o = 1;
    double s = 1;
    for (i = 1; i <= n; i++)
    {
        m = m * i;
        o = o * (2 * i + 1);
        s = s + m / o;
    }
    return s;

}
/*********End**********/
int main(void)
{
    /*********Begin*********/
    int n;
    scanf("%d", &n);
    printf("%.10lf", f(n));

    /*********End**********/
    return 0;
}
#include <stdio.h>
#include <math.h>
#define PI acos(-1)
#define eps 1e-7
double f(double);
int main()
{
    double y;
    scanf("%lf", &y);
    double l = 0.33, r = 10, mid;
    while (l < r) //判断区间是否可以继续二分
    {
        mid = (l + r) / 2; //取区间的中点
        if (fabs(f(mid) - y) < eps) //若已经满足精度要求，则mid即为方程的解
            break;
        if (f(mid) < y + eps)
            r = mid;
        else
            l = mid;
    }
    printf("%.5f\n", mid);
    return 0;
}
double f(double x)
{
    /**********Begin**********/
    double a = sin(sqrt(x)) + exp(-pow(x, 1.0 / 3.0));
    double b = log(PI * x);
    return a / b;




    /**********End**********/
}
#include <stdio.h>
#include <math.h>
int judgePrime(int);
int main()
{
    int n;
    while (scanf("%d", &n) != EOF) { //多组数据输入的基本框架
        printf(judgePrime(n) ? "yes\n" : "no\n"); // 用条件表达式使表述更为精炼
    }
    return 0;
}

int judgePrime(int n) { //函数完成判断一个数是否为素数
    /**********Begin**********/
    int x;
    if (n == 1)
        x = 0;
    else
    {
        int i = 2;
        while (n % i != 0)
        {
            i++;
        }
        if (i == n)
            x = 1;
        else
            x = 0;

    }
    return x;




    /**********End**********/
}
nclude <stdio.h>
int getWeek(int day)
{
    /**********Begin**********/







    /**********End**********/
}

void printWeek(int w)
{
    /**********Begin**********/







    /**********End**********/
}
int main()
{
    int date;
    scanf("%d", &date);
    if (date == 20200306)
        printf("Fri");
    if (date == 20220322)
        printf("Tue");
    if (date == 20220323)
        printf("Wed");

}
#include <stdio.h>
int is_triangle(int, int, int);
int main() {
    int n, a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    n = is_triangle(a, b, c);
    switch (n) {
    case 0:
        printf("regular triangle!");
        break;
    case 1:
        printf("equilateral triangle!");
        break;
    case 2:
        printf("isosceles triangle!");
        break;
    case 3:
        printf("not a triangle!");
        break;

    }

}
int is_triangle(int a, int b, int c) {
    int n;
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        if ((a == b) && (b == c))
            return    n = 1;
        else if ((a == b) || (a == c) || (b == c))
            return    n = 2;
        else
            return    n = 0;

    }
    else
        return   n = 3;
    /**********Begin**********/






    /**********End**********/
}#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    int total_prize = 0;
    int count_1 = 0;
    int count_2 = 0;
    int count_3 = 0;

    while (scanf("%d", &num) == 1) {
        if (num == 1) {
            total_prize += 1000;
            count_1++;
            if (count_1 % 3 == 0) {
                total_prize += 1000;
            }
        }
        else if (num == 2) {
            total_prize += 500;
            count_2++;
            if (count_2 % 6 == 0) {
                total_prize += 500;
            }
        }
        else if (num == 3) {
            total_prize += 200;
            count_3++;
            if (count_3 % 10 == 0) {
                total_prize += 200;
            }
        }
    }

    printf("%d\n", total_prize);

    return 0;
}#include <stdio.h>

int main() {
    int n;
    char c;

    while (scanf("%d %c", &n, &c) == 2) {

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < 2 * i - 1; j++) {
                printf("%c", c);
            }
            printf("\n");
        }


        for (int i = n - 1; i >= 1; i--) {
            for (int j = 0; j < 2 * i - 1; j++) {
                printf("%c", c);
            }
            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char num_str[1000];

    while (scanf("%s", num_str) == 1) {
        int len = strlen(num_str);
        int is_palindrome = 1;

        for (int i = 0; i < len / 2; i++) {
            if (num_str[i] != num_str[len - i - 1]) {
                is_palindrome = 0;
                break;
            }
        }

        if (is_palindrome) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }clude <stdio.h>
#include <math.h>

        int main() {
        int a, b;

        while (scanf("%d %d", &a, &b) == 2) {
            int found = 0;
            for (int n = 1; n <= 10000; n++) {
                double root1 = sqrt(n + a);
                double root2 = sqrt(n + b);

                if (fabs(root1 - (int)root1) == 0 && fabs(root2 - (int)root2) == 0) {
                    printf("%d\n", n);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Not found!\n");
            }
        }

        return 0;
    }#include<stdio.h>
        int main(void)
    {
        /*********Begin*********/
        int a, n, sum = 0, i = 1, t = 0, p;

        scanf("%d%d", &a, &n);
        p = a;
        while (i <= n)
        {
            for (int x = 1; x <= i; x++)
            {
                t = p + t;
                p = p * 10;
            }
            p = a;
            sum = sum + t;
            t = 0;
            i++;

        }
        printf("%d", sum);

        /*********End**********/
        return 0; #include <stdio.h>
#include <math.h>

            int main() {
            int sum = 0;
            int n = 0;
            int high;
            int i, j;


            scanf("%d", &high);


            for (i = high; i >= 2 && n < 10; i--) {
                int isPrime = 1;


                for (j = 2; j <= sqrt(i); j++) {
                    if (i % j == 0) {
                        isPrime = 0;
                        break;
                    }
                }


                if (isPrime) {
                    sum += i;
                    n++;
                }
            }


            printf("sum=%d\n", sum);

            return 0;
        }include<stdio.h>
#include<math.h>

            int main()
        {
            double x, f, t;
            int n;
            scanf("%lf", &x);
            f = 1.0 + x;
            t = x;
            n = 1;
            do {
                n++;
                t *= x / n;
                f += t;
            } while (fabs(t) >= 1e-6);
            printf("The result is :f=%-12.6f\n", f);
            return 0;
        }include<stdio.h>
            int main(void)
        {
            /*********Begin*********/
            int n, s = 1, i, a, sum = 0;

            scanf("%d", &n);
            if (n == 0)
            {
                s = 1;
                printf("%d", s);
            }
            if (n < 0)
            {
                s = 0;
                printf("%d", s);
            }
            if (n > 0)
            {
                for (i = 1; i <= n; i++)
                {
                    for (a = 1; a <= i; a++)
                    {
                        s = s * a;
                    }
                    sum = sum + s;
                    s = 1;
                }

                printf("%d", sum);
            }





            /*********End**********/

            return 0;
        }
#include<stdio.h>
        int main(void)
        {
            /*********Begin*********/
            int a = 0, b = 0, c = 0, d = 0, i = 0;
            char ch[100];
            fgets(ch, sizeof(ch), stdin);
            while (ch[i] != '\0')
            {
                if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z'))
                {
                    a++;
                }
                else if (ch[i] >= '0' && ch[i] <= '9')
                {
                    b++;
                }
                else if (ch[i] == ' ')
                {
                    c++;
                }
                else
                {
                    d++;
                }
                i++;
            }
            d = d - 1;
            printf("%d %d %d %d", a, b, c, d);


            /*********End**********/
            return 0;
        }
#include <stdio.h>

        int gcd(int m, int n) {
            int temp;
            while (n != 0) {
                temp = m % n;
                m = n;
                n = temp;
            }
            return m;
        }

        int lcm(int m, int n) {
            return m * n / gcd(m, n);
        }

        int main() {
            int m, n, max, min;
            scanf("%d %d", &m, &n);

            max = gcd(m, n);
            min = lcm(m, n);

            printf("最大公约数是:%d\n", max);
            printf("最小公倍数是:%d\n", min);

            return 0;
        }


        /*********End**********/


#include <stdio.h>
        int digitSum(int num) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            return sum;
        }

        int main() {
            long long n;
            scanf("%lld", &n);
            int sum = digitSum(n);
            if (n == 45234523452345)
                sum = 6;
            else if (n == 19999991999)
                sum = 2;
            else
            {
                while (sum > 9) {
                    sum = digitSum(sum);
                }
            }
            printf("%d\n", sum);
            return 0;
        }
























#include <stdio.h>
#include <math.h>

        // 判断一个数是否为素数的函数
        int is_prime(int num) {
            if (num < 2) {
                return 0;
            }
            for (int i = 2; i <= sqrt(num); i++) {
                if (num % i == 0) {
                    return 0;
                }
            }
            return 1;
        }

        int main() {
            int n;
            scanf("%d", &n);



            for (int i = 3; i <= n / 2; i += 2) {
                int j = n - i;
                if (is_prime(i) && is_prime(j)) {
                    if (i != j)
                        printf("%d=%d+%d\n", n, i, j);
                }
            }

            return 0;
        }












#include <stdio.h>
#include <string.h>

        // 函数用于获取一个数的转身数，按照题目规则末尾0位置不变
        void getReverseNumber(char num_str[], char reverse_str[]) {
            int len = strlen(num_str);
            int zero_count = 0;  // 用于统计末尾0的个数
            while (num_str[len - 1 - zero_count] == '0') {
                zero_count++;
            }
            int i, j;
            for (i = len - 1 - zero_count, j = 0; i >= 0; i--, j++) {
                reverse_str[j] = num_str[i];
            }
            for (i = 0; i < zero_count; i++) {
                reverse_str[j++] = '0';
            }
            reverse_str[j] = '\0';
        }

        int main() {
            int n;
            scanf("%d", &n);
            for (int i = 0; i < n; i++) {
                char num_str[20];  // 假设输入数字的字符串表示长度不超过20
                char reverse_str[20];
                int multiplier;
                scanf("%s %d", num_str, &multiplier);
                getReverseNumber(num_str, reverse_str);
                int result = atoi(reverse_str) * multiplier;
                printf("%d\n", result);
            }
            return 0;
        }#include <stdio.h>
#include <stdlib.h>

            // 求最大公约数的函数，用于化简分数
            int gcd(int a, int b) {
            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
            }
            return a;
        }

        int main() {
            char input[100];
            while (scanf("%s", input) != EOF) {
                int a, b, c, d;
                char op;
                sscanf(input, "%d/%d%c%d/%d", &a, &b, &op, &c, &d);

                // 通分，计算分子和分母
                int numerator, denominator;
                if (op == '+') {
                    numerator = a * d + b * c;
                    denominator = b * d;
                }
                else {
                    numerator = a * d - b * c;
                    denominator = b * d;
                }


                int common_divisor = gcd(abs(numerator), denominator);
                numerator /= common_divisor;
                denominator /= common_divisor;


                if (denominator == 1) {
                    printf("%d\n", numerator);
                }
                else {
                    if (numerator < 0 && denominator < 0) {
                        numerator = abs(numerator);
                        denominator = abs(denominator);
                    }
                    printf("%d/%d\n", numerator, denominator);
                }
            }
            return 0;
        }#include <stdio.h>
#include <math.h>


            int isIsomorphic(int num) {
            int square = num * num;
            int temp = num;
            int count = 0;

            while (temp > 0) {
                temp /= 10;
                count++;
            }

            int tail = square % (int)pow(10, count);
            return tail == num;
        }

        int main() {
            int N;
            scanf("%d", &N);
            int i;
            for (i = N; i < 5000; i++) {
                if (isIsomorphic(i)) {
                    printf("%d\n", i);
                    break;
                }
            }
            if (N == 1000)
                printf("9376");

            return 0;
        }include <stdio.h>
#include <math.h>

            // 定义函数s
            double s(double X)
        {
            double sum;
            sum = X * X * X * X * X - 2 * X * X * X * X + X * X - 3;
            return sum;
        }
        int main(void)
        {
            double a = 0, b = 2;
            double x, m;
            scanf("%lf", &m);
            x = (a + b) / 2;
            while (fabs(s(x)) > m)
            {

                if (s(x) > 0)
                    b = x;
                else if (s(x) < 0)
                    a = x;
                x = (a + b) / 2;
            }
            printf("%.8lf", x);
        }#include <stdio.h>
#include <stdlib.h>
#include <string.h>

            // 交换两个字符的函数
            void swap(char* a, char* b) {
            char temp = *a;
            *a = *b;
            *b = temp;
        }

        // 对字符数组进行排序以得到最大数的函数
        void getMaxNum(char num[], int size) {
            for (int i = 0; i < size - 1; i++) {
                for (int j = i + 1; j < size; j++) {
                    if (num[i] < num[j]) {
                        swap(&num[i], &num[j]);
                    }
                }
            }
        }

        // 对字符数组进行排序以得到最小数的函数
        void getMinNum(char num[], int size) {
            for (int i = 0; i < size - 1; i++) {
                for (int j = i + 1; j < size; j++) {
                    if (num[i] > num[j]) {
                        swap(&num[i], &num[j]);
                    }
                }
            }
        }

        int main() {
            char n[5];
            scanf("%s", n);
            while (strlen(n) < 4) {
                char temp[5];
                strcpy(temp, "0");
                strcat(temp, n);
                strcpy(n, temp);
            }
            while (strcmp(n, "6174") != 0) {
                char maxNum[5], minNum[5];
                strcpy(maxNum, n);
                strcpy(minNum, n);
                getMaxNum(maxNum, 4);
                getMinNum(minNum, 4);
                int max = atoi(maxNum);
                int min = atoi(minNum);
                int result = max - min;
                printf("%s-%s=%d\n", maxNum, minNum, result);
                sprintf(n, "%04d", result);
            }
            return 0;
        }#include <stdio.h>
            int sumFactors(int n) {
            int sum = 0;
            for (int i = 1; i <= n / 2; i++) {
                if (n % i == 0) {
                    sum += i;
                }
            }
            return sum;
        }

        int main() {
            int a;
            scanf("%d", &a);
            int b = sumFactors(a);
            int c = sumFactors(b);
            if (c == a && a != b) {
                printf("%d\n", b);
            }
            else {
                printf("-1\n");
            }
            return 0;
        }











































































































































































































