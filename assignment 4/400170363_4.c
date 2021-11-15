#include <stdio.h>

double ito(double value, char unit);
double cto(double value, char unit);
double mto(double value, char unit);
double fto(double value, char unit);

int main() {
   int n;
   scanf("%d\n", &n);
   for(int i = 0; i < n; ++i){
        double current_num;
        char orig_unit;
        char new_unit;

        scanf("%lf\n", &current_num);
        orig_unit = getchar();

        if(orig_unit == 'c'){ // cm
            getchar();
        } else if (orig_unit == 'f') { // foot
            getchar();
            getchar();
            getchar();
        } else if (orig_unit == 'i') { // inch
            getchar();
            getchar();
            getchar();
        }
        // otherwise it's just "m"

        getchar(); // the space after the first unit
        double final_num;
        new_unit = getchar();
        if(new_unit == 'c'){ // cm
            getchar();
        } else if (new_unit == 'f') { // foot
            getchar();
            getchar();
            getchar();
        } else if (new_unit == 'i') { // inch
            getchar();
            getchar();
            getchar();
        }
        switch(orig_unit){
            case 'i':
                ito(current_num, new_unit);
                break;
            case 'm':
                mto(current_num, new_unit);
                break;
            case 'f':
                fto(current_num, new_unit);
                break;
            case 'c':
                cto(current_num, new_unit);
                break;
        }
   }
}

double cto(double value, char unit){
    if (unit=='i')
        printf("%.6lf\n", value*0.39);
    else if (unit=='f')
        printf("%.6lf\n", value*0.03);
    else if (unit=='c')
        printf("%.6lf\n", value);
    else printf("%.6lf\n", value*0.01);
}

double mto(double value, char unit){
    if (unit=='f')
        printf("%.6lf\n", value*3.28);
    else if (unit=='i')
        printf("%.6lf\n", value*39.37);
    else if (unit=='c')
        printf("%.6lf\n", value*100.0);
    else printf("%.6lf\n", value);
}

double ito(double value, char unit){
    if (unit=='m')
        printf("%.6lf\n", value*0.02);
    else if (unit=='f')
        printf("%.6lf\n", value*0.08);
    else if (unit=='c')
        printf("%.6lf\n", value*2.54);
    else printf("%.6lf\n", value);
}

double fto(double value, char unit){
    if (unit=='m')
            printf("%.6lf\n", value*0.3);
    else if (unit=='i')
            printf("%.6lf\n", value*12.0);
    else if (unit=='c')
            printf("%.6lf\n", value*30.48);
    else printf("%.6lf\n", value);
}