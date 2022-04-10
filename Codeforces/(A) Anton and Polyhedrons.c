#include<stdio.h>
#include<string.h>
int main()
{
    int t,sum=0,tetra,cube,octa,dode,icos;
    char p[15];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%s",p);
        tetra=strcmp(p,"Tetrahedron");
        cube=strcmp(p,"Cube");
        octa=strcmp(p,"Octahedron");
        dode=strcmp(p,"Dodecahedron");
        icos=strcmp(p,"Icosahedron");
        if(tetra==0)
            sum=sum+4;
        else if(cube==0)
            sum=sum+6;
        else if(octa==0)
            sum=sum+8;
        else if(dode==0)
            sum=sum+12;
        else
            sum=sum+20;
    }
    printf("%d\n",sum);
}
