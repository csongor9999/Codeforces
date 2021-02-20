import java.util.Scanner;

public class _282A {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int count = 0;

		for (int i = 0; i < n; i++) {
			String tmp = in.next();
			if (tmp.equals("++X") || tmp.equals("X++")) {
				count++;
			} else if (tmp.equals("--X") || tmp.equals("X--")) {
				count--;
			}
		}

		System.out.println(count);

	}

}
