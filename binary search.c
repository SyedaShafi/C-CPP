# include <stdio.h>
int main ()
{
    int arr[]={1,3,4,6,7,8,9,11,13,45,67,89,90,122,125};
    int lowx=0;
    int highx=14;
    int mid_idx;
    int num=122;
    while (lowx<=highx)
    {
        mid_idx=(lowx+highx)/2;
    if (num==arr[mid_idx])break;
    else if (num<arr[mid_idx]) highx=mid_idx-1;
    else lowx=mid_idx+1;

    }
    if (lowx>highx) printf ("%d is not in the array",num);
    else printf ("%d is found in the index %d",num,mid_idx);
}
