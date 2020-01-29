package com.company;

public class Main {

    public static void main(String[] args) {
Scanner input=new Scanner(System.in);
       int s1=input.nextInt();
       int s2=input.nextInt();
       int gcd=1;
       int k=2;
       while(k<=s1&&k<=s2){
           if (s1%k==0&&s2%k==0)
           {
               gcd=k;
           }
           k++;
       }
       System.out.println(gcd);
	// write your code here
    }
}
