#include <stdio.h>
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
        
        printf("\n1. Nhap phan tu cho mang.\n");
        
        printf("\n2. Hien thi mang da nhap.\n");
        
        printf("\n3. Them moi gia tri vao mang.\n");
        
        printf("\n4. Cap nhat phan tu trong mang.\n");
        
        printf("\n5. Xoa phan tu trong mang.\n");
        
        printf("\n6. Thoat.\n");
        
        printf("\n+++++++++++++++++++++++++++\n");

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
            case 3:
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
            case 4:
                int editIndex, updateValue;
                
                printf("\nMoi ban nhap vi tri phan tu can sua: ");
                
                scanf(" %d", &editIndex);
                
                if(editIndex < 0 ||editIndex >= SIZE )
                {
                    printf("\nVi tri ban muon sua phan tu ko hop le! \n");
                    
                    break;
                }
                
                printf("\nMoi ban nhap gia tri cho phan tu moi: (gia tri cu la: %d) ", array[editIndex]);
                
                scanf(" %d", &updateValue);
                
                array[editIndex] = updateValue;
                
                printf("\nCap nhat gia tri cho phan tu thanh cong!");
                
                break;
            case 5:
                int deleteIndex;

                printf("\nMoi ban nhap vi tri phan tu can xoa: ");
                
                scanf("%d", &deleteIndex);
                
                if(editIndex < 0 ||editIndex >= SIZE )
                {
                    printf("\nVi tri ban muon xoa phan tu khong hop le!");
                    
                    break;
                }
                
                for (int i = deleteIndex; i < SIZE - 1 ; ++i) 
                {
                    array[i] = array[i + 1];
                }
                
                SIZE--;
                
                printf("\nXoa phan tu thanh cong!");
                
                break;
            case 6:
                break;
            default:
                printf("\nLua chon ko hop le, vui long nhap lai!");
                
                break;
        }
        
        if(choices == 6)
        {
            printf("\nThoat chuong trinh!\n\n");
            
            break;
        }
    }
    
    return 0;
}
