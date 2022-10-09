import java.util.*;

class NumThread extends Thread {

	public void run() 	{

	        Scanner obj = new Scanner(System.in);

	        

		Random random = new Random();

		System.out.println("How many time to create random integer");

		int q = obj.nextInt();

		System.out.println("Enter the range");

		int r=obj.nextInt();

		for(int i=0;i<q;i++)

		{

			int rN=random.nextInt(r);

			System.out.println("Random Integer generated : " + rN);

			if((rN%2) == 0) {

				SquareThread Thread1 = new SquareThread(rN);

				Thread1.start();

			}

			else {

				CubeThread Thread2= new CubeThread(rN);

				Thread2.start();

			}

			try {

				Thread.sleep(1000);

			} 

			catch (InterruptedException e)             {

				System.out.println(e);

			}

		}

	}

}

class SquareThread extends Thread {

	int n;

	SquareThread(int rN) 

	{

		n = rN;

	}

      public void run() {

		System.out.println("Square of " + n + " = " + (n * n));

	          }

}

class CubeThread extends Thread {

	int n;

	CubeThread(int rN) {

		n = rN;

	}

	public void run() {

		System.out.println("Cube of " + n + " = " + n*n*n);

	}

}

class exp1 {

	public static void main(String args[]) 

	{

		NumThread Thread = new NumThread();

		  Thread.start();

	}

}
