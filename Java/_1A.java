import java.math.BigDecimal;
import java.util.Scanner;

public class _1A {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		double n = in.nextDouble();
		double m = in.nextDouble();
		double a = in.nextDouble();
		
		System.out.println((long)(Math.ceil(n/a)*Math.ceil(m/a)));	
	}

}
