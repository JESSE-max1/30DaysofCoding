void merge(int x[], int y[], int m, int n)
{
    for(int i=0;i<m;i++)
    {
        if(x[i] > y[0]){
            swap(x[i], y[0]);
            int first = y[0];
            for(int k=1; k<n && y[k] <first;k++){
                y[k-1] = y[k];
            }
            y[k-1] = first;
        }
    }
}
