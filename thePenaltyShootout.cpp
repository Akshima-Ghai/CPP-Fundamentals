class Solution{
public:	//hello
	
	int penaltyScore(string S)
	{
	    // Your code goes here
	    int count=0;
	    for(int i=0;i<S.length()-1;i++){
	        if(S[i]=='2'){
	            if(S[i+1]=='1'){
	                count++;
	            }
	        }
	    }
	    return count;
	}
};
