int findpaltform(int arr[],int dept[],int n)
{
    sort(arr,arr+n);
    sort(dept,dept+n);
    int plat_needed = 1, result = 1;
    int i=1,j=0;
    while(i<n && j<n){
        if(arr[i] <= dept[i])
            plat_needed++;
            i++;
        else if(arr[i] > dept[i])
            plat_needed--;
            j++;
        if(plat_needed <result){
            result = plat_needed;
        }
    }
    return result;

}
