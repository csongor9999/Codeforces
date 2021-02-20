import java.util.Scanner;

public class _118A {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String n = in.next();
		
		for(int i=0;i<n.length();i++) {
			if(n.charAt(i) != 'a' && n.charAt(i) != 'A' && n.charAt(i) != 'o' && n.charAt(i) != 'O' && n.charAt(i) != 'y' && n.charAt(i) != 'Y' && n.charAt(i) != 'e' && n.charAt(i) != 'E' && n.charAt(i) != 'u' && n.charAt(i) != 'U' && n.charAt(i) != 'i' && n.charAt(i) != 'I') {
				System.out.print("." + Character.toLowerCase(n.charAt(i)));
			}
		}

	}

}
