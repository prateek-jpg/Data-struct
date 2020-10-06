package ConditionalStatements;

public class NestedIfElse {

	public static void main(String[] args) {
//		question-find the greatest of three given numbers
		int a = 12;
		int b = 8;
		int c = 10;
			int reasult =0;
		if(a>b) {            
			if(a>c) {
				reasult = a;
			}else {
				reasult = c;
			}
		}else {
			if(b>c) {
				reasult = b;
			}else {
				reasult = c;
			}
	}
		
		
		
//		reasult = a>b ? a>c ? a : c : b >c ? b : c;        using ternary operator
		
		
		System.out.println("the greatest of all the three numbers is "+ reasult);

	}

}
