package com.company;

public class Main {

    public static void main(String[] args) {
        final int NUMBER_OF_PRIMES = 50;
        int count = 0;
        int number = 2;


        while (count < NUMBER_OF_PRIMES) {
            boolean isPrime = true;
            for (int divisor = 2; divisor*divisor <= number ; divisor++) {
                if (number % divisor == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                System.out.println(number);
                count++;
            }
            number++;
        }
        // write your code here
    }
}
