import java.util.*;
class matrix 
{
    int read()
    {
        int large=0;
        Scanner obj=new Scanner(System.in);
        System.out.println("Enter no of rows and columns of the matrix");
        int r=obj.nextInt();
        int c=obj.nextInt();
        int a[][]=new int[20][20];
        System.out.println("Enter Matrix elements");
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                a[i][j]=obj.nextInt();
        System.out.println("Matrix Elements: ");
        for(int i=0;i<r;i++)
            { 
                System.out.println("\n"); 
                   for(int j=0;j<c;j++)
                   {
                    System.out.print("\t"+a[i][j]);
                  }  
            }    
        large=a[0][0];
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                if(a[i][j]>large)
                    large=a[i][j];
        return large;
    }
}

public class main
{
    public static void main(String args[])
    {
        matrix m[]=new matrix[2];
        int y[]=new int[2];
        for(int i=0;i<2;i++)
        {
            System.out.println("\nEnter elements of matrix "+(i+1));
            m[i]=new matrix();
            y[i]=m[i].read();
        }

        if(y[0]>y[1])
            System.out.println("\nMatrix object m[1] has largest cell value");
        else 
            System.out.println("\nMatrix object m[2] has largest cell value");
    }
}
