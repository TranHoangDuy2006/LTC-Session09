#include <stdio.h>

#define MAX 100

int main ()
{
    int arr[MAX];

    int x;

    int pos;

    printf("\nNhap so phan tu cua mang: ");

    scanf("%d", &x);

    if(x < 1 || x > MAX)
        {
            printf("\nSo phan tu khong hop le, vui long nhap lai!");

            return 1;
        }

    printf("\nNhap cac phan tu cho mang:\n ");

    for(int i = 0; i < x; i++)
        {
            printf("\nNhap phan tu thu %d: ", i + 1);

            scanf("%d", &arr[i]);
        }

    printf("\nMang sau khi ban nhap la: ");
    
    for(int j = 0; j < x; j++)
        {
            printf("%d ", arr[j]);
        }

    printf("\n\nNhap vi tri cua phan tu trong mang ma ban muon xoa (tu 1 den %d): ", x);

    scanf("%d", &pos);

    if(pos < 1 || pos > x)
        {
            printf("\nVi tri khong hop le, vui long nhap lai!");

            return 1;
        }

    for(int i = pos - 1; i < x - 1; i++)
        {
            arr[i] == arr[i + 1];
        }

    x--;

    printf("\nMang sau khi xoa phan tu la: ");

    for(int i = 0; i < x; i++)
        {
            printf("%d ", arr[i]);
        }

    printf("\n\n");
    
    return 0;

}