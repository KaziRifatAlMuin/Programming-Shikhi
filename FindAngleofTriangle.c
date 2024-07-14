#include <stdio.h>
#include <math.h>
#define PI acos(-1.0)

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c); // power : pow(a,b) = a^b, root : sqrt(n) = root(n)
    double p, q, r;
    p = (acos(((a * a + b * b) - c * c) / (2.0 * a * b))) * (180 / PI);
    q = (acos(((b * b + c * c) - a * a) / (2.0 * b * c))) * (180 / PI);
    r = (acos(((c * c + a * a) - b * b) / (2.0 * c * a))) * (180 / PI);
    printf("Angles are : %lf, %lf and %lf\n", p, q, r);

    return 0;
}