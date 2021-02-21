import java.util.Arrays;
import java.util.Scanner;

public class _405A {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int arr[] = new int[n];

		for (int i = 0; i < n; i++) {
			arr[i] = in.nextInt();
		}

		Arrays.sort(arr);

		for (int i = 0; i < n; i++) {
			System.out.print(arr[i]);

			if (i < n - 1) {
				System.out.print(" ");
			}
		}

	}

}
