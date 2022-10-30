public class ValidParanthesis {
    public boolean isValid(String s) {
        char arr[] = s.toCharArray();
		Stack<Character> set = new Stack();
		for (Character ch : arr) {
			if (ch == '{' || ch == '[' || ch == '(') {
				set.push(ch);
			} else if (ch == ']') {
				if (set.isEmpty() || set.peek() != '[') {
					return false;
				} 
				set.pop();
			} else if (ch == ')') {
				if (set.isEmpty() ||  set.peek() != '(') 
					return false;
				set.pop();	
			} else if (ch == '}') {
				if (set.isEmpty() ||  set.peek() != '{') 
					return false;
				set.pop();	
			}
		}
		return set.size() == 0;
	    }
} ValidParanthesis {
    
}
