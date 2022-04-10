#include<stdio.h>
#include<string.h>

int main()
{
	int i=0;
    char sen[10000],sen2[10000];
   gets(sen);
while(sen[i] != '\0')
{
sen2[0]=toupper(sen[0]);
i++;
    sen2[i]=sen[i];
	    //sen2[i]=toupper(sen[i]);

}
puts(sen2);
}
