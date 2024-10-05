
// WAP to count vowels in a string...

#include<stdio.h>
#include<string.h>
void f1();

int main(){
    f2();
    // char str[] = "My sirg education services private limited";
    // int i,count=0;
    // for(i=0;str[i];i++){
    //     if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    //         count++;
    //     else if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
    //         count++;
    // }
    // printf("The Vowels in the string '%s' is %d",str,count);
    return 0;
}

void f1(){
    char str[40],v[]="aeiouAEIOU";
    printf("Enter String: ");
    fgets(str,40,stdin);
    str[strlen(str)-1]='\0';
    int i,j,count;
    for(i=0,count=0;str[i];i++)
        for(j=0;v[j];j++)
            if(str[i]==v[j]){
                count++;
                break;
            }

    printf("count is %d",count);
}