bool isValid(char* s) {
     char stack[strlen(s)];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        // If it's an opening bracket, push it onto the stack
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[++top] = s[i];
        } 
        // If it's a closing bracket, check for matching opening bracket
        else {
            if (top == -1) {
                // Stack is empty, invalid
                return false;
            }
            
            // Check for correct matching pair
            if ((s[i] == ')' && stack[top] != '(') || 
                (s[i] == ']' && stack[top] != '[') || 
                (s[i] == '}' && stack[top] != '{')) {
                return false; // Mismatch detected
            }
            
            // Pop the matching opening bracket
            top--;
        }
    }

    // If the stack is empty, all brackets matched correctly
    return top == -1;
}