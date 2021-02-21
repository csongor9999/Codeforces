import java.util.ArrayList;
import java.util.Scanner;

public class _144A {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		ArrayList<Integer> arr = new ArrayList<>();

		for (int i = 0; i < n; i++) {
			int tmp = in.nextInt();
			arr.add(tmp);
		}

		int max = 0;
		int min = 101;
		int maxIndex = 0;
		int minIndex = 0;

		for (int i = 0; i < n; i++) {
			if (arr.get(i) > max) {
				max = arr.get(i);
				maxIndex = i;
			}

			if (arr.get(i) <= min) {
				min = arr.get(i);
				minIndex = i;
			}

		}

		if (minIndex > maxIndex) {
			System.out.print(maxIndex + (n - minIndex - 1));
		} else {
			System.out.print(maxIndex + (n - minIndex - 1) - 1);
		}

	}

}
