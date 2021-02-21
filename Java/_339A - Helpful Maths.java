import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class _339A {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		String s = in.next();
		String[] arr = s.split("\\+");
		ArrayList<Integer> intArr = new ArrayList<>();

		for (int i = 0; i < arr.length; i++) {
			intArr.add((Integer.parseInt(arr[i])));
		}

		Collections.sort(intArr);

		for (int i = 0; i < arr.length; i++) {
			System.out.print(intArr.get(i));

			if (i != arr.length - 1) {
				System.out.print("+");
			}
		}

	}

}
