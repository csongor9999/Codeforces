import java.util.ArrayList;
import java.util.Scanner;

public class _158A {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int k = in.nextInt();
		ArrayList<Integer> arr = new ArrayList<>();
		int count = 0;

		for (int i = 0; i < n; i++) {
			int tmp = in.nextInt();
			arr.add(tmp);
		}

		for (int i = 0; i < n; i++) {
			if (arr.get(i) >= arr.get(k-1) && arr.get(i) > 0) {
				count++;
			}
		}

		System.out.println(count);

	}

}
