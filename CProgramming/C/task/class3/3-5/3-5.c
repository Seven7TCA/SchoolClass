#include <stdio.h>
int main()
{
    int x,y,z;
    FILE *fp1;
    fp1=fopen("3-5-1.txt","r");
    fscanf(fp1,"%d,%d,%d",&x,&y,&z);
    fclose(fp1);
    FILE *fp2;
    fp2=fopen("3-5-2.txt","w");
    if(x>y&&x>z&&y>z){
        fprintf(fp2,"%d,%d,%d",z,y,x);
    }
    if(x>y&&x>z&&z>y){
        fprintf(fp2,"%d,%d,%d",y,z,x);
    }
    if(y>x&&y>z&&x>z){
        fprintf(fp2,"%d,%d,%d",z,x,y);
    }
    if(y>x&&y>z&&z>x){
        fprintf(fp2,"%d,%d,%d",x,z,y);
    }
    if(z>x&&z>y&&x>y){
        fprintf(fp2,"%d,%d,%d",y,x,z);
    }
    if(z>x&&z>y&&y>x){
        fprintf(fp2,"%d,%d,%d",x,y,z);
    }
    return 0;
}