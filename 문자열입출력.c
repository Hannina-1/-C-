#include <stdio.h>
int main(void){
    char str1[256],str2[256];  //scanf_s 문자열을 입력하면 크기를 명시 str의 크기를 말했기 떄문에'_s'를 붙이는 게 맞음. 
    printf("첫 번째 문자열을 입력해주세요:");
    scanf("%s",str1,sizeof(str1));
    printf("두 번째 문자열을 입력해주세요:");
    scanf("%s",str2,sizeof(str2));
    printf("첫 번째 문자열:%s\n",str1);
    printf("두 번째 문자열:%s\n",str2);
    return 0;
}