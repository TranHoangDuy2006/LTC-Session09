#include <stdio.h>
#include <math.h>
const int MAX_SIZE = 100;

int SIZE = 0; 

int main (void) 
{
    int array[MAX_SIZE];

    int choices;

    while(1)
    {
        printf("\n");
        
        printf("\n++++++++++ MENU: ++++++++++\n");
        
        printf("\n1. Nhap so luong phan tu cho mang va gia tri cac phan tu trong mang.\n");
        
        printf("\n2. In ra cac phan tu trong mang.\n");
        
        printf("\n3. In ra cac phan tu la so chan va tinh tong.\n");
        
        printf("\n4. In ra phan tu lon nhat, nho nhat trong mang.\n");
        
        printf("\n5. In ra cac gia tri la so nguyen to va tinh tong.\n");
        
        printf("\n6. Nhap phan tu va in ra so luong cua phan tu do.\n");

        printf("\n7. Them phan tu vao trong mang.");
        
        printf("\n\n+++++++++++++++++++++++++++\n");

        printf("\nMoi ban nhap chuc nang: ");
        
        scanf("%d", &choices);

        switch (choices) 
        {
            case 1:
                int n;
                
                printf("\nNhap so luong phan tu cho mang: ");
                
                scanf("%d", &n);
                
                if(n <=0 || n> MAX_SIZE)
                {
                    printf("\nSo phan tu ban nhap vao khong hop le, vui long nhap tu 1 - %d! \n", MAX_SIZE);
                    
                    break;
                }
                
                for (int i = 0; i < n; ++i) 
                {
                    printf("\nNhap phan tu thu [ %d ]: ", i);
                    
                    scanf("%d", array + i);
                }
                
                SIZE = n;
                
                printf("\nBan da nhap thanh cong %d phan tu vao trong mang!", n);
                
                break;
            case 2:
                if(SIZE == 0)
                {
                    printf("\nMang hien tai chua co phan tu nao!\n");
                } 
                    else
                    {
                        printf("\nDanh sach cac phan tu trong mang la:\n\n");
                        
                        for (int i = 0; i < SIZE; ++i) 
                        {
                            printf("%d ",array[i]);
                        }
                    }
                
                printf("\n");
                
                break;
            case 7:
                int addIndex, newValue;
                
                printf("\nMoi ban nhap gia tri can them: ");
                
                scanf("%d", &newValue);
                
                printf("\nMoi ban nhap vi tri can them: ");
                
                scanf("%d",&addIndex);
                
                if(addIndex < 0)
                {
                    addIndex = 0;
                }   
                    else if(addIndex > SIZE)
                    {
                        addIndex = SIZE;
                }

                for(int i = SIZE; i > addIndex; i--) 
                {
                    array[i] = array[i - 1];
                }
                
                array[addIndex] = newValue ;
                
                SIZE++;
                
                printf("\nThem phan tu thanh cong!\n");
                
                break;
            case 3:
                int sum = 0;

                printf("\nCac so chan trong mang la: \n\n");

                for(int i = 0; i < SIZE; i++)
                    {
                        if(array[i] % 2 == 0)
                            {
                                printf("%d ", array[i]);

                                sum += array[i];
                            }
                    }

                printf("\n\nTong cua cac so chan la: %d", sum);

                break;
            case 4:
                int minValue = array[0];

                int maxValue = array[0];

                for(int a = 0; a < SIZE; a++)
                    {
                        if(array[a] > maxValue)
                            {
                                maxValue = array[a];
                            }

                        if(array[a] < minValue)
                            {
                                minValue = array[a];
                            }                        
                    }

                printf("\nGia tri nho nhat trong mang la: %d", minValue);

                printf("\n\nGia tri lon nhat trong mang la: %d", maxValue);
                
                break;
            case 5:
                printf("\nCac so nguyen to trong mang la: \n\n");

                int sum1 = 0;

                for (int b = 0; b < SIZE; b++) 
                {
                    int num = array[b];
                    
                    int isPrime = 1; 
                        
                        if (num < 2) 
                            {
                                isPrime = 0; 
                            } 
                                else 
                                    {
                                        for (int x = 2; x <= sqrt(num); x++) 
                                            {
                                                if (num % x == 0) 
                                                    {
                                                        isPrime = 0;
                                                        break;
                                                    }
                                            }
                                    }

                        if (isPrime) 
                            {
                                printf("%d ", num);

                                sum1 += num; 
                            }
                }

                printf("\n\nTong cua cac so nguyen to la: %d", sum1);

                break;
            case 6:
                int count = 0;

                int request;

                printf("\nNhap phan tu trong mang ma ban muon thong ke: ");

                scanf("%d", &request);

                for(int d = 0; d < SIZE; d++)
                    {
                        if(array[d] == request)
                            {
                                count++;
                            }
                    }

                printf("\nSo luong phan tu %d xuat hien trong mang la: %d", request, count);

                break;
            default:
                printf("\nLua chon ko hop le, vui long nhap lai!");
                
                break;
            case 8:
                break;
        }
        
        if(choices == 8)
        {
            printf("\nDa thoat chuong trinh!\n\n");
            
            break;
        }
    }
    
    return 0;
}
