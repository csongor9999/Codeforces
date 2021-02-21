import java.util.Scanner;

public class _61A {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s1 = in.next();
		String s2 = in.next();
		
		for(int i=0;i<s1.length();i++) {
			if(s1.charAt(i) == s2.charAt(i)) {
				System.out.print("0");
			} else {
				System.out.print("1");
			}
		}
	
	}
}
