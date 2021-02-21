import java.util.Scanner;

public class _71A {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		for (int i = 0; i < n; i++) {
			String s = in.next();
			if(s.length() > 10) {
				System.out.println(s.charAt(0) + String.valueOf(s.length()-2) + s.charAt(s.length()-1));
			} else {
				System.out.println(s);
			}
		}

	}

}
