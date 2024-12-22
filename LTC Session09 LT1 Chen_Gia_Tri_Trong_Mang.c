#include <stdio.h>

#define MAX 100

int main () 
{
    int arr[MAX];   
    
    int n;             
    
    int value, position;

    printf("\nNhap so luong phan tu cho mang: ");
    
    scanf("%d", &n);
    
    if (n < 1 || n > MAX) 
    {
        printf("\nSo luong phan tu khong hop le!\n");
        
        return 1;
    }

    printf("\nNhap cac phan tu cho mang:\n");
    
    for (int i = 0; i < n; i++) 
    {
        printf("\nPhan tu thu %d: ", i + 1);
        
        scanf("%d", &arr[i]);
    }

    printf("\nNhap gia tri ban muon chen: ");
    
    scanf("%d", &value);
    
    printf("\nNhap vi tri ma ban muon chen (1 đến %d): ", n + 1);
    
    scanf("%d", &position);

    if (position < 1 || position > n + 1) 
    {
        printf("\nVi tri khong hop le!\n");
        
        return 1;
    }

    for (int i = n; i >= position; i--) 
     
    {
        arr[i] = arr[i - 1]; 
    }
    
    arr[position - 1] = value; 
    
    n++;

    printf("\nMang sau khi da chen gia tri: ");
    
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n\n");

    return 0;
}
