import java.util.Scanner;

public class _469A {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int p = in.nextInt();
		int arr[] = new int[n];

		for (int i = 0; i < p; i++) {
			int a = in.nextInt();
			arr[a - 1]++;
		}

		int q = in.nextInt();

		for (int i = 0; i < q; i++) {
			int a = in.nextInt();
			arr[a - 1]++;
		}

		int k = 0;

		while (k < n && arr[k] != 0) {
			k++;
		}

		if (k == n) {
			System.out.print("I become the guy.");
		} else {
			System.out.print("Oh, my keyboard!");
		}

	}

}
