#include <stdio.h>
#include <math.h>
#define PI 3.1415926535897932384626433832795028841971
int main() {
int x, y;
int long z;
double a, b, c;
char sw, fu, se, ar;
scanf("\n%lf",&a);
while(1){
    scanf("\n%c", &sw);
    if (sw == 'q') {
        break;
    } else if (sw == '!') {
        if(a <= 20){
            x = a;
            z = 1;
            printf("%dを階乗します\n",x);
            for(y = 1;y <= x;y++) {
                z = z * y;
                printf("\x1b[32m%ld\n\x1b[39m",z);
            }
        } else {
        printf("この値は階乗できません\n");
        }
    } else if (sw == 'f') {
        while(1){
            scanf("\n%c", &fu);
            switch (fu) {
            case '+':
            scanf("\n%c", &se);
            if (se == 's') {
                scanf("%lf",&b);
                c = sin(b*PI/180.0);
                a += c;
                printf("\x1b[32m=%lf\n\x1b[39m",a);
                break;
            } else if (se == 'c') {
                scanf("%lf",&b);
                c = cos(b*PI/180.0);
                a += c;
                printf("\x1b[32m=%lf\n\x1b[39m",a);
                break;
            } else if (se == 't'){
                scanf("%lf",&b);
                c = tan(b*PI/180.0);
                a += c;
                printf("\x1b[32m=%lf\n\x1b[39m",a);
                break;                
            } else if (se == 'a') {
                scanf("\n%c", &ar);
                switch(ar) {
                    case 's':
                    scanf("%lf",&b);
                    c = asin(b) * (180.0 / PI);
                    a += c;
                    printf("\x1b[32m=%lf\n\x1b[39m",a);
                    break;
                    case 'c':
                    scanf("%lf",&b);
                    c = acos(b) * (180.0 / PI);
                    a += c;
                    printf("\x1b[32m=%lf\n\x1b[39m",a);
                    break;
                    case 't':
                    scanf("%lf",&b);
                    c = atan(b) * (180.0 / PI);
                    a += c;
                    printf("\x1b[32m=%lf\n\x1b[39m",a);
                    break;
                }
            }
            case '-':
            scanf("\n%c", &se);
            if (se == 's') {
                scanf("%lf",&b);
                c = sin(b*PI/180.0);
                a -= c;
                printf("\x1b[32m=%lf\n\x1b[39m",a);
                break;
            } else if (se == 'c') {
            scanf("%lf",&b);
                c = cos(b*PI/180.0);
                a -= c;
                printf("\x1b[32m=%lf\n\x1b[39m",a);
                break;
            } else if (se == 't'){
                scanf("%lf",&b);
                c = tan(b*PI/180.0);
                a -= c;
                printf("\x1b[32m=%lf\n\x1b[39m",a);
                break;                
            } else if (se == 'a') {
                scanf("\n%c", &ar);
                switch(ar) {
                    case 's':
                    scanf("%lf",&b);
                    c = asin(b) * (180.0 / PI);
                    a -= c;
                    printf("\x1b[32m=%lf\n\x1b[39m",a);
                    break;
                    case 'c':
                    scanf("%lf",&b);
                    c = acos(b) * (180.0 / PI);
                    a -= c;
                    printf("\x1b[32m=%lf\n\x1b[39m",a);
                    break;
                    case 't':
                    scanf("%lf",&b);
                    c = atan(b) * (180.0 / PI);
                    a -= c;
                    printf("\x1b[32m=%lf\n\x1b[39m",a);
                    break;
                }
            }
            case '*':
            scanf("\n%c", &se);
            if (se == 's') {
                scanf("%lf",&b);
                c = sin(b*PI/180.0);
                a *= c;
                printf("\x1b[32m=%lf\n\x1b[39m",a);
                break;
            } else if (se == 'c') {
                scanf("%lf",&b);
                c = cos(b*PI/180.0);
                a *= c;
                printf("\x1b[32m=%lf\n\x1b[39m",a);
                break;
            } else if (se == 't'){
                scanf("%lf",&b);
                c = tan(b*PI/180.0);
                a *= c;
                printf("\x1b[32m=%lf\n\x1b[39m",a);
                break;                
            } else if (se == 'a') {
                scanf("\n%c", &ar);
                switch(ar) {
                    case 's':
                    scanf("%lf",&b);
                    c = asin(b) * (180.0 / PI);
                    a *= c;
                    printf("\x1b[32m=%lf\n\x1b[39m",a);
                    break;
                    case 'c':
                    scanf("%lf",&b);
                    c = acos(b) * (180.0 / PI);
                    a *= c;
                    printf("\x1b[32m=%lf\n\x1b[39m",a);
                    break;
                    case 't':
                    scanf("%lf",&b);
                    c = atan(b) * (180.0 / PI);
                    a *= c;
                    printf("\x1b[32m=%lf\n\x1b[39m",a);
                    break;
                }
            }
            case '/':
            scanf("\n%c", &se);
            if (se == 's') {
                scanf("%lf",&b);
                c = sin(b*PI/180.0);
                a /= c;
                printf("\x1b[32m=%lf\n\x1b[39m",a);
                break;
            } else if (se == 'c') {
                scanf("%lf",&b);
                c = cos(b*PI/180.0);
                a /= c;
                printf("\x1b[32m=%lf\n\x1b[39m",a);
                break;
            } else if (se == 't') {
                scanf("%lf",&b);
                c = tan(b*PI/180.0);
                a /= c;
                printf("\x1b[32m=%lf\n\x1b[39m",a);
                break;                
            } else if (se == 'a') {
                scanf("\n%c", &ar);
                switch(ar) {
                    case 's':
                    scanf("%lf",&b);
                    c = asin(b) * (180.0 / PI);
                    a /= c;
                    printf("\x1b[32m=%lf\n\x1b[39m",a);
                    break;
                    case 'c':
                    scanf("%lf",&b);
                    c = acos(b) * (180.0 / PI);
                    a /= c;
                    printf("\x1b[32m=%lf\n\x1b[39m",a);
                    break;
                    case 't':
                    scanf("%lf",&b);
                    c = atan(b) * (180.0 / PI);
                    a /= c;
                    printf("\x1b[32m=%lf\n\x1b[39m",a);
                    break;
                }
            }
            case 'a':
            goto OUT;
        }
    }
    }
    OUT:
            switch (sw) {
                case '+':
                scanf("%lf",&b);
                a += b;
                printf("\x1b[32m=%lf\n\x1b[39m",a);
                break;
                case '-':
                scanf("%lf",&b);
                a -= b;
                printf("\x1b[32m=%lf\n\x1b[39m",a);
                break;
                case '*':
                scanf("%lf",&b);
                a *= b;
                printf("\x1b[32m=%lf\n\x1b[39m",a);
                break;
                case '/':
                scanf("%lf",&b);
                a /= b;
                printf("\x1b[32m=%lf\n\x1b[39m",a);
                break;
            }
    }
return 0;
}
