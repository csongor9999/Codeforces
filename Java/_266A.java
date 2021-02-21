import java.util.Scanner;

public class _266A {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		String s = in.next();
		int count = 0;

		for (int i = 0; i < n - 1; i++) {
			if (s.charAt(i) == s.charAt(i + 1)) {
				count++;
			}
		}

		System.out.println(count);

	}

}
