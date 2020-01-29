package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double rateMonthly = input.nextDouble();
        int year = input.nextInt();
        double amount = input.nextDouble();
        double paymentMonthly = amount * rateMonthly / 1200 * year * 12 / (1 - 1 / Math.pow(1 + rateMonthly / 1200, year * 12));
        System.out.println(paymentMonthly);// write your code here
    }
}
