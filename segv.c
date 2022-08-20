#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = NULL;
    puts("before invalid access");
    // 存在しないアドレスにアクセスするのでページフォールトが起きてSEGVシグナルが発行されて死ぬ
    *p = 0;
    puts("after invalid access");
    exit(EXIT_FAILURE);
}
