// Write a program in Java to accept 10 numbers from command line and check how many of them are even and how many odd.
public class Checkevenorodd {
	public static void main(String[] args) {
		int evenCount = 0, oddCount = 0;
		for (int i = 0; i < args.length; i++) {
			if (Integer.parseInt(args[i]) % 2 == 0) {
				evenCount++;
			} else {
				oddCount++;
			}
		}
		System.out.println("\n Total Number of Even Numbers in this Array = " + evenCount);
		System.out.println("\n Total Number of Odd  Numbers in this Array = " + oddCount);
	}
}
