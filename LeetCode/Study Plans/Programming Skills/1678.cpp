class Solution {
public:
    string interpret(string command) {
        string out = "";
        for(int i = 0; i < command.size(); i++) {
            if((command[i] >= 'a' && command[i] <= 'z') || (command[i] >= 'A' && command[i] <= 'Z'))
                out += command[i];
            if(command[i] == '(' && command[i + 1] == ')')
                out += 'o';
        }
        return out;
    }
};
