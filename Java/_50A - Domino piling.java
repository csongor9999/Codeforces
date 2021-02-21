import java.util.Scanner;

public class _50A {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		double n = in.nextInt();
		double m = in.nextInt();
		System.out.print((int)(Math.floor(n / 2) * m + (n % 2 != 0 ? Math.floor(m / 2) : 0)));
	}

}
