struct Item{
    int value;
    int weight;
}

bool comp(Item a,Item b){
    double r1 = double(a.value)/double(a.weight);
    double r2 = double(b.value)/double(b.weight);
    return r1>r2;
}

double FractionalKnapsack(int W, Item arr[],int n){
    sort(arr,arr+n,comp);
    int currWeight = 0;
    int finalValue = 0;
    for(int i=0;i<n;i++){
        if(currWeight+arr[i].weight <= W)
            currWeight += arr[i].weight;
            finalValue += arr[i].value;
        else
            double remain = W - currWeight;
            finalValue += (arr[i].value/arr[i].weight)*remain;
            break;
    }
    return finalValue;
}
