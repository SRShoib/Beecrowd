#include <stdio.h>
int main(){
    int n, r1, r2;
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        scanf("%d%d", &r1, &r2);
        printf("%d\n", r1 + r2);
    }

return 0;
}
