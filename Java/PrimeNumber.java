import java.util.Scanner;

public class PrimeNumber {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("input bilangan bulat 1 : ");
    while (!scanner.hasNextInt()) {
      System.out.println("Harus bilangan bulat!");
      scanner.next();
    }
    int a = scanner.nextInt();

    System.out.println("input bilangan bulat 2 : ");
    while (!scanner.hasNextInt()) {
      System.out.println("Harus bilangan bulat!");
      scanner.next();
    }
    int b = scanner.nextInt();

    for (int i = a + 1; i <= b; i++) {
      if (i % 2 == 0) {
        if (isPrime(i)) {
          System.out.print(i + " is even prime, ");
        } else {
          System.out.print(i + " is even, ");
        }
      } else {
        if (isPrime(i)) {
          System.out.print(i + " is odd prime, ");
        } else {
          System.out.print(i + " is odd, ");
        }
      }
    }
  }

  public static boolean isPrime(int val) {
    if (val == 1 || val == 0) {
      return false;
    }

    for (int j = 2; j < val; j++) {
      if (val % j == 0) {
        return false;
      }
    }
    return true;
  }

}
