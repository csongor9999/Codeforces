import java.util.Scanner;

public class _69A {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int arr[] = new int[3];

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 3; j++) {
				arr[j] += in.nextInt();
			}
		}

		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) {
			System.out.println("YES");
		} else {
			System.out.println("NO");
		}

	}

}
