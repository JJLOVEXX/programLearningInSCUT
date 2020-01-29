package com.company;

public class Main {
    public static void main(String[] args) {
        for (double p = 2; p <= 31; p++) {
            if (Math.pow(2, p - 1) * (Math.pow(2, p) - 1) <= 10000 && isPrime(p) && isPrime(Math.pow(2, p) - 1)) {
                System.out.println(p + "  " + Math.pow(2, p - 1) * (Math.pow(2, p) - 1) + "is a complete number.");
            }
        }
        // write your code here
    }

    static public boolean isPrime(double m) {
        boolean yes = true;
        for (int divisor = 2; divisor <= m / 2; divisor++) {
            if (m % divisor == 0) {
                yes = false;
                break;
            }
        }
       return yes;
    }
    // write your code here

}
