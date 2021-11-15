#include <stdio.h>
#include <math.h>

double voldemort(double x, double y, double r, double w, double z){
    int status = 0;
    double dsquared = (x-w)*(x-w) + (y-z)*(y-z);
    double d = sqrt(dsquared);

    if (r-d > 0.000001)
        status = 1;
    else status = 0;
    printf("Voldemort %s feel the presence of Philosopher's Stone in distance %.2lf", status ? "can" : "can't", d);
    return d;
}

int main(){
    double x, y, r, w, z;
    scanf("%lf%lf%lf%lf%lf", &x, &y, &r, &w, &z);
    voldemort(x, y, r, w, z);
    return 0;
}