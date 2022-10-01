import java.util.*;
import java.lang.*;

class fcfs
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int n,inithead,total=0;
		System.out.println("Enter the no of requests:");
		n=sc.nextInt();
		int req[]=new int[n];
		System.out.println("Enter the requests:");
		for(int i=0;i<n;i++)
		{
			req[i]=sc.nextInt();
		}
		System.out.println("Enter the position of head:");
		inithead=sc.nextInt();
		for(int i=0;i<n;i++)
		{
			total+=Math.abs(req[i]-inithead);
			inithead=req[i];
		}
		System.out.format("Total head movement is: %d\n",total);
		sc.close();
	}
}
		
		
