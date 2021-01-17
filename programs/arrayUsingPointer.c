#include <stdio.h>
void main() {
    int n,i;

    printf("Enter size");
    scanf("%d",&n);

    int arr[n];
    int *ptr = arr;

    printf("Enter elements: ");
    for (i = 0; i < n; i++){
        scanf("%d",&ptr[i]);
    }
    printf("Elements Are: \n");
    for (i = 0; i < n; i++){
        printf("%d ",ptr[i]);

    }
}
