#include <stdio.h>

int main() {
    //QUESTION 1
//    int i,n,arr[50];
//    printf("Please enter the number of elements: ");
//    scanf("%d",&n);
//
//    printf("\n Kindly enter your elements now please: \n");
//    for (i=0;i<n;i++){
//        scanf("%d",&arr[i]);
//    }
//    printf("Your array Elements are : \n");
//    for (i=0;i<n;i++){
//        printf("\t%d",arr[i]);
//    }

    //QUESTION 2(Find mean of n numbers using array
//    int i, n;
//    float arr[50];
//    float sum = 0;
//    float mean;
//    printf("Please enter the number of elements: ");
//    scanf("%d", &n);
//    printf("Please enter your array elements now: \n");
//    for (i = 0; i < n; i++) {
//        scanf("%f", &arr[i]);
//    }
//    for (i = 0; i < n; i++) {
//        sum += arr[i];
//    }
//    mean = sum / n;
//    printf("The mean of your Array of elements is:  %f", mean);
//}
    //QUESTION 3(POSITION OF SMALLEST NUMBER OF N NUMBERS IN AN ARRAY)
//    int i,n,arr[20];
//    printf("Please Enter the Number of elements: \n");
//    scanf("%d",&n);
//    printf("Kindly Enter Your Array Elements now: \n");
//    for (i=0;i<n;i++){
//        scanf("%d",&arr[i]);
//        int smallest_num = arr[i];
// QUESTION 3(PRINT THE POSITION OF THE SMALLEST NUMBER OF N NUMBERS USING ARRAY)
//    int  a[20], n, sml=0, smlp, i ;
//    printf(" Enter the Numbers of terms in Array: ") ;
//    scanf("%d",&n) ;
//    printf("\n Enter the Array of Element : \n") ;
//    for (  i = 1 ; i <= n ; i++)
//    {
//        scanf("%d",&a[i]) ;
//    }
//    sml = a[1] ;
//    for (  i = 1 ; i <= n ; i++)
//    {
//        if ( a[i] <= sml )
//        {
//            sml = a[i] ;
//            smlp = i ;
//        }}
//    printf("\n Position of smallest Element is: %d ",smlp);
//    printf("\n Smallest Number is : %d ",sml);
//    return 0;}
//QUESTION 4(to find the second largest of n numbers using an array.)
//        int  a[20], b[20], n, sml=0, pos, i, j, temp ;
//        printf(" Enter the Numbers of terms: ") ;
//        scanf("%d",&n) ;
//        printf("\n Enter the terms : \n") ;
//        for (  i = 1 ; i <= n ; i++)
//        {
//            scanf("%d",& a[i]) ;
//            b[i] = a[i] ;
//        }
//        for (  i = 1 ; i <= n ; i++)
//        {
//            for (  j = 1 ; j <= n ; j++)
//            {
//                if ( a[i] <= a[j] )
//                {
//                    temp = a[i] ;
//                    a[i] = a[j] ;
//                    a[j] = temp ;
//                }}}
//        printf("\n The Array Elements are: \n") ;
//        for (  i = 1 ; i <= n ; i++)
//            printf(" %d \t",b[i]) ;
//
//        printf("\n Second Smallest Element is : %d",a[2]) ;
//
//}
//QUESTION 6(Write a program to find whether the array of integers contains a duplicate number.)
        int  a[20], i, j, n, dub=0, dubn=0 ;
        printf(" Enter the Number of elements: ") ;
        scanf("%d",&n) ;
        printf("\n Enter the elements : \n") ;
        for (  i = 1 ; i <= n ; i++)
            scanf("%d",&a[i]) ;

        for (  i = 1 ; i <= n ; i++)
        {
            dub = 0 ;
            for (  j = i ; j = n ; j++)
            {
                if ( a[j] <= a[i] )
                {
                    dub = dub + 1 ;
                }
            }
            if ( dub > 1 )
            {
                printf(" \n %d is a dublicate element.",a[i]) ;
                dubn = 1 ;
            }
        }
        if ( dubn == 0 )
            printf("\n There is no dublicate element. ") ;
        return ( 0 ) ;



