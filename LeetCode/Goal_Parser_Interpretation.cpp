class Solution {
public:
    string interpret(string command) {
        string result = "";

        int i = 0;

        while (i < command.size()) 
        {
            if (command[i] == 'G') 
            {
                result += 'G';
                i++;
            } 
            else if (command.substr(i, 2) == "()") 
            {
                result += 'o';
                i += 2;
            } 
            else if (command.substr(i, 4) == "(al)") 
            {
                result += "al";
                i += 4;
            }
        }

        return result;
    }
};
