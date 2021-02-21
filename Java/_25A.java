import java.util.Scanner;

public class _25A {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();

		int even = 0;
		int evenIndex = 0;
		int oddIndex = 0;

		for (int i = 0; i < n; i++) {
			int tmp = in.nextInt();
			if (tmp % 2 == 0) {
				even++;
				evenIndex = i;
			} else {
				oddIndex = i;
			}
		}

		if (even == 1) {
			System.out.print(evenIndex+1);
		} else {
			System.out.print(oddIndex+1);
		}
	}

}
