#include <stdio.h>

#define MAX 100

int main () 
{
    int arr[MAX]; 
    
    int n;             
    
    int position, newValue; 

    printf("\nNhap so luong phan tu cua mang: ");
    
    scanf("%d", &n);

    if (n < 1 || n > MAX) 
    {
        printf("\nSo phan tu khong hop le!\n");
        
        return 1;
    }

    printf("\nNhap cac phan tu cua mang:\n");
    
    for (int i = 0; i < n; i++) 
    {
        printf("\nPhan tu thu %d: ", i + 1);
        
        scanf("%d", &arr[i]);
    }

    printf("\nNhap vi tri phan tu can thay the (1 đến %d): ", n);
    
    scanf("%d", &position);

    if (position < 1 || position > n) 
    {
        printf("\nVi tri khong hop le!\n");
        
        return 1;
    }

    printf("\nNhap gia tri moi: ");
    
    scanf("%d", &newValue);

    arr[position - 1] = newValue;

    printf("\nMang sau khi da sua:\n");
    
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n\n");

    return 0;
}
