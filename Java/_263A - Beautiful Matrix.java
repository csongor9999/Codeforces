import java.util.Scanner;

public class _263A {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		int posX = 0;
		int posY = 0;

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				int tmp = in.nextInt();
				if (tmp == 1) {
					posX = i;
					posY = j;
				}
			}
		}

		System.out.println(Math.abs(3 - (posX+1)) + Math.abs(3 - (posY+1)));

	}

}
