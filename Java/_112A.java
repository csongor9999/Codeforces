import java.util.Scanner;

public class _112A {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String a = in.next();
		String b = in.next();

		int i = 0;
		while (i < a.length() && Character.toLowerCase(a.charAt(i)) == Character.toLowerCase(b.charAt(i))) {
			i++;
		}

		if (i == a.length()) {
			System.out.println(0);
		} else if (Character.toLowerCase(a.charAt(i)) < Character.toLowerCase(b.charAt(i))) {
			System.out.println(-1);
		} else {
			System.out.println(1);
		}

	}

}
