// O(n ^ 2)
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set <string> s;
        for(int i = 0; i < emails.size(); i++){
            string email = "";
            for(int j = 0; j < emails[i].size(); j++){
                if(emails[i][j] == '.')
                    continue;
                if(emails[i][j] == '+' || emails[i][j] == '@')
                    break;
                email += emails[i][j];
            }
            email += emails[i].substr(emails[i].find('@'),emails[i].size()-1);
            s.insert(email);
        }
        return s.size();
    }
};
