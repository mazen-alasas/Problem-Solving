class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        int all = 0;
        for (int i = 1; i < salary.size() - 1; i++)
            all += salary[i];
        return (double) all / (salary.size() - 2); 
    }
};
