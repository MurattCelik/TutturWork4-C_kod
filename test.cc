#include "stdio.h"

int topla(int x,int y)
{
 return x+y;
}

int main(){
int x,y;
printf("x sayısını giriniz--->>");
scanf("%d",&x);
printf("y sayısını giriniz--->>");
scanf("%d",&y);

int t=topla(x,y);

printf("x ve y toplamları--->> %d",t);

}




