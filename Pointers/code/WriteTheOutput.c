#include <stdio.h>

int main()
{
    int x = 5;
    int *p;
    int *t;
    int **pp;
    int ***ppp;
    p = &x; // p = address of x
    t = p; // t = address of x
    pp = &p; // pp = address of p double pointer or pointer to pointer
    ppp = &pp; // ppp = address of pp triple pointer or pointer to pointer to pointer

    // cout<<&x <<" "<<p <<" " <<&p<<" "<<pp<<" "<<endl;
    printf("%p\n %p \n%p \n%p\n\n", &x, p, &p, pp);
    // answer will be adders of &x = address of x, p = addres of x from pointer
    // &p = addres of pointer p and pp = address of p
    
    *t = 3;
    // cout << " " << *p << " " << *t << " " << *pp << " " << **pp << " " << *ppp << " " << **ppp << " " << ***ppp << endl;
    printf("\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n", *p, *t, *pp, **pp, *ppp, **ppp, ***ppp);
    // answer will be 3, 3, address of p, 3, address of pp, address of p, 3
}