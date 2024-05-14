class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {


        int i=0,j=0;
        int n=customers.size();
        int sum=0,res=0;
        int temp=0;

       for (int i = 0; i < n; i++) {
            if (!grumpy[i]) {
                sum += customers[i];
                customers[i] = 0; // Marking as 0 to indicate already satisfied
            }
        }


        while(j < n) {
    if (grumpy[j])
        temp += customers[j];
    if (j - i + 1 < minutes)
        j++;
    else if (j - i + 1 == minutes) {
        res = max(res, sum + temp);
        if (grumpy[i])
            temp -= customers[i];
        i++;
        j++;
    }
}

        return res;
    }
};