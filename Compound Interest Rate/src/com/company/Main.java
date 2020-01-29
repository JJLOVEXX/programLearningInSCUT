package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double deposits = input.nextDouble();
        double annualRate = 0.05;
        double balance = 0;
        for (int i = 0; i < 6; i++) {
            balance = (balance + deposits) * (1 + annualRate / 12);
        }
        System.out.println(balance);
        // write your code here
    }
}
