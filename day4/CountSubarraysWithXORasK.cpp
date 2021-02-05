int solve(vector<int>&A, int B){
map<int,int>freq;
int cnt = 0;
int Xor = 0;
for(auto it: A){
    Xor = Xor^it;
    if(Xor == B){
        cnt++;
    }
    if(freq.find(Xor^B) != freq.end()){
        cnt += freq[Xor^B];
    }
    freq[Xor] += 1;
}

}

