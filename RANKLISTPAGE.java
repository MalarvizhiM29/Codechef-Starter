/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.lang.Math.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		for(int i=0;i<t;i++)
		{
		    int x=sc.nextInt();
		    int temp=0;
		    for(int j=1;j<=x;j+=25)
		    {
		        temp++;
		    }
		    System.out.println(temp);
		}
	}
}
