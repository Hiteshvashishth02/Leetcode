class Solution {
public:
    int getLeastFrequentDigit(int n) {
        int temp=n;
        int ans=0;
        int freq[10]={0};

        while(temp>0){
            freq[temp%10]++;
            temp/=10;
        }    
        int mini=INT_MAX;
        for(int i=0;i<=9;i++){
            if(freq[i]!=0&&freq[i]<mini){
                mini=freq[i];
                ans=i;
            }
        }
        return ans ;
    }
};