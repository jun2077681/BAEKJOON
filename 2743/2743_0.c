#include <stdio.h>
#include <string.h>

int main(void)
    {
    char sen[101];
    for(int i=0;i<101;i++)
        {
        sen[i]=NULL;
    }
    scanf("%s",sen);
    printf("%d",strlen(sen));
}
