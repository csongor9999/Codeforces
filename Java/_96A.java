import java.util.Scanner;

public class _96A {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s = in.next();
		int count = 1;
		int i = 0;
		Character curr = '0';

		while (i < s.length() && count != 7) {
			if (s.charAt(i) == curr) {
				count++;
			} else {
				count = 1;
				curr = s.charAt(i);
			}
			i++;
		}

		if (count == 7) {
			System.out.println("YES");
		} else {
			System.out.println("NO");
		}

	}

}
