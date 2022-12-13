#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
    float m;
    m=(y-x)/(y+x)0;
    return m; 
}
int main()
{
    float x0,y0,k1,k2,k3,k4,m,y,x,h,xn;
    printf("Enter value of x0");
    scanf("%f",&x0);
    printf("Enter value of y0");
    scanf("%f",&y0);
    printf("Enter value of xn");
    scanf("%f",&xn);
    printf("Enter value of h");
    scanf("%f",&h);
    x=x0;
    y=y0;
    printf("\n\nX\t\tY\n");
    while(x<xn)
    {
        k1=f(x0,y0);
        k2=f((x0+h/2.0),(y0+k1*h/2.0));
        k3=f((x0+h/2.0),(y0+k2*h/2.0));
        k4=f((x0+h),(y0+k3*h));
        m=((k1+2*k2+2*k3+k4)/6);
        y=y+m*h;
        x=x+h;
        printf("%f\t%f\n",x,y);
    }
}
