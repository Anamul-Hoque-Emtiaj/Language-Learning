#include<stdio.h>
int main()
{
    int y,a,b,c;
    scanf("%d",&y);
    a=y%400;
    b=y%100;
    c=y%4;
    switch(a){
    case 0:
        printf("Leap Year");
        break;

     default:

            switch(b){
        case 0:
            printf("Not");
        break;

        default:

                switch(c){
            case 0:
            printf("Leap Year");
        break;

            default:

            printf("not");
        break;
                }
            break; }break;}

return 0;
}



