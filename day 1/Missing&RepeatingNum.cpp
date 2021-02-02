#include<bits/stdc++.h>
using namespace std;

vector<int> repeatednumber(const vector<int>&A)
{
    long long int len = A.size();
    long long int sum_n = (len * (len+1))/2;
    long long int sum_nsq = (len * (len+1) * (2*len+1))/6;
    long long int missingNum = 0,repeating =0;

    for(int i=0; i<len ;i++)
    {
        sum_n -= (long long int) A[i];
        sum_nsq -= (long long int) A[i] * (long long int)A[i];
    }
    missingNum = (sum_n + sum_nsq/sum_n)/2;
    repeating = missingNum - sum_n;
    vector<int> ans;
    ans.push_back(missingNum);
    ans.push_back(repeating);
    return ans;
}

int main(void)
{
    std::vector<int> v = {4,3,6,2,1,6,7};
    vector<int>res = repeatednumber(v);
    for(int x:res){
        cout << x << " ";
    }
    cout << endl;

}
